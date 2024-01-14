#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 892128027U;
unsigned int var_9 = 724620568U;
unsigned char var_10 = (unsigned char)208;
unsigned char var_12 = (unsigned char)179;
unsigned long long int var_15 = 4691244239779387623ULL;
long long int var_16 = 7479206363772624151LL;
int zero = 0;
unsigned short var_17 = (unsigned short)35187;
unsigned int var_18 = 1379111170U;
unsigned int var_19 = 875230380U;
long long int var_20 = 4800716816014136275LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned int var_2, unsigned int var_9, unsigned char var_10, unsigned char var_12, unsigned long long int var_15, long long int var_16, int zero);

int main() {
    init();
    test(var_2, var_9, var_10, var_12, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
