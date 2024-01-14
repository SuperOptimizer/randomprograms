#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 736438231U;
int var_6 = 1824928699;
unsigned char var_7 = (unsigned char)38;
short var_9 = (short)5987;
unsigned int var_11 = 8139845U;
unsigned int var_12 = 3030879051U;
unsigned short var_13 = (unsigned short)23760;
short var_14 = (short)-8952;
unsigned char var_17 = (unsigned char)18;
int zero = 0;
unsigned char var_18 = (unsigned char)40;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4240338046U;
unsigned short var_21 = (unsigned short)41028;
unsigned char var_22 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned int var_5, int var_6, unsigned char var_7, short var_9, unsigned int var_11, unsigned int var_12, unsigned short var_13, short var_14, unsigned char var_17, int zero);

int main() {
    init();
    test(var_5, var_6, var_7, var_9, var_11, var_12, var_13, var_14, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
