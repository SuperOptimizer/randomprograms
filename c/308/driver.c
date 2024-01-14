#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)97;
unsigned long long int var_4 = 2744011561949080602ULL;
long long int var_6 = -508108677242309552LL;
int var_7 = 1969407210;
short var_8 = (short)11935;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-14953;
long long int var_11 = 3980363497164708888LL;
short var_12 = (short)17201;
unsigned char var_13 = (unsigned char)168;
signed char var_14 = (signed char)39;
int zero = 0;
unsigned int var_15 = 2245225420U;
short var_16 = (short)-11731;
unsigned long long int var_17 = 8102889718245228286ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)25;
signed char var_20 = (signed char)-29;
unsigned long long int var_21 = 15962305085053883524ULL;
int var_22 = 1216983686;
unsigned short var_23 = (unsigned short)9812;
void init() {
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
    hash(&seed, var_23);
}
void test(unsigned char var_3, unsigned long long int var_4, long long int var_6, int var_7, short var_8, _Bool var_9, short var_10, long long int var_11, short var_12, unsigned char var_13, signed char var_14, int zero);

int main() {
    init();
    test(var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
