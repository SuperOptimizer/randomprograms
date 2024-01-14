#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25073;
short var_6 = (short)29967;
unsigned long long int var_7 = 9773364606594426677ULL;
signed char var_10 = (signed char)38;
short var_11 = (short)-367;
unsigned long long int var_16 = 3477708637116229934ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)36570;
unsigned long long int var_18 = 16707017817004972004ULL;
short var_19 = (short)16143;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned short var_3, short var_6, unsigned long long int var_7, signed char var_10, short var_11, unsigned long long int var_16, int zero);

int main() {
    init();
    test(var_3, var_6, var_7, var_10, var_11, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
