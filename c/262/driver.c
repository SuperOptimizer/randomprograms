#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)860;
short var_3 = (short)17836;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8279269863370976603LL;
int var_15 = 2140471939;
int zero = 0;
unsigned short var_18 = (unsigned short)31849;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned short var_2, short var_3, _Bool var_10, long long int var_11, int var_15, int zero);

int main() {
    init();
    test(var_2, var_3, var_10, var_11, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
