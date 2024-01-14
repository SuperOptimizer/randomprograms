#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2546;
unsigned short var_1 = (unsigned short)17317;
signed char var_2 = (signed char)88;
unsigned short var_3 = (unsigned short)34247;
unsigned int var_4 = 2693027984U;
int var_5 = 1690501753;
signed char var_6 = (signed char)-32;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-112;
int zero = 0;
unsigned char var_10 = (unsigned char)54;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)104;
unsigned long long int var_13 = 17621605348593160827ULL;
long long int var_14 = -4158187594720628711LL;
unsigned int var_15 = 1559263146U;
unsigned char var_16 = (unsigned char)114;
unsigned int var_17 = 1818309959U;
short var_18 = (short)-22345;
short var_19 = (short)32214;
unsigned int var_20 = 1264862385U;
unsigned short var_21 = (unsigned short)48986;
_Bool var_22 = (_Bool)0;
short arr_0 [14] ;
short arr_1 [14] ;
long long int arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
unsigned long long int arr_4 [14] [14] [14] ;
short arr_6 [14] [14] [14] [14] ;
int arr_7 [14] [14] [14] [14] [14] ;
long long int arr_8 [14] ;
signed char arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)10284 : (short)8880;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)32189;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -6704154581658788415LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 1095475651U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2369562738692616627ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)27689;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1017225299 : 58378433;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -8505984441931920629LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)85 : (signed char)7;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test(unsigned short var_0, unsigned short var_1, signed char var_2, unsigned short var_3, unsigned int var_4, int var_5, signed char var_6, _Bool var_7, _Bool var_8, signed char var_9, int zero, short arr_0 [14] , short arr_1 [14] , long long int arr_2 [14] , unsigned int arr_3 [14] [14] , unsigned long long int arr_4 [14] [14] [14] , short arr_6 [14] [14] [14] [14] , int arr_7 [14] [14] [14] [14] [14] , long long int arr_8 [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_6 , arr_7 , arr_8 );
    checksum();
    printf("%llu\n", seed);
}
