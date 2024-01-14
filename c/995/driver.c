#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1561041258U;
int var_2 = 728464820;
int var_3 = 1165110420;
unsigned int var_4 = 668216194U;
signed char var_5 = (signed char)-88;
int var_6 = -1811683824;
int var_7 = 1048118467;
int var_8 = 841304561;
unsigned int var_9 = 3317022534U;
int var_10 = -360335473;
int zero = 0;
signed char var_13 = (signed char)-19;
int var_14 = -1657316569;
signed char var_15 = (signed char)23;
unsigned int var_16 = 203269053U;
signed char var_17 = (signed char)120;
unsigned int var_18 = 2985573372U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_0, int var_2, int var_3, unsigned int var_4, signed char var_5, int var_6, int var_7, int var_8, unsigned int var_9, int var_10, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
