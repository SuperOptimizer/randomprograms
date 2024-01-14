#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)17;
int var_12 = -261538389;
signed char var_13 = (signed char)22;
int zero = 0;
unsigned short var_15 = (unsigned short)10919;
unsigned long long int var_16 = 12005836961616830715ULL;
unsigned long long int var_17 = 15375570383711692521ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned char var_2, int var_12, signed char var_13, int zero);

int main() {
    init();
    test(var_2, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
