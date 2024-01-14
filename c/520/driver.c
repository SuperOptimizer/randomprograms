#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-54;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-111;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2465730185U;
int zero = 0;
short var_13 = (short)29154;
unsigned char var_14 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(_Bool var_1, signed char var_5, _Bool var_8, signed char var_10, _Bool var_11, unsigned int var_12, int zero);

int main() {
    init();
    test(var_1, var_5, var_8, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
