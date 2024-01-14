#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -140657909;
unsigned long long int var_2 = 8649161022349853362ULL;
int var_3 = 1064707602;
unsigned int var_4 = 2150307391U;
unsigned int var_5 = 1463747758U;
unsigned int var_8 = 3113660694U;
short var_9 = (short)-8502;
short var_10 = (short)5217;
unsigned int var_12 = 518382981U;
int zero = 0;
short var_16 = (short)30797;
unsigned long long int var_17 = 18252590703298251263ULL;
signed char var_18 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(int var_0, unsigned long long int var_2, int var_3, unsigned int var_4, unsigned int var_5, unsigned int var_8, short var_9, short var_10, unsigned int var_12, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_8, var_9, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
