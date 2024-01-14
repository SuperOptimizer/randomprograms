#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1400881110U;
long long int var_4 = -1101402904843345572LL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)10390;
unsigned char var_9 = (unsigned char)221;
int zero = 0;
unsigned short var_10 = (unsigned short)34491;
unsigned int var_11 = 355651658U;
signed char var_12 = (signed char)64;
int var_13 = 483532875;
long long int var_14 = 5270449647470076923LL;
unsigned long long int var_15 = 4882797833678566769ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned int var_0, long long int var_4, _Bool var_6, unsigned short var_8, unsigned char var_9, int zero);

int main() {
    init();
    test(var_0, var_4, var_6, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
