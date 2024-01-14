#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
unsigned short var_2 = (unsigned short)48831;
short var_3 = (short)19593;
unsigned short var_6 = (unsigned short)135;
unsigned int var_9 = 1467322208U;
int var_10 = 862933331;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 7861805641934885387ULL;
short var_13 = (short)-10822;
int zero = 0;
short var_15 = (short)25848;
_Bool var_16 = (_Bool)0;
int var_17 = 1244000696;
short var_18 = (short)27842;
unsigned char var_19 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(signed char var_1, unsigned short var_2, short var_3, unsigned short var_6, unsigned int var_9, int var_10, _Bool var_11, unsigned long long int var_12, short var_13, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_6, var_9, var_10, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
