#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8274;
unsigned short var_6 = (unsigned short)16355;
int zero = 0;
long long int var_10 = 6855940656461460724LL;
unsigned short var_11 = (unsigned short)26078;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned short var_0, unsigned short var_6, int zero);

int main() {
    init();
    test(var_0, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
