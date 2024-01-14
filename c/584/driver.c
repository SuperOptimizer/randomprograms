#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 487443806U;
signed char var_1 = (signed char)-37;
short var_2 = (short)-24645;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)44662;
long long int var_14 = -4304747213398251316LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned int var_0, signed char var_1, short var_2, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, zero);
    checksum();
    printf("%llu\n", seed);
}
