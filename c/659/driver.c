#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)8762;
signed char var_17 = (signed char)40;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1688775884U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned short var_9, signed char var_17, int zero);

int main() {
    init();
    test(var_9, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
