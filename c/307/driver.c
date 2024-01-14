#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
signed char var_4 = (signed char)-15;
signed char var_5 = (signed char)-31;
unsigned char var_7 = (unsigned char)194;
int var_8 = 1920032937;
short var_13 = (short)4771;
int zero = 0;
unsigned int var_20 = 1197993705U;
short var_21 = (short)-20069;
signed char var_22 = (signed char)-52;
signed char var_23 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(unsigned char var_2, signed char var_4, signed char var_5, unsigned char var_7, int var_8, short var_13, int zero);

int main() {
    init();
    test(var_2, var_4, var_5, var_7, var_8, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
