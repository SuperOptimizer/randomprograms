#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1713248074;
short var_1 = (short)-26413;
unsigned long long int var_6 = 5916552265176950921ULL;
signed char var_7 = (signed char)-32;
short var_8 = (short)6315;
unsigned char var_9 = (unsigned char)154;
unsigned int var_10 = 1865922730U;
long long int var_12 = -4540574734205023229LL;
int var_14 = -129932835;
unsigned int var_15 = 800362940U;
unsigned int var_16 = 974453216U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 15933232019279302465ULL;
unsigned long long int var_20 = 4790415405762134850ULL;
unsigned long long int var_21 = 14506770183021448634ULL;
int var_22 = -2036704916;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(int var_0, short var_1, unsigned long long int var_6, signed char var_7, short var_8, unsigned char var_9, unsigned int var_10, long long int var_12, int var_14, unsigned int var_15, unsigned int var_16, _Bool var_17, int zero);

int main() {
    init();
    test(var_0, var_1, var_6, var_7, var_8, var_9, var_10, var_12, var_14, var_15, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
