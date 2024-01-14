#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6233366501001510364LL;
signed char var_7 = (signed char)37;
long long int var_9 = -6847624478955481172LL;
int zero = 0;
short var_20 = (short)-31717;
unsigned short var_21 = (unsigned short)8360;
short var_22 = (short)-27997;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(long long int var_6, signed char var_7, long long int var_9, int zero);

int main() {
    init();
    test(var_6, var_7, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
