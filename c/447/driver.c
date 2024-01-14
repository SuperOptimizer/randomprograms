#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned char var_1 = (unsigned char)168;
signed char var_6 = (signed char)-2;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 3739708286006719496ULL;
long long int var_11 = 6737806401674104527LL;
signed char var_13 = (signed char)-80;
_Bool var_15 = (_Bool)0;
long long int var_16 = -567884150088119514LL;
int zero = 0;
signed char var_17 = (signed char)-1;
unsigned short var_18 = (unsigned short)21357;
unsigned char var_19 = (unsigned char)179;
short var_20 = (short)21901;
_Bool arr_2 [20] ;
unsigned long long int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 17672170848778555971ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test(signed char var_0, unsigned char var_1, signed char var_6, _Bool var_9, unsigned long long int var_10, long long int var_11, signed char var_13, _Bool var_15, long long int var_16, int zero, _Bool arr_2 [20] );

int main() {
    init();
    test(var_0, var_1, var_6, var_9, var_10, var_11, var_13, var_15, var_16, zero, arr_2 );
    checksum();
    printf("%llu\n", seed);
}
