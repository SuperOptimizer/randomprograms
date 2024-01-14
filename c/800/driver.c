#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)189;
unsigned char var_8 = (unsigned char)255;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)62;
signed char var_17 = (signed char)28;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
signed char var_20 = (signed char)-85;
short var_21 = (short)-14400;
short var_22 = (short)21662;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned char var_3, unsigned char var_8, _Bool var_13, unsigned char var_14, signed char var_17, int zero);

int main() {
    init();
    test(var_3, var_8, var_13, var_14, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
