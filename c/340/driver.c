#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4761369253241026706ULL;
unsigned long long int var_4 = 3960120273599354517ULL;
long long int var_5 = -1922372991675671639LL;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)14411;
unsigned short var_12 = (unsigned short)35675;
short var_13 = (short)-4321;
int zero = 0;
long long int var_14 = -247183376076019067LL;
signed char var_15 = (signed char)-75;
unsigned short var_16 = (unsigned short)57433;
unsigned int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1217971461U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned long long int var_0, unsigned long long int var_4, long long int var_5, _Bool var_9, unsigned short var_11, unsigned short var_12, short var_13, int zero, unsigned int arr_1 [17] [17] );

int main() {
    init();
    test(var_0, var_4, var_5, var_9, var_11, var_12, var_13, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
