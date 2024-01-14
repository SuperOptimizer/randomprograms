#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3963;
short var_1 = (short)5413;
short var_2 = (short)2677;
unsigned char var_4 = (unsigned char)91;
unsigned short var_6 = (unsigned short)42721;
signed char var_7 = (signed char)-21;
int var_13 = -1247154515;
int zero = 0;
unsigned short var_15 = (unsigned short)23466;
unsigned char var_16 = (unsigned char)63;
int var_17 = 2125852873;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(short var_0, short var_1, short var_2, unsigned char var_4, unsigned short var_6, signed char var_7, int var_13, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_6, var_7, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
