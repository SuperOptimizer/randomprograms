#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
unsigned long long int var_3 = 17245779933022778841ULL;
long long int var_5 = -7701792256704677134LL;
unsigned long long int var_7 = 2695796437451922087ULL;
unsigned long long int var_8 = 14106972871476018580ULL;
unsigned char var_9 = (unsigned char)101;
int zero = 0;
short var_11 = (short)-13885;
unsigned int var_12 = 3287573574U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(signed char var_0, unsigned long long int var_3, long long int var_5, unsigned long long int var_7, unsigned long long int var_8, unsigned char var_9, int zero);

int main() {
    init();
    test(var_0, var_3, var_5, var_7, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
