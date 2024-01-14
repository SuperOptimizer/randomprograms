#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
_Bool var_4 = (_Bool)1;
int var_5 = 557666655;
unsigned char var_6 = (unsigned char)17;
int var_9 = 1892417920;
int zero = 0;
unsigned char var_10 = (unsigned char)144;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned char var_0, _Bool var_4, int var_5, unsigned char var_6, int var_9, int zero);

int main() {
    init();
    test(var_0, var_4, var_5, var_6, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
