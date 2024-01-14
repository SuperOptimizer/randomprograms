#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1903944808;
long long int var_3 = 35033064815932689LL;
int var_10 = -1341194963;
int zero = 0;
unsigned int var_20 = 3276056112U;
long long int var_21 = 6767135197713689293LL;
unsigned short var_22 = (unsigned short)64379;
unsigned short var_23 = (unsigned short)29135;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(int var_0, long long int var_3, int var_10, int zero);

int main() {
    init();
    test(var_0, var_3, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
