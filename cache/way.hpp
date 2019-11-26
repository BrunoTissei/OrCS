#ifndef LINE_H
#define LINE_H

class way_t {

    private:
        uint32_t POINTER_LEVELS;

    public:
        uint64_t address;
        uint64_t tag;
        uint32_t dirty;
        uint64_t lru;
        uint32_t prefetched;
        uint32_t valid;
        uint64_t ready_at;
        directory_way_t *directory_way;
        // way_t ***way_ptr_caches;

        uint32_t NUMBER_OF_PROCESSORS;
        INSTANTIATE_GET_SET_ADD(uint32_t, NUMBER_OF_PROCESSORS)

        way_t() {
            this->clean_way();

            libconfig::Setting &cfg_root = orcs_engine.configuration->getConfig();
            set_NUMBER_OF_PROCESSORS(cfg_root["PROCESSOR"].getLength());
        }

        ~way_t() {
            // for (uint32_t i = 0; i < NUMBER_OF_PROCESSORS; i++) {
                // for (uint32_t j = 0; j < POINTER_LEVELS; j++) {
            //         //free (way_ptr_caches[i][j]);
            //     }
            //     delete[] way_ptr_caches[i];
            // }
            // delete[] way_ptr_caches;
            // //delete[] directory_way;
        }

        // void allocate(uint32_t POINTER_LEVELS) {
        //     set_POINTER_LEVELS(POINTER_LEVELS);
        //     this->way_ptr_caches = new way_t**[NUMBER_OF_PROCESSORS];
        //     for (uint32_t i = 0; i < NUMBER_OF_PROCESSORS; i++) {
        //         this->way_ptr_caches[i] = new way_t*[POINTER_LEVELS];
        //     }
        // }

        void clean_way() {
            this->tag = 0;
            this->dirty = 0;
            this->lru = 0;
            this->prefetched = 0;
            this->valid = 0;
            this->ready_at = 0;
            this->address = 0;
            this->directory_way = NULL;
        }

        INSTANTIATE_GET_SET_ADD(uint32_t, POINTER_LEVELS)
};

#endif // LINE_H
