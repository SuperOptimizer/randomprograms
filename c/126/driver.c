#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)-88;
signed char var_9 = (signed char)33;
int zero = 0;
unsigned int var_19 = 1608752811U;
unsigned short var_20 = (unsigned short)45839;
unsigned char var_21 = (unsigned char)133;
short var_22 = (short)-17106;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(_Bool var_1, signed char var_6, signed char var_9, int zero);

int main() {
    init();
    test(var_1, var_6, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
