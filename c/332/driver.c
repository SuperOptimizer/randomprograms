#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49142;
short var_2 = (short)23150;
unsigned int var_5 = 2014278542U;
signed char var_7 = (signed char)-119;
unsigned long long int var_10 = 8478534606655154253ULL;
long long int var_14 = 6895752509459953800LL;
int zero = 0;
short var_20 = (short)-9343;
unsigned char var_21 = (unsigned char)145;
signed char var_22 = (signed char)58;
unsigned long long int var_23 = 4186336157729671114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(unsigned short var_1, short var_2, unsigned int var_5, signed char var_7, unsigned long long int var_10, long long int var_14, int zero);

int main() {
    init();
    test(var_1, var_2, var_5, var_7, var_10, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
