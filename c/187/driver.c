#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
short var_7 = (short)-1869;
unsigned char var_8 = (unsigned char)109;
unsigned int var_10 = 2819176016U;
int zero = 0;
unsigned short var_17 = (unsigned short)8463;
long long int var_18 = 7851056124749955469LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(signed char var_1, short var_7, unsigned char var_8, unsigned int var_10, int zero);

int main() {
    init();
    test(var_1, var_7, var_8, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
