#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
unsigned char var_1 = (unsigned char)101;
unsigned int var_2 = 3857764698U;
int var_4 = 1128153938;
short var_5 = (short)-21611;
unsigned char var_7 = (unsigned char)157;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)87;
unsigned char var_10 = (unsigned char)252;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
short var_14 = (short)19189;
_Bool arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned int arr_7 [14] [14] [14] ;
short arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 312523249U : 3278863722U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-16115 : (short)21904;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test(unsigned char var_0, unsigned char var_1, unsigned int var_2, int var_4, short var_5, unsigned char var_7, _Bool var_8, unsigned char var_9, unsigned char var_10, int zero, _Bool arr_0 [14] , unsigned char arr_1 [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_7, var_8, var_9, var_10, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
