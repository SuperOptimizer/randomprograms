#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8404970810899996378LL;
unsigned short var_18 = (unsigned short)50266;
int zero = 0;
signed char var_19 = (signed char)1;
short var_20 = (short)12188;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(long long int var_2, unsigned short var_18, int zero);

int main() {
    init();
    test(var_2, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
