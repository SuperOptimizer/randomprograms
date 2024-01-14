#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 837655330;
short var_2 = (short)-3292;
unsigned long long int var_4 = 18093292589129941754ULL;
unsigned int var_6 = 3435834396U;
unsigned char var_8 = (unsigned char)150;
signed char var_10 = (signed char)-95;
short var_11 = (short)28628;
unsigned int var_13 = 1004190047U;
unsigned int var_14 = 2964865614U;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-15004;
unsigned int var_17 = 823242218U;
_Bool var_18 = (_Bool)1;
unsigned int arr_0 [21] ;
int arr_1 [21] [21] ;
unsigned int arr_2 [21] [21] ;
unsigned short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 776954156U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -1667406984;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 2962479870U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)57311 : (unsigned short)37809;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(int var_0, short var_2, unsigned long long int var_4, unsigned int var_6, unsigned char var_8, signed char var_10, short var_11, unsigned int var_13, unsigned int var_14, int zero, unsigned int arr_0 [21] , int arr_1 [21] [21] , unsigned int arr_2 [21] [21] , unsigned short arr_5 [21] [21] );

int main() {
    init();
    test(var_0, var_2, var_4, var_6, var_8, var_10, var_11, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
