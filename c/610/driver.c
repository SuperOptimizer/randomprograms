#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8334;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5803532158488533933LL;
unsigned int var_7 = 272034360U;
unsigned short var_9 = (unsigned short)37640;
int var_10 = 1642969687;
_Bool var_11 = (_Bool)0;
int var_12 = -553419436;
int zero = 0;
unsigned int var_14 = 2603574714U;
long long int var_15 = 7985736856546559566LL;
int var_16 = -644618375;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_0, _Bool var_5, long long int var_6, unsigned int var_7, unsigned short var_9, int var_10, _Bool var_11, int var_12, int zero);

int main() {
    init();
    test(var_0, var_5, var_6, var_7, var_9, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
