#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2118433743;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 2027870314766122879ULL;
int zero = 0;
unsigned long long int var_17 = 2669142988602042853ULL;
short var_18 = (short)-25238;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(int var_0, _Bool var_8, unsigned long long int var_13, int zero);

int main() {
    init();
    test(var_0, var_8, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
