#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16329823163906550545ULL;
long long int var_5 = 1367682518999798572LL;
signed char var_6 = (signed char)75;
signed char var_9 = (signed char)38;
int var_10 = 907881235;
unsigned int var_15 = 194730696U;
unsigned short var_16 = (unsigned short)58110;
unsigned long long int var_18 = 3954190160343873274ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)137;
unsigned int var_21 = 2186965758U;
unsigned short var_22 = (unsigned short)30407;
unsigned short var_23 = (unsigned short)60136;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(unsigned long long int var_1, long long int var_5, signed char var_6, signed char var_9, int var_10, unsigned int var_15, unsigned short var_16, unsigned long long int var_18, int zero);

int main() {
    init();
    test(var_1, var_5, var_6, var_9, var_10, var_15, var_16, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
