//==============================================================================
//
// Copyright (C) 2010, 2011, 2012
// Marco Antonio Zanata Alves
//
// GPPD - Parallel and Distributed Processing Group
// Universidade Federal do Rio Grande do Sul
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2 of the License, or (at your
// option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
//
//==============================================================================
///  vima_defines.h
///###########################################################################
///  This file defines VIMA instruction names, mnemonics, their total number,
///  and their equivalent x86 mnemonic.
///###########################################################################

#ifndef TRACE_GENERATOR_EXTRAS_PINPLAY_SINUCA_TRACER_VIMA_DEFINES_H_
    #define TRACE_GENERATOR_EXTRAS_PINPLAY_SINUCA_TRACER_VIMA_DEFINES_H_
#endif  //  TRACE_GENERATOR_EXTRAS_PINPLAY_SINUCA_TRACER_VIMA_DEFINES_H_

#include<vector>
#include<string>

#define VIMA_INS_COUNT 112
#define VIMA_INT_ALU_COUNT 56
#define VIMA_FP_ALU_COUNT 24
#define VIMA_INT_MUL_COUNT 8
#define VIMA_FP_MUL_COUNT 4
#define VIMA_INT_DIV_COUNT 8
#define VIMA_FP_DIV_COUNT 4
#define VIMA_INT_MLA_COUNT 4
#define VIMA_FP_MLA_COUNT 4

const char *vima_int_alu_init[] = { "_vim64_iadds",     "_vim2K_iadds",
                                    "_vim64_iaddu",     "_vim2K_iaddu",
                                    "_vim64_isubs",     "_vim2K_isubs",
                                    "_vim64_isubu",     "_vim2K_isubu",
                                    "_vim64_iabss",     "_vim2K_iabss",
                                    "_vim64_imaxs",     "_vim2K_imaxs",
                                    "_vim64_imins",     "_vim2K_imins",
                                    "_vim64_icpys",     "_vim2K_icpys",
                                    "_vim64_icpyu",     "_vim2K_icpyu",
                                    "_vim64_iandu",     "_vim2K_iandu",
                                    "_vim64_iorun",     "_vim2K_iorun",
                                    "_vim64_ixoru",     "_vim2K_ixoru",
                                    "_vim64_inots",     "_vim2K_inots",
                                    "_vim64_islts",     "_vim2K_islts",
                                    "_vim64_isltu",     "_vim2K_isltu",
                                    "_vim64_icmqs",     "_vim2K_icmqs",
                                    "_vim64_icmqu",     "_vim2K_icmqu",
                                    "_vim64_isllu",     "_vim2K_isllu",
                                    "_vim64_isrlu",     "_vim2K_isrlu",
                                    "_vim64_isras",     "_vim2K_isras",
                                    "_vim64_imovs",     "_vim2K_imovs",
                                    "_vim64_imovu",     "_vim2K_imovu",
                                    "_vim64_fabss",     "_vim2K_fabss",
                                    "_vim64_fcpys",     "_vim2K_fcpys",
                                    "_vim64_fmovs",     "_vim2K_fmovs",
                                    "_vim32_dabss",     "_vim1K_dabss",
                                    "_vim32_dcpys",     "_vim1K_dcpys",
                                    "_vim32_dmovs",     "_vim1K_dmovs"
                                    };
static const std::vector<string> vima_int_alu_names(vima_int_alu_init,
                                    vima_int_alu_init + VIMA_INT_ALU_COUNT);


const char *vima_fp_alu_init[] = {  "_vim64_fadds",     "_vim2K_fadds",
                                    "_vim64_fsubs",     "_vim2K_fsubs",
                                    "_vim64_fmaxs",     "_vim2K_fmaxs",
                                    "_vim64_fmins",     "_vim2K_fmins",
                                    "_vim64_fslts",     "_vim2K_fslts",
                                    "_vim64_fcmqs",     "_vim2K_fcmqs",
                                    "_vim32_dadds",     "_vim1K_dadds",
                                    "_vim32_dsubs",     "_vim1K_dsubs",
                                    "_vim32_dmaxs",     "_vim1K_dmaxs",
                                    "_vim32_dmins",     "_vim1K_dmins",
                                    "_vim32_dslts",     "_vim1K_dslts",
                                    "_vim32_dcmqs",     "_vim1K_dcmqs"
                                    };
static const std::vector<string> vima_fp_alu_names(vima_fp_alu_init,
                                    vima_fp_alu_init + VIMA_FP_ALU_COUNT);

const char *vima_int_mul_init[] = { "_vim64_imuls",     "_vim2K_imuls",
                                    "_vim64_imulu",     "_vim2K_imulu",
                                    "_vim32_imuls",     "_vim1K_imuls",
                                    "_vim32_imulu",     "_vim1K_imulu"
                                    };
static const std::vector<string> vima_int_mul_names(vima_int_mul_init,
                                    vima_int_mul_init + VIMA_INT_MUL_COUNT);

const char *vima_fp_mul_init[] = {  "_vim64_fmuls",     "_vim2K_fmuls",
                                    "_vim32_dmuls",     "_vim1K_dmuls"
                                    };
static const std::vector<string> vima_fp_mul_names(vima_fp_mul_init,
                                    vima_fp_mul_init + VIMA_FP_MUL_COUNT);

const char *vima_int_div_init[] = { "_vim64_idivs",     "_vim2K_idivs",
                                    "_vim64_idivu",     "_vim2K_idivu",
                                    "_vim32_idivs",     "_vim1K_idivs",
                                    "_vim32_idivu",     "_vim1K_idivu"
                                    };
static const std::vector<string> vima_int_div_names(vima_int_div_init,
                                    vima_int_div_init + VIMA_INT_DIV_COUNT);

const char *vima_fp_div_init[] = { "_vim64_fdivs",     "_vim2K_fdivs",
                                    "_vim32_ddivs",     "_vim1K_ddivs"
                                    };
static const std::vector<string> vima_fp_div_names(vima_fp_div_init,
                                    vima_fp_div_init + VIMA_FP_DIV_COUNT);

const char *vima_int_mla_init[] = { "_vim64_icumu",     "_vim2K_icumu",
                                    "_vim64_icums",     "_vim2K_icums"
                                    };
static const std::vector<string> vima_int_mla_names(vima_int_mla_init,
                                    vima_int_mla_init + VIMA_INT_MLA_COUNT);

const char *vima_fp_mla_init[] = {  "_vim64_fcums",     "_vim2K_fcums",
                                    "_vim32_dcums",     "_vim1K_dcums"
                                    };
static const std::vector<string> vima_fp_mla_names(vima_fp_mla_init,
                                    vima_fp_mla_init + VIMA_FP_MLA_COUNT);


const char *vima_init[] = { "_vim64_iadds",     "_vim2K_iadds",
                            "_vim64_iaddu",     "_vim2K_iaddu",
                            "_vim64_isubs",     "_vim2K_isubs",
                            "_vim64_isubu",     "_vim2K_isubu",
                            "_vim64_iabss",     "_vim2K_iabss",
                            "_vim64_imaxs",     "_vim2K_imaxs",
                            "_vim64_imins",     "_vim2K_imins",
                            "_vim64_icpys",     "_vim2K_icpys",
                            "_vim64_icpyu",     "_vim2K_icpyu",
                            "_vim64_iandu",     "_vim2K_iandu",
                            "_vim64_iorun",     "_vim2K_iorun",
                            "_vim64_ixoru",     "_vim2K_ixoru",
                            "_vim64_inots",     "_vim2K_inots",
                            "_vim64_islts",     "_vim2K_islts",
                            "_vim64_isltu",     "_vim2K_isltu",
                            "_vim64_icmqs",     "_vim2K_icmqs",
                            "_vim64_icmqu",     "_vim2K_icmqu",
                            "_vim64_isllu",     "_vim2K_isllu",
                            "_vim64_isrlu",     "_vim2K_isrlu",
                            "_vim64_isras",     "_vim2K_isras",
                            "_vim64_idivs",     "_vim2K_idivs",
                            "_vim64_idivu",     "_vim2K_idivu",
                            "_vim32_idivs",     "_vim1K_idivs",
                            "_vim32_idivu",     "_vim1K_idivu",
                            "_vim64_imuls",     "_vim2K_imuls",
                            "_vim64_imulu",     "_vim2K_imulu",
                            "_vim32_imuls",     "_vim1K_imuls",
                            "_vim32_imulu",     "_vim1K_imulu",
                            "_vim64_icumu",     "_vim2K_icumu",
                            "_vim64_icums",     "_vim2K_icums",
                            "_vim64_imovs",     "_vim2K_imovs",
                            "_vim64_imovu",     "_vim2K_imovu",
                            "_vim64_fadds",     "_vim2K_fadds",
                            "_vim64_fsubs",     "_vim2K_fsubs",
                            "_vim64_fabss",     "_vim2K_fabss",
                            "_vim64_fmaxs",     "_vim2K_fmaxs",
                            "_vim64_fmins",     "_vim2K_fmins",
                            "_vim64_fcpys",     "_vim2K_fcpys",
                            "_vim64_fslts",     "_vim2K_fslts",
                            "_vim64_fcmqs",     "_vim2K_fcmqs",
                            "_vim64_fdivs",     "_vim2K_fdivs",
                            "_vim64_fmuls",     "_vim2K_fmuls",
                            "_vim64_fcums",     "_vim2K_fcums",
                            "_vim64_fmovs",     "_vim2K_fmovs",
                            "_vim32_dadds",     "_vim1K_dadds",
                            "_vim32_dsubs",     "_vim1K_dsubs",
                            "_vim32_dabss",     "_vim1K_dabss",
                            "_vim32_dmaxs",     "_vim1K_dmaxs",
                            "_vim32_dmins",     "_vim1K_dmins",
                            "_vim32_dcpys",     "_vim1K_dcpys",
                            "_vim32_dslts",     "_vim1K_dslts",
                            "_vim32_dcmqs",     "_vim1K_dcmqs",
                            "_vim32_ddivs",     "_vim1K_ddivs",
                            "_vim32_dmuls",     "_vim1K_dmuls",
                            "_vim32_dcums",     "_vim1K_dcums",
                            "_vim32_dmovs",     "_vim1K_dmovs"
                            };
static const std::vector<string> vima_inst_names(vima_init,
                                    vima_init + VIMA_INS_COUNT);

const char *vima_mnem_init[] = { "VIMA_IADDS_64VECTOR_32OPER",
                                "VIMA_IADDS_2KVECTOR_32OPER",
                                "VIMA_IADDU_64VECTOR_32OPER",
                                "VIMA_IADDU_2KVECTOR_32OPER",
                                "VIMA_ISUBS_64VECTOR_32OPER",
                                "VIMA_ISUBS_2KVECTOR_32OPER",
                                "VIMA_ISUBU_64VECTOR_32OPER",
                                "VIMA_ISUBU_2KVECTOR_32OPER",
                                "VIMA_IABSS_64VECTOR_32OPER",
                                "VIMA_IABSS_2KVECTOR_32OPER",
                                "VIMA_IMAXS_64VECTOR_32OPER",
                                "VIMA_IMAXS_2KVECTOR_32OPER",
                                "VIMA_IMINS_64VECTOR_32OPER",
                                "VIMA_IMINS_2KVECTOR_32OPER",
                                "VIMA_ICPYS_64VECTOR_32OPER",
                                "VIMA_ICPYS_2KVECTOR_32OPER",
                                "VIMA_ICPYU_64VECTOR_32OPER",
                                "VIMA_ICPYU_2KVECTOR_32OPER",
                                "VIMA_IANDU_64VECTOR_32OPER",
                                "VIMA_IANDU_2KVECTOR_32OPER",
                                "VIMA_IORUN_64VECTOR_32OPER",
                                "VIMA_IORUN_2KVECTOR_32OPER",
                                "VIMA_IXORU_64VECTOR_32OPER",
                                "VIMA_IXORU_2KVECTOR_32OPER",
                                "VIMA_INOTS_64VECTOR_32OPER",
                                "VIMA_INOTS_2KVECTOR_32OPER",
                                "VIMA_ISLTS_64VECTOR_32OPER",
                                "VIMA_ISLTS_2KVECTOR_32OPER",
                                "VIMA_ISLTU_64VECTOR_32OPER",
                                "VIMA_ISLTU_2KVECTOR_32OPER",
                                "VIMA_ICMQS_64VECTOR_32OPER",
                                "VIMA_ICMQS_2KVECTOR_32OPER",
                                "VIMA_ICMQU_64VECTOR_32OPER",
                                "VIMA_ICMQU_2KVECTOR_32OPER",
                                "VIMA_ISLLU_64VECTOR_32OPER",
                                "VIMA_ISLLU_2KVECTOR_32OPER",
                                "VIMA_ISRLU_64VECTOR_32OPER",
                                "VIMA_ISRLU_2KVECTOR_32OPER",
                                "VIMA_ISRAS_64VECTOR_32OPER",
                                "VIMA_ISRAS_2KVECTOR_32OPER",
                                "VIMA_IDIVS_64VECTOR_32OPER",
                                "VIMA_IDIVS_2KVECTOR_32OPER",
                                "VIMA_IDIVU_64VECTOR_32OPER",
                                "VIMA_IDIVU_2KVECTOR_32OPER",
                                "VIMA_IDIVS_32VECTOR_64OPER",
                                "VIMA_IDIVS_1KVECTOR_32OPER",
                                "VIMA_IDIVU_32VECTOR_64OPER",
                                "VIMA_IDIVU_1KVECTOR_32OPER",
                                "VIMA_IMULS_64VECTOR_32OPER",
                                "VIMA_IMULS_2KVECTOR_32OPER",
                                "VIMA_IMULU_64VECTOR_32OPER",
                                "VIMA_IMULU_2KVECTOR_32OPER",
                                "VIMA_IMULS_32VECTOR_64OPER",
                                "VIMA_IMULS_1KVECTOR_32OPER",
                                "VIMA_IMULU_32VECTOR_64OPER",
                                "VIMA_IMULU_1KVECTOR_32OPER",
                                "VIMA_IMADU_64VECTOR_32OPER",
                                "VIMA_IMADU_2KVECTOR_32OPER",
                                "VIMA_IMADS_64VECTOR_32OPER",
                                "VIMA_IMADS_2KVECTOR_32OPER",
                                "VIMA_IMOVS_64VECTOR_32OPER",
                                "VIMA_IMOVS_2KVECTOR_32OPER",
                                "VIMA_IMOVU_64VECTOR_32OPER",
                                "VIMA_IMOVU_2KVECTOR_32OPER",
                                "VIMA_FADDS_64VECTOR_32OPER",
                                "VIMA_FADDS_2KVECTOR_32OPER",
                                "VIMA_FSUBS_64VECTOR_32OPER",
                                "VIMA_FSUBS_2KVECTOR_32OPER",
                                "VIMA_FABSS_64VECTOR_32OPER",
                                "VIMA_FABSS_2KVECTOR_32OPER",
                                "VIMA_FMAXS_64VECTOR_32OPER",
                                "VIMA_FMAXS_2KVECTOR_32OPER",
                                "VIMA_FMINS_64VECTOR_32OPER",
                                "VIMA_FMINS_2KVECTOR_32OPER",
                                "VIMA_FCPYS_64VECTOR_32OPER",
                                "VIMA_FCPYS_2KVECTOR_32OPER",
                                "VIMA_FSLTS_64VECTOR_32OPER",
                                "VIMA_FSLTS_2KVECTOR_32OPER",
                                "VIMA_FCMQS_64VECTOR_32OPER",
                                "VIMA_FCMQS_2KVECTOR_32OPER",
                                "VIMA_FDIVS_64VECTOR_32OPER",
                                "VIMA_FDIVS_2KVECTOR_32OPER",
                                "VIMA_FMULS_64VECTOR_32OPER",
                                "VIMA_FMULS_2KVECTOR_32OPER",
                                "VIMA_FMADS_64VECTOR_32OPER",
                                "VIMA_FMADS_2KVECTOR_32OPER",
                                "VIMA_FMOVS_64VECTOR_32OPER",
                                "VIMA_FMOVS_2KVECTOR_32OPER",
                                "VIMA_DADDS_32VECTOR_64OPER",
                                "VIMA_DADDS_1KVECTOR_32OPER",
                                "VIMA_DSUBS_32VECTOR_64OPER",
                                "VIMA_DSUBS_1KVECTOR_32OPER",
                                "VIMA_DABSS_32VECTOR_64OPER",
                                "VIMA_DABSS_1KVECTOR_32OPER",
                                "VIMA_DMAXS_32VECTOR_64OPER",
                                "VIMA_DMAXS_1KVECTOR_32OPER",
                                "VIMA_DMINS_32VECTOR_64OPER",
                                "VIMA_DMINS_1KVECTOR_32OPER",
                                "VIMA_DCPYS_32VECTOR_64OPER",
                                "VIMA_DCPYS_1KVECTOR_32OPER",
                                "VIMA_DSLTS_32VECTOR_64OPER",
                                "VIMA_DSLTS_1KVECTOR_32OPER",
                                "VIMA_DCMQS_32VECTOR_64OPER",
                                "VIMA_DCMQS_1KVECTOR_32OPER",
                                "VIMA_DDIVS_32VECTOR_64OPER",
                                "VIMA_DDIVS_1KVECTOR_32OPER",
                                "VIMA_DMULS_32VECTOR_64OPER",
                                "VIMA_DMULS_1KVECTOR_32OPER",
                                "VIMA_DMADS_32VECTOR_64OPER",
                                "VIMA_DMADS_1KVECTOR_32OPER",
                                "VIMA_DMOVS_32VECTOR_64OPER",
                                "VIMA_DMOVS_1KVECTOR_32OPER"
                                };

static const std::vector<string> vima_mnem_names(vima_mnem_init,
                                    vima_mnem_init + VIMA_INS_COUNT);

const char *vima_x86mnem_init[] = { "x86_IADDS_64VECTOR_32OPER",
                                    "x86_IADDS_2KVECTOR_32OPER",
                                    "x86_IADDU_64VECTOR_32OPER",
                                    "x86_IADDU_2KVECTOR_32OPER",
                                    "x86_ISUBS_64VECTOR_32OPER",
                                    "x86_ISUBS_2KVECTOR_32OPER",
                                    "x86_ISUBU_64VECTOR_32OPER",
                                    "x86_ISUBU_2KVECTOR_32OPER",
                                    "x86_IABSS_64VECTOR_32OPER",
                                    "x86_IABSS_2KVECTOR_32OPER",
                                    "x86_IMAXS_64VECTOR_32OPER",
                                    "x86_IMAXS_2KVECTOR_32OPER",
                                    "x86_IMINS_64VECTOR_32OPER",
                                    "x86_IMINS_2KVECTOR_32OPER",
                                    "x86_ICPYS_64VECTOR_32OPER",
                                    "x86_ICPYS_2KVECTOR_32OPER",
                                    "x86_ICPYU_64VECTOR_32OPER",
                                    "x86_ICPYU_2KVECTOR_32OPER",
                                    "x86_IANDU_64VECTOR_32OPER",
                                    "x86_IANDU_2KVECTOR_32OPER",
                                    "x86_IORUN_64VECTOR_32OPER",
                                    "x86_IORUN_2KVECTOR_32OPER",
                                    "x86_IXORU_64VECTOR_32OPER",
                                    "x86_IXORU_2KVECTOR_32OPER",
                                    "x86_INOTS_64VECTOR_32OPER",
                                    "x86_INOTS_2KVECTOR_32OPER",
                                    "x86_ISLTS_64VECTOR_32OPER",
                                    "x86_ISLTS_2KVECTOR_32OPER",
                                    "x86_ISLTU_64VECTOR_32OPER",
                                    "x86_ISLTU_2KVECTOR_32OPER",
                                    "x86_ICMQS_64VECTOR_32OPER",
                                    "x86_ICMQS_2KVECTOR_32OPER",
                                    "x86_ICMQU_64VECTOR_32OPER",
                                    "x86_ICMQU_2KVECTOR_32OPER",
                                    "x86_ISLLU_64VECTOR_32OPER",
                                    "x86_ISLLU_2KVECTOR_32OPER",
                                    "x86_ISRLU_64VECTOR_32OPER",
                                    "x86_ISRLU_2KVECTOR_32OPER",
                                    "x86_ISRAS_64VECTOR_32OPER",
                                    "x86_ISRAS_2KVECTOR_32OPER",
                                    "x86_IDIVS_64VECTOR_32OPER",
                                    "x86_IDIVS_2KVECTOR_32OPER",
                                    "x86_IDIVU_64VECTOR_32OPER",
                                    "x86_IDIVU_2KVECTOR_32OPER",
                                    "x86_IDIVS_32VECTOR_64OPER",
                                    "x86_IDIVS_1KVECTOR_32OPER",
                                    "x86_IDIVU_32VECTOR_64OPER",
                                    "x86_IDIVU_1KVECTOR_32OPER",
                                    "x86_IMULS_64VECTOR_32OPER",
                                    "x86_IMULS_2KVECTOR_32OPER",
                                    "x86_IMULU_64VECTOR_32OPER",
                                    "x86_IMULU_2KVECTOR_32OPER",
                                    "x86_IMULS_32VECTOR_64OPER",
                                    "x86_IMULS_1KVECTOR_32OPER",
                                    "x86_IMULU_32VECTOR_64OPER",
                                    "x86_IMULU_1KVECTOR_32OPER",
                                    "x86_IMADU_64VECTOR_32OPER",
                                    "x86_IMADU_2KVECTOR_32OPER",
                                    "x86_IMADS_64VECTOR_32OPER",
                                    "x86_IMULU_2KVECTOR_32OPER",
                                    "x86_IMOVS_64VECTOR_32OPER",
                                    "x86_IMOVS_2KVECTOR_32OPER",
                                    "x86_IMOVU_64VECTOR_32OPER",
                                    "x86_IMOVU_2KVECTOR_32OPER",
                                    "x86_FADDS_64VECTOR_32OPER",
                                    "x86_FADDS_2KVECTOR_32OPER",
                                    "x86_FSUBS_64VECTOR_32OPER",
                                    "x86_FSUBS_2KVECTOR_32OPER",
                                    "x86_FABSS_64VECTOR_32OPER",
                                    "x86_FABSS_2KVECTOR_32OPER",
                                    "x86_FMAXS_64VECTOR_32OPER",
                                    "x86_FMAXS_2KVECTOR_32OPER",
                                    "x86_FMINS_64VECTOR_32OPER",
                                    "x86_FMINS_2KVECTOR_32OPER",
                                    "x86_FCPYS_64VECTOR_32OPER",
                                    "x86_FCPYS_2KVECTOR_32OPER",
                                    "x86_FSLTS_64VECTOR_32OPER",
                                    "x86_FSLTS_2KVECTOR_32OPER",
                                    "x86_FCMQS_64VECTOR_32OPER",
                                    "x86_FCMQS_2KVECTOR_32OPER",
                                    "x86_FDIVS_64VECTOR_32OPER",
                                    "x86_FDIVS_2KVECTOR_32OPER",
                                    "x86_FMULS_64VECTOR_32OPER",
                                    "x86_FMULS_2KVECTOR_32OPER",
                                    "x86_FMADS_64VECTOR_32OPER",
                                    "x86_FMADS_2KVECTOR_32OPER",
                                    "x86_FMOVS_64VECTOR_32OPER",
                                    "x86_FMOVS_2KVECTOR_32OPER",
                                    "x86_DADDS_32VECTOR_64OPER",
                                    "x86_DADDS_1KVECTOR_32OPER",
                                    "x86_DSUBS_32VECTOR_64OPER",
                                    "x86_DSUBS_1KVECTOR_32OPER",
                                    "x86_DABSS_32VECTOR_64OPER",
                                    "x86_DABSS_1KVECTOR_32OPER",
                                    "x86_DMAXS_32VECTOR_64OPER",
                                    "x86_DMAXS_1KVECTOR_32OPER",
                                    "x86_DMINS_32VECTOR_64OPER",
                                    "x86_DMINS_1KVECTOR_32OPER",
                                    "x86_DCPYS_32VECTOR_64OPER",
                                    "x86_DCPYS_1KVECTOR_32OPER",
                                    "x86_DSLTS_32VECTOR_64OPER",
                                    "x86_DSLTS_1KVECTOR_32OPER",
                                    "x86_DCMQS_32VECTOR_64OPER",
                                    "x86_DCMQS_1KVECTOR_32OPER",
                                    "x86_DDIVS_32VECTOR_64OPER",
                                    "x86_DDIVS_1KVECTOR_32OPER",
                                    "x86_DMULS_32VECTOR_64OPER",
                                    "x86_DMULS_1KVECTOR_32OPER",
                                    "x86_DMADS_32VECTOR_64OPER",
                                    "x86_DMADS_1KVECTOR_32OPER",
                                    "x86_DMOVS_32VECTOR_64OPER",
                                    "x86_DMOVS_1KVECTOR_32OPER"
                                    };

static const std::vector<string> vima_x86mnem_names(vima_x86mnem_init,
                                    vima_x86mnem_init + VIMA_INS_COUNT);
