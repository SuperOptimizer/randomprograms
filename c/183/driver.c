#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1486083305U;
int var_1 = 1992201576;
unsigned long long int var_2 = 2110246073495539679ULL;
unsigned int var_3 = 903575804U;
unsigned int var_4 = 1265574019U;
int var_5 = -1776398989;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_9 = 1924833468;
signed char var_10 = (signed char)82;
short var_11 = (short)12767;
signed char var_12 = (signed char)-99;
unsigned int var_13 = 688280524U;
int zero = 0;
int var_14 = -56292193;
unsigned char var_15 = (unsigned char)132;
unsigned int var_16 = 2420894917U;
unsigned char var_17 = (unsigned char)130;
int var_18 = -1506397679;
unsigned int var_19 = 188456491U;
short var_20 = (short)-12978;
int var_21 = 1008545688;
signed char var_22 = (signed char)83;
unsigned long long int var_23 = 1468902347207900132ULL;
unsigned int var_24 = 2533470152U;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-8;
long long int arr_1 [18] [18] ;
int arr_4 [18] [18] [18] ;
int arr_13 [23] [23] [23] ;
unsigned int arr_17 [15] [15] ;
signed char arr_8 [18] [18] ;
unsigned long long int arr_14 [23] [23] ;
unsigned int arr_24 [15] [15] ;
signed char arr_25 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -4038332797607672088LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1257408826;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -74655291 : 1974355946;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 2376470328U : 1746101597U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 11413979984905633446ULL : 10100754935467607104ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? 3497249872U : 812431285U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)8;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned int var_0, int var_1, unsigned long long int var_2, unsigned int var_3, unsigned int var_4, int var_5, _Bool var_6, _Bool var_7, int var_9, signed char var_10, short var_11, signed char var_12, unsigned int var_13, int zero, long long int arr_1 [18] [18] , int arr_4 [18] [18] [18] , int arr_13 [23] [23] [23] , unsigned int arr_17 [15] [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero, arr_1 , arr_4 , arr_13 , arr_17 );
    checksum();
    printf("%llu\n", seed);
}
