#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)155;
long long int var_15 = 859566997823487795LL;
int zero = 0;
int var_18 = 687096305;
unsigned short var_19 = (unsigned short)28037;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned char var_9, long long int var_15, int zero);

int main() {
    init();
    test(var_9, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
