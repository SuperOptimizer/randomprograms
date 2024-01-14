#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43094;
unsigned short var_1 = (unsigned short)51661;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3633266452U;
unsigned int var_7 = 2088825794U;
int var_9 = -1045927399;
signed char var_11 = (signed char)70;
int zero = 0;
signed char var_12 = (signed char)113;
unsigned char var_13 = (unsigned char)107;
unsigned short arr_1 [22] [22] ;
_Bool arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)2956;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test(unsigned short var_0, unsigned short var_1, _Bool var_3, unsigned int var_4, unsigned int var_7, int var_9, signed char var_11, int zero, unsigned short arr_1 [22] [22] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_7, var_9, var_11, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
