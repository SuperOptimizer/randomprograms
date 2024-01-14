#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2963646688472457022LL;
unsigned long long int var_1 = 2261165316042599449ULL;
unsigned int var_4 = 24662599U;
unsigned char var_5 = (unsigned char)204;
unsigned char var_9 = (unsigned char)235;
int zero = 0;
signed char var_11 = (signed char)30;
unsigned long long int var_12 = 6698588119285660365ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(long long int var_0, unsigned long long int var_1, unsigned int var_4, unsigned char var_5, unsigned char var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_4, var_5, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
