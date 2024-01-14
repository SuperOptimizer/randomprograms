#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1633786244;
long long int var_4 = 5765712703019175756LL;
unsigned short var_9 = (unsigned short)47236;
unsigned char var_13 = (unsigned char)162;
int zero = 0;
signed char var_15 = (signed char)-61;
unsigned short var_16 = (unsigned short)51381;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(int var_2, long long int var_4, unsigned short var_9, unsigned char var_13, int zero);

int main() {
    init();
    test(var_2, var_4, var_9, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
