#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7594189497518554599LL;
unsigned int var_1 = 3529991035U;
short var_3 = (short)10870;
unsigned char var_4 = (unsigned char)13;
long long int var_9 = 313402395632279791LL;
unsigned short var_11 = (unsigned short)11046;
int zero = 0;
long long int var_12 = 6415057897196950503LL;
unsigned int var_13 = 3521473027U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(long long int var_0, unsigned int var_1, short var_3, unsigned char var_4, long long int var_9, unsigned short var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
