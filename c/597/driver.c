#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11724;
unsigned int var_2 = 3554777067U;
long long int var_3 = -3231971416787025918LL;
int zero = 0;
long long int var_14 = 5318354893928374531LL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)21055;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_1, unsigned int var_2, long long int var_3, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, zero);
    checksum();
    printf("%llu\n", seed);
}
