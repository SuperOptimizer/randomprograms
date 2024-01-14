#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29099;
int var_2 = 677134380;
unsigned int var_3 = 839159680U;
int var_4 = 1884282629;
unsigned long long int var_5 = 4664179069379073881ULL;
unsigned short var_6 = (unsigned short)18220;
unsigned int var_7 = 2948455075U;
signed char var_8 = (signed char)101;
unsigned int var_10 = 1948223403U;
int var_11 = 898535357;
unsigned long long int var_12 = 17243540393823470600ULL;
long long int var_14 = -887542767224654098LL;
unsigned short var_15 = (unsigned short)64461;
unsigned short var_16 = (unsigned short)33820;
unsigned int var_18 = 54399890U;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 6427351042724320197ULL;
long long int var_21 = 5037981481779430378LL;
short var_22 = (short)17881;
short var_23 = (short)-4068;
_Bool var_24 = (_Bool)1;
unsigned int arr_3 [13] ;
int arr_6 [14] ;
_Bool arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2470743952U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -1823735337;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test(short var_1, int var_2, unsigned int var_3, int var_4, unsigned long long int var_5, unsigned short var_6, unsigned int var_7, signed char var_8, unsigned int var_10, int var_11, unsigned long long int var_12, long long int var_14, unsigned short var_15, unsigned short var_16, unsigned int var_18, _Bool var_19, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_14, var_15, var_16, var_18, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
