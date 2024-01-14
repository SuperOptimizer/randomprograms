#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 293816171;
unsigned long long int var_2 = 10768672108080552513ULL;
unsigned int var_15 = 3598057394U;
int zero = 0;
unsigned long long int var_18 = 3761168358587148353ULL;
unsigned char var_19 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(int var_0, unsigned long long int var_2, unsigned int var_15, int zero);

int main() {
    init();
    test(var_0, var_2, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
