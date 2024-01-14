#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)50;
long long int var_6 = 446893418624245507LL;
unsigned char var_11 = (unsigned char)190;
signed char var_12 = (signed char)124;
signed char var_14 = (signed char)10;
int zero = 0;
int var_18 = 757097103;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned char var_5, long long int var_6, unsigned char var_11, signed char var_12, signed char var_14, int zero);

int main() {
    init();
    test(var_5, var_6, var_11, var_12, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
