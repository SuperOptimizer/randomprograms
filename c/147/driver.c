#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-118;
signed char var_3 = (signed char)-60;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)-84;
unsigned long long int var_10 = 2890941924193650819ULL;
short var_12 = (short)21612;
signed char var_13 = (signed char)-92;
int zero = 0;
unsigned char var_18 = (unsigned char)152;
_Bool var_19 = (_Bool)0;
unsigned short arr_1 [21] ;
short arr_3 [21] ;
signed char arr_5 [21] [21] [21] ;
_Bool arr_6 [21] [21] ;
_Bool arr_7 [21] [21] ;
unsigned char arr_8 [21] ;
unsigned char arr_9 [21] [21] ;
signed char arr_10 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)51614;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-15116;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)150 : (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)146 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-9 : (signed char)6;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test(signed char var_2, signed char var_3, _Bool var_5, signed char var_8, unsigned long long int var_10, short var_12, signed char var_13, int zero, unsigned short arr_1 [21] , short arr_3 [21] , signed char arr_5 [21] [21] [21] , _Bool arr_6 [21] [21] , _Bool arr_7 [21] [21] );

int main() {
    init();
    test(var_2, var_3, var_5, var_8, var_10, var_12, var_13, zero, arr_1 , arr_3 , arr_5 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
