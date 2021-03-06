#!/usr/bin/env python

import getopt
import optparse
import sys

import cmd_options
import util

#from __future__ import print_function
"""@package make_simpoint_weights
Generate the weights files for ech binary in CBSP.

"""


def readPoints(pointsfile):
    """
    Reads the simpoints from points file and return them in a list

    @type   pointsfile: string
    @param  pointsfile: name of the points file (simpoint generated)
    @rtype  points: list
    @return points: points generated by simpoint
    """
    #print 'Points file is: ', pointsfile
    try:
        with open(pointsfile) as f:
            points = []
            for line in f:
                points.append(int(line.split()[0]))
                #print len(points)
    except IOError:
        print 'Problem encountered reading file: %s' % pointsfile
        sys.exit(-1)

    return points


def readLabels(labelsfile):
    """
    Reads the simpoint generate labels file and return the labels in a list

    @type   labelsfile: string
    @param  labelsfile: name of the labels file (simpoint generated)
    @rtype  labels: list
    @return labels: labels generated by simpoint
    """
    print 'Reading labels from "' + labelsfile + '"...'
    try:
        with open(labelsfile) as f:
            labels = []
            for line in f:
                labels.append(int(line.split()[0]))
        print ' Read', len(labels), 'labels.'
    except IOError:
        print 'Problem encountered reading file: %s' % labelsfile
        sys.exit(-1)

    return labels


def readTrace(tracefile, col):
    """
    reads the col'th element of trace pairs from trace file

    @type   tracefile: string
    @param  tracefile: name of the trace file (matching program generated)
    @rtype  traceSlices: list
    @return traceSlices: instruction size slices generated by matching program
    """
    try:
        with open(tracefile) as f:
            traceSlices = []
            for line in f:
                vals = line.split(',')
                try:
                    traceSlices.append(int(vals[col]))
                except:
                    return []
    except IOError:
        print 'Problem encountered reading file: %s' % tracefile
        sys.exit(-1)

    print 'Read', len(
        traceSlices), 'counts from column', col, 'of "' + tracefile + '; sum=', sum(
            traceSlices)
    return traceSlices


def measureWeightsWithLabels(labels, traceSlices):
    """
    measures the weights for the trace

    @type   labels: list
    @param  labels: labels generated by simpoint
    @type   traceSlices: list
    @param  traceSlices: instruction size slices generated by matching program
    @rtype  weights: list
    @return weights: weights for the selected labels of the trace
    """

    weights = [0] * (max(labels) + 1)
    if len(labels) != len(traceSlices):
        print 'Error: length of labels file does not equal that of matching instr-count file'
        sys.exit(1)
    grandSum = sum(traceSlices)
    for traceIdx, clusterIdx in enumerate(labels):
        weights[clusterIdx] += traceSlices[traceIdx]

# normalize
    weights = [(float(x) / float(grandSum)) for x in weights]

    # adjust for any rounding error
    weights[max(labels)] += 1.0 - sum(weights)

    #print weights
    return weights


def writeMeasuredWeight(weights, outputWeightFile):
    """
    writes the output weights in file

    @type   weights: string
    @param  weights: name of the trace file (matching program generated)
    @type   outputWeightFile: string
    @param  outputWeightFile: name of the output weight file
    """
    print 'Writing weights to "', outputWeightFile, '"...'
    with open(outputWeightFile, 'w') as f:
        for idx, val in enumerate(weights):
            if (val > 0):
                f.write(str(val) + ' ' + str(idx) + '\n')


def main(argv):
    """
    main function parses the arguments and calls functions to do the job
    """
    parser = optparse.OptionParser(
        formatter=cmd_options.BlankLinesIndentedHelpFormatter())
    parser.add_option('--label-file', '-l',
                        help='label file from simpoint tool',
                        default='labels.txt')
    parser.add_option(
        '--match_file', '-m',
        help='matching instr-count file from the crossBinMatcher tool',
        default='matching-instr-counts.csv')
    parser.add_option('--weight_file_list',
                        help='give a list of file names for the weight files',
                        nargs='+',
                        default=None)
    parser.add_option(
        '--weight_file_prefix', '-p',
        help='prefix for output weight files (index follows prefix)',
        default='weights')
    parser.add_option(
        '--weight_file_suffix', '-s',
        help='suffix for output weight files (suffix follows index)',
        default='.txt')
    options, args = parser.parse_args()

    # Added method cbsp() to 'options' to check if running CBSP.
    #
    util.AddMethodcbsp(options)

    # do the job
    labels = readLabels(options.label_file)
    index = 0
    while True:
        traceSlices = readTrace(options.match_file, index)
        if len(traceSlices) == 0: break
        weights = measureWeightsWithLabels(labels, traceSlices)
        if not options.weight_file_list:
            writeMeasuredWeight(weights, options.weight_file_prefix + str(index) +
                                options.weight_file_suffix)
        else:
            writeMeasuredWeight(weights, options.weight_file_list[index])

        index += 1
    print "Done."


if __name__ == "__main__":
    main(sys.argv[1:])
