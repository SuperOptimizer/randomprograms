#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15487957617907962643ULL;
long long int var_9 = 106865244068068236LL;
int zero = 0;
unsigned int var_16 = 794754803U;
short var_17 = (short)-1268;
long long int var_18 = 4292608996783966578LL;
unsigned short var_19 = (unsigned short)25239;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned long long int var_1, long long int var_9, int zero);

int main() {
    init();
    test(var_1, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
