#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7585295691787693551LL;
long long int var_4 = -5535023187783008488LL;
unsigned int var_6 = 3174336097U;
unsigned long long int var_7 = 15238466289795433149ULL;
short var_8 = (short)21050;
signed char var_10 = (signed char)-38;
short var_11 = (short)11004;
unsigned char var_13 = (unsigned char)241;
long long int var_14 = -1545184648242703875LL;
int zero = 0;
short var_15 = (short)-3930;
unsigned short var_16 = (unsigned short)29399;
short var_17 = (short)30929;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(long long int var_1, long long int var_4, unsigned int var_6, unsigned long long int var_7, short var_8, signed char var_10, short var_11, unsigned char var_13, long long int var_14, int zero);

int main() {
    init();
    test(var_1, var_4, var_6, var_7, var_8, var_10, var_11, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
