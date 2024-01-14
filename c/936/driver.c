#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3405342137U;
unsigned char var_4 = (unsigned char)111;
int var_5 = -1707892308;
long long int var_13 = 3020387978009344059LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_17 = -269113615;
short var_18 = (short)29837;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_2, unsigned char var_4, int var_5, long long int var_13, _Bool var_15, int zero);

int main() {
    init();
    test(var_2, var_4, var_5, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
