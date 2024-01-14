#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 128596215U;
int var_2 = 1362271325;
signed char var_4 = (signed char)-25;
signed char var_5 = (signed char)46;
short var_6 = (short)20760;
unsigned long long int var_7 = 373140997658322740ULL;
unsigned short var_8 = (unsigned short)19474;
signed char var_9 = (signed char)99;
int zero = 0;
unsigned long long int var_12 = 5918998292731469200ULL;
unsigned char var_13 = (unsigned char)194;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1621547442673218720LL;
int var_17 = 919314176;
_Bool arr_1 [22] ;
_Bool arr_3 [22] [22] ;
signed char arr_7 [22] [22] ;
unsigned long long int arr_12 [22] [22] [22] ;
short arr_14 [22] [22] [22] ;
short arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 14061440974433582642ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)6141;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-16685;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test(unsigned int var_0, int var_2, signed char var_4, signed char var_5, short var_6, unsigned long long int var_7, unsigned short var_8, signed char var_9, int zero, _Bool arr_1 [22] , _Bool arr_3 [22] [22] , signed char arr_7 [22] [22] , unsigned long long int arr_12 [22] [22] [22] , short arr_14 [22] [22] [22] );

int main() {
    init();
    test(var_0, var_2, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_1 , arr_3 , arr_7 , arr_12 , arr_14 );
    checksum();
    printf("%llu\n", seed);
}
