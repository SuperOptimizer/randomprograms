#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 306153553U;
unsigned int var_9 = 2973421726U;
int zero = 0;
signed char var_13 = (signed char)26;
unsigned short var_14 = (unsigned short)61356;
unsigned int var_15 = 4139505201U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned int var_4, unsigned int var_9, int zero);

int main() {
    init();
    test(var_4, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
