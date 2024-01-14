#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)236;
long long int var_4 = -6111643838464430362LL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_8 = 8174956859101702479LL;
unsigned short var_11 = (unsigned short)38269;
short var_13 = (short)-18056;
int zero = 0;
unsigned int var_16 = 2768464559U;
unsigned char var_17 = (unsigned char)158;
short var_18 = (short)9942;
unsigned long long int var_19 = 1896611166645546530ULL;
unsigned long long int var_20 = 10104873638396603966ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned char var_2, long long int var_4, _Bool var_5, _Bool var_7, long long int var_8, unsigned short var_11, short var_13, int zero);

int main() {
    init();
    test(var_2, var_4, var_5, var_7, var_8, var_11, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
