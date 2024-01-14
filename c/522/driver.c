#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18647;
unsigned char var_5 = (unsigned char)70;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 2032300877170314987LL;
unsigned int var_12 = 1315803014U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(short var_0, unsigned char var_5, int zero);

int main() {
    init();
    test(var_0, var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
