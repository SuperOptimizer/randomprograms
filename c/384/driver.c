#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15960247186779458442ULL;
long long int var_1 = 5384954935128373234LL;
unsigned char var_2 = (unsigned char)110;
unsigned long long int var_3 = 8110777786393082134ULL;
signed char var_6 = (signed char)-73;
unsigned int var_7 = 883867684U;
signed char var_9 = (signed char)-69;
short var_10 = (short)22175;
int zero = 0;
int var_11 = 880816306;
unsigned char var_12 = (unsigned char)16;
unsigned char var_13 = (unsigned char)95;
long long int var_14 = -8002396294403760022LL;
_Bool var_15 = (_Bool)0;
int var_16 = -2126627642;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)210;
unsigned int arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned long long int arr_2 [25] ;
long long int arr_3 [25] ;
_Bool arr_8 [25] [25] [25] [25] ;
unsigned long long int arr_11 [25] [25] [25] [25] [25] ;
int arr_13 [25] [25] [25] [25] [25] [25] [25] ;
unsigned int arr_6 [25] [25] ;
_Bool arr_14 [25] [25] [25] ;
long long int arr_15 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 318485290U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 5613502979027948015ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 6785562557972454800LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 13164355807268315779ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 1896911385 : 1953167841;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 3951644999U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? -3302867371085356350LL : 6984850775136413173LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test(unsigned long long int var_0, long long int var_1, unsigned char var_2, unsigned long long int var_3, signed char var_6, unsigned int var_7, signed char var_9, short var_10, int zero, unsigned int arr_0 [25] , unsigned char arr_1 [25] , unsigned long long int arr_2 [25] , long long int arr_3 [25] , _Bool arr_8 [25] [25] [25] [25] , unsigned long long int arr_11 [25] [25] [25] [25] [25] , int arr_13 [25] [25] [25] [25] [25] [25] [25] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_6, var_7, var_9, var_10, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_8 , arr_11 , arr_13 );
    checksum();
    printf("%llu\n", seed);
}
