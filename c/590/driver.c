#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)62;
signed char var_7 = (signed char)2;
long long int var_11 = -1460292588611909492LL;
short var_14 = (short)-11209;
long long int var_16 = 3622912435302587050LL;
int zero = 0;
unsigned long long int var_17 = 10810812326236574772ULL;
unsigned int var_18 = 2720436655U;
short var_19 = (short)19487;
signed char var_20 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(short var_0, signed char var_7, long long int var_11, short var_14, long long int var_16, int zero);

int main() {
    init();
    test(var_0, var_7, var_11, var_14, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
