#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)7;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-13;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)64;
long long int var_12 = -2818526985585614705LL;
unsigned int var_13 = 3085268009U;
long long int var_17 = 6137280758596938791LL;
int zero = 0;
signed char var_20 = (signed char)101;
unsigned char var_21 = (unsigned char)215;
long long int var_22 = -291423885814986414LL;
signed char arr_8 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)61 : (signed char)-84;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test(signed char var_1, _Bool var_2, signed char var_3, _Bool var_4, unsigned char var_5, long long int var_12, unsigned int var_13, long long int var_17, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_12, var_13, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
