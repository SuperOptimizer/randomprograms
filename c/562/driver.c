#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-103;
int zero = 0;
long long int var_10 = 3922736254705809074LL;
unsigned short var_11 = (unsigned short)21456;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(signed char var_6, int zero);

int main() {
    init();
    test(var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
