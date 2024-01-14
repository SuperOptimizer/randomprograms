#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17950;
short var_9 = (short)-1534;
signed char var_11 = (signed char)-79;
int zero = 0;
unsigned int var_12 = 1983086810U;
unsigned short var_13 = (unsigned short)31944;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(short var_1, short var_9, signed char var_11, int zero);

int main() {
    init();
    test(var_1, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
