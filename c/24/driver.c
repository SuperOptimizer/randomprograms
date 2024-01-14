#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
long long int var_9 = 28621918780806751LL;
int zero = 0;
unsigned short var_14 = (unsigned short)6829;
long long int var_15 = 1375699974588447574LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(signed char var_0, long long int var_9, int zero);

int main() {
    init();
    test(var_0, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
