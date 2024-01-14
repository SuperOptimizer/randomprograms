#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10676;
signed char var_2 = (signed char)-76;
int var_3 = 1194461849;
unsigned short var_7 = (unsigned short)2979;
signed char var_8 = (signed char)-112;
long long int var_11 = 3766157421225195371LL;
unsigned char var_13 = (unsigned char)91;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 16191260942996365584ULL;
int var_16 = -101535094;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(short var_0, signed char var_2, int var_3, unsigned short var_7, signed char var_8, long long int var_11, unsigned char var_13, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_7, var_8, var_11, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
