#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26300;
unsigned char var_8 = (unsigned char)82;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1257168135U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(short var_5, unsigned char var_8, int zero);

int main() {
    init();
    test(var_5, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
