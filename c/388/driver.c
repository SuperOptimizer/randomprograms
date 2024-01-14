#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)84;
long long int var_4 = -2819470809556884887LL;
unsigned int var_6 = 584074685U;
_Bool var_10 = (_Bool)0;
long long int var_12 = 1459038744377625255LL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)25717;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -5154114215760973114LL;
unsigned int var_18 = 1760156311U;
short var_19 = (short)-4451;
int var_20 = -1612003323;
short arr_0 [24] ;
int arr_1 [24] ;
unsigned short arr_3 [24] ;
int arr_4 [24] ;
unsigned int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)28189;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1589123547;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)53841;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -543868449;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 789170087U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(unsigned char var_2, long long int var_4, unsigned int var_6, _Bool var_10, long long int var_12, _Bool var_13, short var_14, _Bool var_15, int zero, short arr_0 [24] , int arr_1 [24] , unsigned short arr_3 [24] );

int main() {
    init();
    test(var_2, var_4, var_6, var_10, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
