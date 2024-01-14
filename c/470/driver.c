#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)60146;
long long int var_13 = 858016413933576248LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(_Bool var_4, int zero);

int main() {
    init();
    test(var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
