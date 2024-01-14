#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 910009212;
int var_9 = 212907385;
signed char var_11 = (signed char)98;
int zero = 0;
long long int var_12 = 7102960995528945174LL;
unsigned char var_13 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(int var_0, int var_9, signed char var_11, int zero);

int main() {
    init();
    test(var_0, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
