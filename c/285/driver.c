#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 4464011481915096914ULL;
unsigned char var_4 = (unsigned char)63;
int zero = 0;
signed char var_10 = (signed char)-66;
unsigned long long int var_11 = 16977216393958067700ULL;
signed char var_12 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(_Bool var_0, unsigned long long int var_3, unsigned char var_4, int zero);

int main() {
    init();
    test(var_0, var_3, var_4, zero);
    checksum();
    printf("%llu\n", seed);
}
