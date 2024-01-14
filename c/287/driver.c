#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
long long int var_3 = 6863226202372350082LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)9582;
unsigned int var_6 = 1581005594U;
signed char var_7 = (signed char)9;
int zero = 0;
int var_12 = 39088858;
unsigned char var_13 = (unsigned char)135;
unsigned int var_14 = 2705675681U;
unsigned int var_15 = 2469938118U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)30;
unsigned short var_18 = (unsigned short)55202;
unsigned int var_19 = 2653169660U;
unsigned char var_20 = (unsigned char)145;
long long int var_21 = 6782894936795574899LL;
int var_22 = 1339953736;
signed char var_23 = (signed char)55;
unsigned short arr_0 [20] [20] ;
short arr_3 [20] [20] ;
unsigned char arr_6 [20] [20] ;
unsigned short arr_7 [20] [20] [20] [20] ;
long long int arr_10 [20] [20] [20] ;
unsigned int arr_12 [20] [20] [20] [20] [20] [20] ;
_Bool arr_14 [20] [20] [20] [20] ;
signed char arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)43198;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)50111;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -5317948249929415580LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1746387213U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (signed char)85;
}

void checksum() {
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test(unsigned char var_0, long long int var_3, _Bool var_4, short var_5, unsigned int var_6, signed char var_7, int zero, unsigned short arr_0 [20] [20] , short arr_3 [20] [20] , unsigned char arr_6 [20] [20] , unsigned short arr_7 [20] [20] [20] [20] , long long int arr_10 [20] [20] [20] , unsigned int arr_12 [20] [20] [20] [20] [20] [20] );

int main() {
    init();
    test(var_0, var_3, var_4, var_5, var_6, var_7, zero, arr_0 , arr_3 , arr_6 , arr_7 , arr_10 , arr_12 );
    checksum();
    printf("%llu\n", seed);
}
