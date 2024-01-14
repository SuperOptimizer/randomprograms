#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45384;
short var_1 = (short)21178;
unsigned long long int var_2 = 3857780134161658251ULL;
unsigned char var_3 = (unsigned char)102;
_Bool var_4 = (_Bool)1;
short var_5 = (short)4499;
signed char var_6 = (signed char)-98;
signed char var_7 = (signed char)38;
unsigned long long int var_8 = 6505947640968651502ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)-25203;
unsigned long long int var_11 = 14372542194876021060ULL;
short var_12 = (short)32419;
unsigned char var_13 = (unsigned char)200;
unsigned char var_14 = (unsigned char)171;
long long int var_15 = -2262784604381283697LL;
short arr_1 [16] ;
short arr_2 [16] ;
unsigned long long int arr_4 [16] ;
short arr_5 [16] [16] [16] [16] ;
short arr_8 [16] ;
unsigned char arr_9 [16] [16] [16] ;
unsigned char arr_11 [16] [16] [16] [16] [16] [16] [16] ;
short arr_13 [16] [16] ;
unsigned char arr_14 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-19176;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)11712;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 6529175222275653832ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-4849;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)-21476;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-31436;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)49;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test(unsigned short var_0, short var_1, unsigned long long int var_2, unsigned char var_3, _Bool var_4, short var_5, signed char var_6, signed char var_7, unsigned long long int var_8, _Bool var_9, int zero, short arr_1 [16] , short arr_2 [16] , unsigned long long int arr_4 [16] , short arr_5 [16] [16] [16] [16] , short arr_8 [16] , unsigned char arr_9 [16] [16] [16] , unsigned char arr_11 [16] [16] [16] [16] [16] [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_1 , arr_2 , arr_4 , arr_5 , arr_8 , arr_9 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
