#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6492591235247147543LL;
unsigned long long int var_5 = 14064763355957336694ULL;
short var_7 = (short)24913;
short var_8 = (short)-7534;
short var_11 = (short)-14935;
unsigned long long int var_15 = 1983159431865662801ULL;
unsigned short var_18 = (unsigned short)45986;
int zero = 0;
short var_20 = (short)16394;
long long int var_21 = 3198916011041474911LL;
short var_22 = (short)25778;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(long long int var_3, unsigned long long int var_5, short var_7, short var_8, short var_11, unsigned long long int var_15, unsigned short var_18, int zero);

int main() {
    init();
    test(var_3, var_5, var_7, var_8, var_11, var_15, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
