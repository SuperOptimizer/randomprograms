#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)110;
int var_4 = 454853115;
int var_8 = 643665199;
short var_14 = (short)-32030;
int var_15 = -1276419365;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-79;
int zero = 0;
int var_20 = 1181045370;
unsigned short var_21 = (unsigned short)33757;
short var_22 = (short)-15122;
unsigned long long int arr_0 [24] ;
signed char arr_1 [24] ;
unsigned char arr_3 [12] [12] ;
short arr_4 [12] [12] ;
signed char arr_2 [24] [24] ;
short arr_6 [12] [12] ;
short arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3726903015535332860ULL : 2267385462146685433ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)120 : (signed char)77;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-18782;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (short)28899;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)17859;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test(unsigned char var_2, int var_4, int var_8, short var_14, int var_15, _Bool var_17, signed char var_18, int zero, unsigned long long int arr_0 [24] , signed char arr_1 [24] , unsigned char arr_3 [12] [12] , short arr_4 [12] [12] );

int main() {
    init();
    test(var_2, var_4, var_8, var_14, var_15, var_17, var_18, zero, arr_0 , arr_1 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
