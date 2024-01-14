#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28690;
unsigned short var_2 = (unsigned short)51719;
unsigned short var_3 = (unsigned short)56212;
unsigned int var_4 = 3294875934U;
unsigned int var_6 = 3439870456U;
unsigned short var_7 = (unsigned short)11230;
unsigned int var_9 = 4092253655U;
unsigned short var_11 = (unsigned short)16401;
unsigned int var_12 = 405808493U;
unsigned int var_13 = 823650175U;
unsigned short var_14 = (unsigned short)14617;
int zero = 0;
unsigned int var_15 = 4100787677U;
unsigned int var_16 = 1478926652U;
unsigned int var_17 = 749969848U;
unsigned short var_18 = (unsigned short)24839;
unsigned int var_19 = 431591952U;
unsigned short var_20 = (unsigned short)35271;
unsigned short var_21 = (unsigned short)17831;
unsigned short var_22 = (unsigned short)34195;
unsigned int var_23 = 1982924282U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(unsigned short var_1, unsigned short var_2, unsigned short var_3, unsigned int var_4, unsigned int var_6, unsigned short var_7, unsigned int var_9, unsigned short var_11, unsigned int var_12, unsigned int var_13, unsigned short var_14, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_6, var_7, var_9, var_11, var_12, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
