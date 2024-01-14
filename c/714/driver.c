#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
signed char var_3 = (signed char)-41;
signed char var_7 = (signed char)-54;
signed char var_8 = (signed char)75;
signed char var_11 = (signed char)-125;
signed char var_12 = (signed char)-13;
int zero = 0;
signed char var_13 = (signed char)-47;
signed char var_14 = (signed char)2;
signed char var_15 = (signed char)-44;
signed char var_16 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(signed char var_0, signed char var_3, signed char var_7, signed char var_8, signed char var_11, signed char var_12, int zero);

int main() {
    init();
    test(var_0, var_3, var_7, var_8, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
