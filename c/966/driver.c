#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3544559503U;
short var_3 = (short)15988;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1292947466U;
int var_9 = 902281387;
int zero = 0;
long long int var_13 = -6041847670336268070LL;
short var_14 = (short)23722;
unsigned long long int var_15 = 16447163338286828421ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2951678651U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned int var_1, short var_3, _Bool var_5, unsigned int var_6, int var_9, int zero);

int main() {
    init();
    test(var_1, var_3, var_5, var_6, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
