#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
signed char var_5 = (signed char)47;
signed char var_7 = (signed char)-45;
signed char var_9 = (signed char)-112;
signed char var_10 = (signed char)88;
signed char var_12 = (signed char)81;
signed char var_14 = (signed char)76;
int zero = 0;
signed char var_17 = (signed char)9;
signed char var_18 = (signed char)100;
signed char var_19 = (signed char)-96;
signed char var_20 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(signed char var_0, signed char var_5, signed char var_7, signed char var_9, signed char var_10, signed char var_12, signed char var_14, int zero);

int main() {
    init();
    test(var_0, var_5, var_7, var_9, var_10, var_12, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
