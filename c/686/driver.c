#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6778892140295271608ULL;
unsigned short var_2 = (unsigned short)33805;
unsigned long long int var_6 = 14608783138420141235ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)31585;
unsigned long long int var_16 = 4776840493934307697ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned long long int var_1, unsigned short var_2, unsigned long long int var_6, _Bool var_14, int zero);

int main() {
    init();
    test(var_1, var_2, var_6, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
