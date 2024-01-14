#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16165124893043979230ULL;
unsigned long long int var_1 = 520688139275299017ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)34;
unsigned char var_5 = (unsigned char)233;
unsigned short var_7 = (unsigned short)46896;
unsigned long long int var_8 = 8761374478440270477ULL;
int var_9 = 1485909576;
unsigned long long int var_10 = 7776490515382341871ULL;
unsigned int var_11 = 2508078567U;
unsigned char var_13 = (unsigned char)65;
int var_15 = -633395675;
short var_17 = (short)24387;
int zero = 0;
unsigned short var_19 = (unsigned short)5604;
unsigned short var_20 = (unsigned short)31514;
long long int var_21 = -6622390984988855009LL;
short var_22 = (short)-4934;
int var_23 = 1636697809;
short arr_1 [14] ;
short arr_2 [14] [14] ;
unsigned char arr_4 [14] [14] ;
signed char arr_6 [14] [14] ;
long long int arr_8 [14] ;
unsigned long long int arr_13 [14] ;
unsigned int arr_3 [14] ;
short arr_14 [14] [14] [14] [14] [14] ;
int arr_15 [14] [14] [14] [14] ;
unsigned char arr_16 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)14378;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)27674;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)-84;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -3098713040554980661LL : 7996767787067987676LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 18179692752432200391ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1256984468U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)23211 : (short)14867;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1636536439 : 693281581;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)76;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test(unsigned long long int var_0, unsigned long long int var_1, _Bool var_3, signed char var_4, unsigned char var_5, unsigned short var_7, unsigned long long int var_8, int var_9, unsigned long long int var_10, unsigned int var_11, unsigned char var_13, int var_15, short var_17, int zero, short arr_1 [14] , short arr_2 [14] [14] , unsigned char arr_4 [14] [14] , signed char arr_6 [14] [14] , long long int arr_8 [14] , unsigned long long int arr_13 [14] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_13, var_15, var_17, zero, arr_1 , arr_2 , arr_4 , arr_6 , arr_8 , arr_13 );
    checksum();
    printf("%llu\n", seed);
}
