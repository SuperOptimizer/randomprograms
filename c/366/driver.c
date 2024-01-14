#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1499574552U;
unsigned short var_1 = (unsigned short)27100;
unsigned short var_3 = (unsigned short)44008;
unsigned long long int var_4 = 4086260828790950464ULL;
unsigned short var_8 = (unsigned short)64137;
unsigned short var_9 = (unsigned short)21913;
unsigned short var_11 = (unsigned short)2180;
unsigned short var_12 = (unsigned short)19994;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7485466365251756647ULL;
unsigned short arr_5 [16] [16] [16] [16] ;
signed char arr_7 [16] [16] [16] ;
unsigned long long int arr_8 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)25293 : (unsigned short)3034;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-46 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 14306147797864244660ULL : 7184386034168141975ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned int var_0, unsigned short var_1, unsigned short var_3, unsigned long long int var_4, unsigned short var_8, unsigned short var_9, unsigned short var_11, unsigned short var_12, int zero, unsigned short arr_5 [16] [16] [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_8, var_9, var_11, var_12, zero, arr_5 );
    checksum();
    printf("%llu\n", seed);
}
