#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
signed char var_2 = (signed char)4;
_Bool var_3 = (_Bool)1;
short var_7 = (short)12881;
signed char var_9 = (signed char)33;
int zero = 0;
signed char var_10 = (signed char)-45;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)56229;
short var_14 = (short)-18316;
unsigned short var_15 = (unsigned short)4013;
short var_16 = (short)-16406;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned char var_1, signed char var_2, _Bool var_3, short var_7, signed char var_9, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_7, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
