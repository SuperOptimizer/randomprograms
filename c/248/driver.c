#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)166;
long long int var_4 = 4462008940719175044LL;
unsigned char var_12 = (unsigned char)21;
long long int var_13 = -3998949848741963138LL;
unsigned char var_16 = (unsigned char)255;
unsigned long long int var_17 = 10564745251541625616ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)60;
unsigned char var_19 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned char var_3, long long int var_4, unsigned char var_12, long long int var_13, unsigned char var_16, unsigned long long int var_17, int zero);

int main() {
    init();
    test(var_3, var_4, var_12, var_13, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
