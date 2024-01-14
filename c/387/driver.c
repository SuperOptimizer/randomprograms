#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)158;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 11746297095521274503ULL;
unsigned short var_20 = (unsigned short)52788;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned char var_13, _Bool var_17, int zero);

int main() {
    init();
    test(var_13, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
