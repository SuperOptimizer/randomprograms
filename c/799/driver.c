#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 11284189148792831280ULL;
unsigned long long int var_10 = 448054447643734979ULL;
int var_12 = -909346760;
int zero = 0;
short var_20 = (short)11066;
short var_21 = (short)4424;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned long long int var_9, unsigned long long int var_10, int var_12, int zero);

int main() {
    init();
    test(var_9, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
