#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5807;
unsigned int var_2 = 2092866686U;
unsigned int var_6 = 3875893827U;
unsigned int var_7 = 3111991330U;
unsigned int var_9 = 2157107858U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-107;
int var_12 = 1008278685;
unsigned char var_13 = (unsigned char)221;
int zero = 0;
unsigned short var_15 = (unsigned short)51510;
int var_16 = 892794420;
unsigned long long int var_17 = 8946365275863294987ULL;
unsigned long long int var_18 = 12575583223829316009ULL;
signed char arr_2 [15] [15] [15] ;
short arr_5 [15] [15] [15] [15] ;
short arr_6 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)8765;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)8045 : (short)21491;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test(short var_1, unsigned int var_2, unsigned int var_6, unsigned int var_7, unsigned int var_9, _Bool var_10, signed char var_11, int var_12, unsigned char var_13, int zero, signed char arr_2 [15] [15] [15] , short arr_5 [15] [15] [15] [15] );

int main() {
    init();
    test(var_1, var_2, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero, arr_2 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
