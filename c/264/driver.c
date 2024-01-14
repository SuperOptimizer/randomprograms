#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 247403463U;
unsigned char var_3 = (unsigned char)66;
unsigned short var_4 = (unsigned short)37785;
unsigned short var_6 = (unsigned short)34917;
signed char var_9 = (signed char)-69;
unsigned long long int var_10 = 7869137131096672347ULL;
unsigned long long int var_11 = 14979870459846619284ULL;
unsigned int var_14 = 4248859175U;
unsigned short var_16 = (unsigned short)34188;
unsigned int var_18 = 1255506436U;
short var_19 = (short)29599;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)161;
unsigned int var_23 = 1301653499U;
short var_24 = (short)-17333;
unsigned long long int var_25 = 12345027146386601902ULL;
signed char var_26 = (signed char)-12;
long long int arr_0 [19] ;
unsigned int arr_2 [19] [19] [19] ;
unsigned int arr_3 [19] [19] ;
unsigned short arr_4 [19] [19] [19] ;
unsigned short arr_6 [19] [19] [19] ;
_Bool arr_7 [19] [19] ;
short arr_8 [19] [19] [19] [19] [19] ;
unsigned short arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2395138113250828215LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4180507147U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 971452403U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)9830;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)32488;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-6423;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)8808;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test(unsigned int var_0, unsigned char var_3, unsigned short var_4, unsigned short var_6, signed char var_9, unsigned long long int var_10, unsigned long long int var_11, unsigned int var_14, unsigned short var_16, unsigned int var_18, short var_19, int zero, long long int arr_0 [19] , unsigned int arr_2 [19] [19] [19] , unsigned int arr_3 [19] [19] , unsigned short arr_4 [19] [19] [19] , unsigned short arr_6 [19] [19] [19] , _Bool arr_7 [19] [19] , short arr_8 [19] [19] [19] [19] [19] , unsigned short arr_10 [19] );

int main() {
    init();
    test(var_0, var_3, var_4, var_6, var_9, var_10, var_11, var_14, var_16, var_18, var_19, zero, arr_0 , arr_2 , arr_3 , arr_4 , arr_6 , arr_7 , arr_8 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
