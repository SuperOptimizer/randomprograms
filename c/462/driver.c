#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_7 = 18410713034610165917ULL;
unsigned short var_8 = (unsigned short)2241;
unsigned short var_9 = (unsigned short)57130;
signed char var_11 = (signed char)79;
unsigned long long int var_14 = 5362222261756508914ULL;
int var_16 = -562056657;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1043954493;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(_Bool var_1, unsigned long long int var_7, unsigned short var_8, unsigned short var_9, signed char var_11, unsigned long long int var_14, int var_16, int zero);

int main() {
    init();
    test(var_1, var_7, var_8, var_9, var_11, var_14, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
