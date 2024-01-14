#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
short var_2 = (short)17520;
short var_3 = (short)2257;
unsigned char var_4 = (unsigned char)184;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 7685209908222330341ULL;
int zero = 0;
int var_10 = -386545898;
short var_11 = (short)-18687;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned char var_1, short var_2, short var_3, unsigned char var_4, _Bool var_5, unsigned long long int var_6, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
