#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5224754783175984968LL;
unsigned long long int var_4 = 1388048351283604532ULL;
unsigned int var_7 = 3859825433U;
signed char var_10 = (signed char)-80;
int var_11 = 432694821;
int zero = 0;
short var_12 = (short)31049;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)49597;
unsigned long long int var_15 = 10510942438261184327ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(long long int var_3, unsigned long long int var_4, unsigned int var_7, signed char var_10, int var_11, int zero);

int main() {
    init();
    test(var_3, var_4, var_7, var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
