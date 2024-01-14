#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)32911;
short var_2 = (short)-12103;
int var_3 = -292899636;
long long int var_4 = -5179215129393152403LL;
unsigned char var_5 = (unsigned char)141;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_7 = 9485848412768178664ULL;
unsigned long long int var_8 = 10724054722141673850ULL;
unsigned char var_9 = (unsigned char)114;
unsigned char var_10 = (unsigned char)194;
short var_11 = (short)11280;
unsigned long long int var_12 = 8979953235015636260ULL;
unsigned short var_13 = (unsigned short)63653;
long long int var_14 = -7907169651946083742LL;
unsigned int var_15 = 1750820240U;
int zero = 0;
unsigned long long int var_16 = 7226133918468433334ULL;
unsigned long long int var_17 = 18101955216383761864ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4957179799925065975LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4020220724U;
unsigned char var_22 = (unsigned char)135;
unsigned char var_23 = (unsigned char)114;
unsigned long long int var_24 = 18425419794916661452ULL;
short var_25 = (short)26889;
unsigned long long int var_26 = 832184067332542824ULL;
unsigned long long int var_27 = 10763984113425962761ULL;
unsigned short var_28 = (unsigned short)3829;
unsigned long long int var_29 = 7469215835764884775ULL;
unsigned char var_30 = (unsigned char)35;
int var_31 = -336792814;
_Bool var_32 = (_Bool)1;
short var_33 = (short)-21935;
unsigned long long int var_34 = 13672358567507647495ULL;
unsigned short var_35 = (unsigned short)28034;
unsigned short var_36 = (unsigned short)26937;
short var_37 = (short)-13910;
unsigned int var_38 = 3447308566U;
unsigned long long int var_39 = 14449629668136044317ULL;
unsigned long long int var_40 = 987081337512435330ULL;
unsigned int var_41 = 476209748U;
int var_42 = 250450434;
unsigned int arr_4 [21] [21] [21] ;
unsigned int arr_5 [21] [21] [21] ;
signed char arr_11 [21] [21] [21] ;
unsigned char arr_22 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3932890032U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4280635783U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)109;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test(_Bool var_0, unsigned short var_1, short var_2, int var_3, long long int var_4, unsigned char var_5, unsigned char var_6, unsigned long long int var_7, unsigned long long int var_8, unsigned char var_9, unsigned char var_10, short var_11, unsigned long long int var_12, unsigned short var_13, long long int var_14, unsigned int var_15, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
