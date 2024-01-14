#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned short var_14 = (unsigned short)18682;
int zero = 0;
signed char var_20 = (signed char)-72;
signed char var_21 = (signed char)-50;
unsigned short var_22 = (unsigned short)8416;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(signed char var_0, unsigned short var_14, int zero);

int main() {
    init();
    test(var_0, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
