#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1963579364;
signed char var_2 = (signed char)86;
unsigned char var_5 = (unsigned char)250;
short var_6 = (short)30371;
unsigned short var_7 = (unsigned short)50605;
short var_9 = (short)-9070;
int var_10 = -1071505987;
unsigned long long int var_16 = 17378837912847303138ULL;
int var_18 = 2102392643;
signed char var_19 = (signed char)41;
int zero = 0;
unsigned long long int var_20 = 8031543660030896030ULL;
short var_21 = (short)6969;
unsigned char var_22 = (unsigned char)229;
signed char var_23 = (signed char)-54;
int var_24 = -1067214464;
signed char var_25 = (signed char)2;
short var_26 = (short)-30532;
signed char var_27 = (signed char)-19;
short var_28 = (short)20071;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test(int var_0, signed char var_2, unsigned char var_5, short var_6, unsigned short var_7, short var_9, int var_10, unsigned long long int var_16, int var_18, signed char var_19, int zero);

int main() {
    init();
    test(var_0, var_2, var_5, var_6, var_7, var_9, var_10, var_16, var_18, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
