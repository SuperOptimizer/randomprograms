#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 455790452U;
unsigned int var_1 = 619082276U;
short var_4 = (short)-5948;
unsigned short var_10 = (unsigned short)18025;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-20252;
unsigned long long int var_15 = 3008940252183239749ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)14828;
unsigned int var_21 = 1658541533U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned int var_0, unsigned int var_1, short var_4, unsigned short var_10, _Bool var_11, short var_13, unsigned long long int var_15, int zero);

int main() {
    init();
    test(var_0, var_1, var_4, var_10, var_11, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
