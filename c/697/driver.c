#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 396568095;
unsigned long long int var_2 = 12100806234503553777ULL;
short var_4 = (short)-23090;
unsigned short var_5 = (unsigned short)24754;
signed char var_7 = (signed char)-90;
signed char var_9 = (signed char)-105;
short var_11 = (short)-9442;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2471163955709478139LL;
unsigned char var_14 = (unsigned char)134;
short var_15 = (short)5736;
signed char var_16 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(int var_1, unsigned long long int var_2, short var_4, unsigned short var_5, signed char var_7, signed char var_9, short var_11, int zero);

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_7, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
