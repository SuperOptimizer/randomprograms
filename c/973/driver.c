#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9678859911720353467ULL;
unsigned int var_3 = 1660486425U;
unsigned char var_4 = (unsigned char)169;
unsigned long long int var_5 = 5686334195509290041ULL;
unsigned char var_6 = (unsigned char)160;
unsigned short var_7 = (unsigned short)38050;
short var_8 = (short)-18244;
int var_9 = 180533827;
unsigned char var_11 = (unsigned char)134;
int zero = 0;
short var_12 = (short)13055;
short var_13 = (short)31889;
unsigned int var_14 = 2152749264U;
signed char var_15 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned long long int var_2, unsigned int var_3, unsigned char var_4, unsigned long long int var_5, unsigned char var_6, unsigned short var_7, short var_8, int var_9, unsigned char var_11, int zero);

int main() {
    init();
    test(var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
