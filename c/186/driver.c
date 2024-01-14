#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
_Bool var_1 = (_Bool)0;
int var_2 = 1307023986;
int var_6 = -1661245210;
long long int var_7 = 974051986255154877LL;
unsigned char var_8 = (unsigned char)254;
unsigned short var_11 = (unsigned short)47812;
unsigned long long int var_13 = 8183417055055975322ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)55;
long long int var_18 = 8612045666400866001LL;
int arr_0 [24] ;
signed char arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
int arr_3 [24] ;
unsigned char arr_4 [24] [24] ;
short arr_6 [24] [24] [24] ;
short arr_7 [24] [24] [24] [24] ;
long long int arr_9 [24] [24] [24] ;
unsigned short arr_10 [24] [24] [24] ;
unsigned char arr_11 [24] [24] ;
long long int arr_12 [24] ;
unsigned char arr_13 [24] [24] [24] [24] [24] [24] [24] ;
long long int arr_5 [24] [24] [24] ;
unsigned short arr_14 [24] ;
int arr_15 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1124203582;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)41879;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 451296954;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)12 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)22933 : (short)-10198;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)22291;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8178211903625455155LL : -6987374762857194027LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)2471;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)191 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -656149862440038260LL : 6116714616698902712LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned char)34 : (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2555192945266656825LL : -814119733976703659LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64152 : (unsigned short)46783;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 1867803991 : -1752334730;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test(unsigned char var_0, _Bool var_1, int var_2, int var_6, long long int var_7, unsigned char var_8, unsigned short var_11, unsigned long long int var_13, _Bool var_15, int zero, int arr_0 [24] , signed char arr_1 [24] , unsigned short arr_2 [24] [24] , int arr_3 [24] , unsigned char arr_4 [24] [24] , short arr_6 [24] [24] [24] , short arr_7 [24] [24] [24] [24] , long long int arr_9 [24] [24] [24] , unsigned short arr_10 [24] [24] [24] , unsigned char arr_11 [24] [24] , long long int arr_12 [24] , unsigned char arr_13 [24] [24] [24] [24] [24] [24] [24] );

int main() {
    init();
    test(var_0, var_1, var_2, var_6, var_7, var_8, var_11, var_13, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_6 , arr_7 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 );
    checksum();
    printf("%llu\n", seed);
}
