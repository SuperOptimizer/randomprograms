#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 661592521226600823LL;
short var_2 = (short)-25264;
unsigned long long int var_3 = 12545233691240591908ULL;
long long int var_4 = 6156637270917518905LL;
short var_5 = (short)31357;
signed char var_6 = (signed char)-58;
unsigned int var_8 = 3742981369U;
unsigned int var_10 = 2848704308U;
short var_11 = (short)-19267;
short var_12 = (short)15901;
int var_15 = -1268867694;
_Bool var_16 = (_Bool)1;
long long int var_17 = 2303075866238551877LL;
int zero = 0;
unsigned int var_18 = 1112146193U;
signed char var_19 = (signed char)56;
unsigned short var_20 = (unsigned short)44342;
signed char var_21 = (signed char)59;
int var_22 = -224334436;
int var_23 = -203770410;
_Bool var_24 = (_Bool)1;
short var_25 = (short)-6384;
long long int arr_13 [17] ;
_Bool arr_15 [17] [17] ;
unsigned long long int arr_8 [14] [14] [14] ;
_Bool arr_9 [14] ;
long long int arr_16 [17] ;
short arr_17 [17] [17] [17] ;
unsigned char arr_18 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 1734375990198449043LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9280827151677184653ULL : 16864997028469167533ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -6788549846797833960LL : -7952651230100452066LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)11110 : (short)13427;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)125 : (unsigned char)255;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test(_Bool var_0, long long int var_1, short var_2, unsigned long long int var_3, long long int var_4, short var_5, signed char var_6, unsigned int var_8, unsigned int var_10, short var_11, short var_12, int var_15, _Bool var_16, long long int var_17, int zero, long long int arr_13 [17] , _Bool arr_15 [17] [17] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_10, var_11, var_12, var_15, var_16, var_17, zero, arr_13 , arr_15 );
    checksum();
    printf("%llu\n", seed);
}
