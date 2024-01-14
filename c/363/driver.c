#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
long long int var_1 = -3917552472862634978LL;
signed char var_2 = (signed char)-103;
int zero = 0;
short var_10 = (short)-5409;
signed char var_11 = (signed char)114;
long long int var_12 = -5454410428722845089LL;
signed char var_13 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(signed char var_0, long long int var_1, signed char var_2, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, zero);
    checksum();
    printf("%llu\n", seed);
}
