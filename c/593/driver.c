#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11655;
unsigned short var_1 = (unsigned short)57623;
unsigned char var_2 = (unsigned char)234;
unsigned short var_5 = (unsigned short)59921;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)231;
long long int var_10 = 1957193819028428725LL;
long long int var_11 = -8971526283715785613LL;
unsigned char var_12 = (unsigned char)176;
signed char var_13 = (signed char)-125;
unsigned char var_14 = (unsigned char)82;
unsigned char var_15 = (unsigned char)129;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2362447875656385149LL;
long long int var_18 = -3198529408253999289LL;
unsigned short arr_3 [22] [22] ;
unsigned short arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)39024;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)62993;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test(unsigned short var_0, unsigned short var_1, unsigned char var_2, unsigned short var_5, _Bool var_6, unsigned char var_8, long long int var_10, long long int var_11, unsigned char var_12, signed char var_13, unsigned char var_14, unsigned char var_15, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_6, var_8, var_10, var_11, var_12, var_13, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
