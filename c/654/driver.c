#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-112;
unsigned char var_4 = (unsigned char)112;
unsigned short var_5 = (unsigned short)61648;
unsigned short var_7 = (unsigned short)22633;
int var_8 = 637519290;
short var_9 = (short)25858;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 4042759428U;
int var_13 = 1304263024;
unsigned int var_14 = 2616003994U;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 368622490104871251LL;
unsigned short var_17 = (unsigned short)29093;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(_Bool var_1, signed char var_3, unsigned char var_4, unsigned short var_5, unsigned short var_7, int var_8, short var_9, _Bool var_10, unsigned int var_11, int var_13, unsigned int var_14, _Bool var_15, int zero);

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_13, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
