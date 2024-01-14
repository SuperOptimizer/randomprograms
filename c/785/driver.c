#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-77;
signed char var_3 = (signed char)35;
signed char var_5 = (signed char)-107;
signed char var_8 = (signed char)-123;
signed char var_9 = (signed char)125;
signed char var_12 = (signed char)1;
int zero = 0;
signed char var_13 = (signed char)107;
signed char var_14 = (signed char)-62;
signed char var_15 = (signed char)123;
signed char var_16 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(signed char var_1, signed char var_3, signed char var_5, signed char var_8, signed char var_9, signed char var_12, int zero);

int main() {
    init();
    test(var_1, var_3, var_5, var_8, var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
