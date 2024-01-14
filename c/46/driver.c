#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61660;
unsigned short var_3 = (unsigned short)32798;
unsigned short var_5 = (unsigned short)63466;
int zero = 0;
signed char var_10 = (signed char)-5;
unsigned short var_11 = (unsigned short)41543;
int var_12 = 920152531;
unsigned char var_13 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned short var_2, unsigned short var_3, unsigned short var_5, int zero);

int main() {
    init();
    test(var_2, var_3, var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
