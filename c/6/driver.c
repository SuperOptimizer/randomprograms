#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2284904220U;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)58853;
int zero = 0;
unsigned long long int var_10 = 6119939585601357503ULL;
signed char var_11 = (signed char)-108;
long long int var_12 = 6774375216834109413LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(unsigned int var_1, _Bool var_3, unsigned short var_7, int zero);

int main() {
    init();
    test(var_1, var_3, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
