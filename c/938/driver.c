#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11507;
unsigned char var_1 = (unsigned char)167;
unsigned long long int var_6 = 5057943078882111847ULL;
signed char var_8 = (signed char)44;
short var_10 = (short)-15582;
long long int var_11 = -4505053672721392611LL;
unsigned char var_13 = (unsigned char)108;
unsigned int var_14 = 479051469U;
int zero = 0;
unsigned long long int var_15 = 3714424857186212522ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9763838910549987048ULL;
int var_18 = 1754313643;
unsigned long long int var_19 = 18387359186475886277ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(short var_0, unsigned char var_1, unsigned long long int var_6, signed char var_8, short var_10, long long int var_11, unsigned char var_13, unsigned int var_14, int zero);

int main() {
    init();
    test(var_0, var_1, var_6, var_8, var_10, var_11, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
