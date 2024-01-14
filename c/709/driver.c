#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36541;
unsigned char var_1 = (unsigned char)46;
int var_2 = 36557840;
long long int var_3 = 4130015191494167121LL;
int var_4 = -31507678;
short var_5 = (short)5872;
unsigned short var_6 = (unsigned short)13064;
int var_7 = 177963998;
unsigned short var_8 = (unsigned short)64821;
_Bool var_9 = (_Bool)0;
int var_10 = -1801108233;
unsigned char var_11 = (unsigned char)243;
unsigned char var_12 = (unsigned char)146;
_Bool var_13 = (_Bool)1;
int var_14 = 1297864339;
int zero = 0;
unsigned char var_15 = (unsigned char)5;
unsigned char var_16 = (unsigned char)161;
unsigned int var_17 = 3762794555U;
unsigned int var_18 = 2346731170U;
int var_19 = 1237350549;
short var_20 = (short)-15181;
short var_21 = (short)-18717;
int var_22 = 363590868;
_Bool arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned short var_0, unsigned char var_1, int var_2, long long int var_3, int var_4, short var_5, unsigned short var_6, int var_7, unsigned short var_8, _Bool var_9, int var_10, unsigned char var_11, unsigned char var_12, _Bool var_13, int var_14, int zero, _Bool arr_5 [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_5 );
    checksum();
    printf("%llu\n", seed);
}
