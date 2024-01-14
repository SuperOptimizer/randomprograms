#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)(-127 - 1);
long long int var_7 = -371759070116668731LL;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)156;
signed char var_14 = (signed char)2;
signed char var_15 = (signed char)45;
int zero = 0;
unsigned long long int var_20 = 2346895824488138825ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -6661395705607145753LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(signed char var_6, long long int var_7, _Bool var_8, unsigned char var_11, signed char var_14, signed char var_15, int zero);

int main() {
    init();
    test(var_6, var_7, var_8, var_11, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
