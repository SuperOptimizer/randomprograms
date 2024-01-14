#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 276551382U;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-127;
unsigned long long int var_3 = 6118282505575884284ULL;
unsigned short var_4 = (unsigned short)39260;
unsigned short var_5 = (unsigned short)22030;
unsigned short var_6 = (unsigned short)36563;
long long int var_7 = -6098166598513523672LL;
long long int var_8 = -9062597129358243715LL;
unsigned short var_10 = (unsigned short)32965;
unsigned long long int var_11 = 8356711003572916000ULL;
unsigned int var_12 = 116125504U;
signed char var_13 = (signed char)-87;
short var_14 = (short)-24765;
int zero = 0;
unsigned char var_15 = (unsigned char)63;
unsigned int var_16 = 323698242U;
long long int var_17 = 7320208957221665468LL;
int var_18 = -1139423075;
signed char var_19 = (signed char)-12;
unsigned int var_20 = 3058447213U;
short var_21 = (short)19309;
signed char var_22 = (signed char)102;
long long int arr_2 [23] [23] ;
short arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] [23] ;
unsigned short arr_6 [23] [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 8484916175940453408LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (short)24110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2189359057U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31358;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 10361641809062416299ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned int var_0, _Bool var_1, signed char var_2, unsigned long long int var_3, unsigned short var_4, unsigned short var_5, unsigned short var_6, long long int var_7, long long int var_8, unsigned short var_10, unsigned long long int var_11, unsigned int var_12, signed char var_13, short var_14, int zero, long long int arr_2 [23] [23] , short arr_3 [23] [23] , unsigned int arr_4 [23] [23] [23] , unsigned short arr_6 [23] [23] [23] [23] , unsigned long long int arr_10 [23] [23] [23] [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_13, var_14, zero, arr_2 , arr_3 , arr_4 , arr_6 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
