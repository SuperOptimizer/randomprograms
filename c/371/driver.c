#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-107;
int zero = 0;
signed char var_18 = (signed char)-87;
unsigned char var_19 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(signed char var_3, int zero);

int main() {
    init();
    test(var_3, zero);
    checksum();
    printf("%llu\n", seed);
}
