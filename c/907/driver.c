#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3690513395U;
unsigned char var_1 = (unsigned char)113;
signed char var_4 = (signed char)-79;
unsigned int var_5 = 2343404819U;
long long int var_8 = 5044488102023632113LL;
unsigned short var_9 = (unsigned short)5563;
unsigned short var_10 = (unsigned short)11968;
short var_12 = (short)-26843;
unsigned long long int var_13 = 12928713967165856827ULL;
unsigned char var_14 = (unsigned char)34;
signed char var_15 = (signed char)120;
int zero = 0;
unsigned long long int var_17 = 16970598121492695602ULL;
unsigned short var_18 = (unsigned short)35525;
short var_19 = (short)-1911;
unsigned char var_20 = (unsigned char)60;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)5744;
long long int var_23 = 8017469283683062628LL;
long long int var_24 = 1919683555727376648LL;
short arr_0 [20] ;
int arr_1 [20] ;
short arr_4 [18] ;
unsigned short arr_6 [18] [18] [18] ;
unsigned int arr_7 [18] ;
int arr_9 [18] ;
signed char arr_2 [20] ;
unsigned int arr_10 [18] ;
unsigned char arr_11 [18] [18] ;
unsigned char arr_12 [18] ;
_Bool arr_16 [18] ;
unsigned char arr_17 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)8536;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1485676242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)7549;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)65033 : (unsigned short)5540;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 1434595241U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 88282077;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1606169086U : 888596635U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)163 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)184 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (unsigned char)104;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test(unsigned int var_0, unsigned char var_1, signed char var_4, unsigned int var_5, long long int var_8, unsigned short var_9, unsigned short var_10, short var_12, unsigned long long int var_13, unsigned char var_14, signed char var_15, int zero, short arr_0 [20] , int arr_1 [20] , short arr_4 [18] , unsigned short arr_6 [18] [18] [18] , unsigned int arr_7 [18] , int arr_9 [18] );

int main() {
    init();
    test(var_0, var_1, var_4, var_5, var_8, var_9, var_10, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_4 , arr_6 , arr_7 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
