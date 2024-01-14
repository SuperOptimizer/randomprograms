#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17482;
unsigned int var_7 = 2201862128U;
unsigned long long int var_15 = 5197232387780280544ULL;
unsigned char var_18 = (unsigned char)5;
int zero = 0;
unsigned int var_19 = 4259891801U;
unsigned short var_20 = (unsigned short)41979;
short var_21 = (short)-18707;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_0, unsigned int var_7, unsigned long long int var_15, unsigned char var_18, int zero);

int main() {
    init();
    test(var_0, var_7, var_15, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
