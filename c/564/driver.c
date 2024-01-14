#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2877984625U;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-10351;
unsigned long long int var_4 = 11002359533449990506ULL;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-46;
unsigned char var_10 = (unsigned char)91;
unsigned char var_11 = (unsigned char)226;
unsigned short var_12 = (unsigned short)22970;
signed char var_13 = (signed char)126;
unsigned long long int var_14 = 14863343427897839199ULL;
long long int var_15 = 2403261578547662479LL;
short var_16 = (short)-3808;
short var_17 = (short)-31220;
unsigned int var_18 = 2324850546U;
int zero = 0;
signed char var_20 = (signed char)24;
signed char var_21 = (signed char)32;
signed char var_22 = (signed char)-111;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)25;
unsigned long long int var_25 = 6398503567445995723ULL;
long long int var_26 = -1816261669289516546LL;
unsigned long long int var_27 = 15177092380153666240ULL;
unsigned short var_28 = (unsigned short)27059;
signed char var_29 = (signed char)-122;
unsigned char var_30 = (unsigned char)92;
unsigned short var_31 = (unsigned short)9802;
int var_32 = 1454327473;
signed char arr_0 [14] ;
_Bool arr_3 [14] [14] ;
signed char arr_5 [14] [14] [14] ;
unsigned char arr_6 [14] [14] [14] ;
unsigned short arr_7 [14] [14] [14] [14] ;
short arr_8 [14] [14] [14] ;
unsigned int arr_9 [14] [14] [14] [14] [14] ;
unsigned short arr_10 [14] ;
unsigned int arr_11 [14] [14] [14] [14] ;
int arr_12 [14] [14] [14] [14] ;
unsigned char arr_13 [14] [14] [14] [14] [14] ;
signed char arr_14 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)218 : (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)25765;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-2307 : (short)4586;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 560336069U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned short)31519;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3208096758U : 1565229150U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -456898989;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)16 : (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)67 : (signed char)84;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test(unsigned int var_0, _Bool var_1, short var_3, unsigned long long int var_4, _Bool var_5, signed char var_9, unsigned char var_10, unsigned char var_11, unsigned short var_12, signed char var_13, unsigned long long int var_14, long long int var_15, short var_16, short var_17, unsigned int var_18, int zero, signed char arr_0 [14] , _Bool arr_3 [14] [14] , signed char arr_5 [14] [14] [14] , unsigned char arr_6 [14] [14] [14] , unsigned short arr_7 [14] [14] [14] [14] , short arr_8 [14] [14] [14] , unsigned int arr_9 [14] [14] [14] [14] [14] , unsigned short arr_10 [14] , unsigned int arr_11 [14] [14] [14] [14] , int arr_12 [14] [14] [14] [14] , unsigned char arr_13 [14] [14] [14] [14] [14] , signed char arr_14 [14] [14] [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, zero, arr_0 , arr_3 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 );
    checksum();
    printf("%llu\n", seed);
}
