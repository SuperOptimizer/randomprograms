#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)1464;
unsigned char var_10 = (unsigned char)41;
int zero = 0;
signed char var_11 = (signed char)69;
unsigned long long int var_12 = 8816026823636283700ULL;
long long int var_13 = 5564689735400248335LL;
int var_14 = 882312887;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned short var_8, unsigned char var_10, int zero);

int main() {
    init();
    test(var_8, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
