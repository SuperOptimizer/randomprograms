#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
long long int var_13 = -4078714508884728013LL;
signed char var_16 = (signed char)-120;
unsigned int var_18 = 827967625U;
short var_19 = (short)4944;
int zero = 0;
unsigned long long int var_20 = 9066825334387938041ULL;
signed char var_21 = (signed char)-120;
int var_22 = -1800709770;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(signed char var_1, long long int var_13, signed char var_16, unsigned int var_18, short var_19, int zero);

int main() {
    init();
    test(var_1, var_13, var_16, var_18, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
