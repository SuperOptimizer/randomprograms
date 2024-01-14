#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5453712384611913160ULL;
short var_2 = (short)8405;
unsigned long long int var_3 = 9089714709695428879ULL;
unsigned int var_5 = 3136850844U;
unsigned char var_7 = (unsigned char)228;
int var_8 = -1705819255;
long long int var_11 = -2839264423685808837LL;
long long int var_12 = 449462173388390157LL;
unsigned long long int var_13 = 4648755264151270983ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-69;
unsigned long long int var_16 = 17500109342582344990ULL;
unsigned int var_17 = 1325153598U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5522908726426471634ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-32;
_Bool var_22 = (_Bool)0;
short var_23 = (short)15541;
long long int var_24 = 5420886378614534933LL;
long long int var_25 = 6134580028891317377LL;
unsigned short arr_1 [18] [18] ;
short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)3111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-4609;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test(unsigned long long int var_1, short var_2, unsigned long long int var_3, unsigned int var_5, unsigned char var_7, int var_8, long long int var_11, long long int var_12, unsigned long long int var_13, _Bool var_14, signed char var_15, unsigned long long int var_16, unsigned int var_17, int zero, unsigned short arr_1 [18] [18] );

int main() {
    init();
    test(var_1, var_2, var_3, var_5, var_7, var_8, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
