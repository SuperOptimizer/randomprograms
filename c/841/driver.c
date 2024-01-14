#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3283926901261684872ULL;
unsigned char var_6 = (unsigned char)55;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned long long int var_1, unsigned char var_6, int zero);

int main() {
    init();
    test(var_1, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
