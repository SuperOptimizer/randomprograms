#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
short var_1 = (short)-5983;
signed char var_2 = (signed char)84;
signed char var_3 = (signed char)120;
short var_4 = (short)-26529;
unsigned short var_6 = (unsigned short)51063;
short var_8 = (short)-5251;
signed char var_11 = (signed char)-18;
signed char var_12 = (signed char)1;
unsigned long long int var_13 = 6284655743796651869ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)19;
signed char var_16 = (signed char)-114;
signed char var_17 = (signed char)-71;
signed char var_18 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned char var_0, short var_1, signed char var_2, signed char var_3, short var_4, unsigned short var_6, short var_8, signed char var_11, signed char var_12, unsigned long long int var_13, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_8, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
