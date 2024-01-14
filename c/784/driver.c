#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8845140379048547242LL;
unsigned short var_9 = (unsigned short)60843;
unsigned int var_11 = 2544445311U;
int zero = 0;
unsigned int var_14 = 617017293U;
unsigned short var_15 = (unsigned short)45625;
unsigned int var_16 = 3516050985U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(long long int var_1, unsigned short var_9, unsigned int var_11, int zero);

int main() {
    init();
    test(var_1, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
