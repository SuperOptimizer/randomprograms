#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3128699025U;
unsigned char var_6 = (unsigned char)91;
unsigned char var_19 = (unsigned char)180;
int zero = 0;
unsigned int var_20 = 1263119249U;
unsigned char var_21 = (unsigned char)171;
unsigned char var_22 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned int var_1, unsigned char var_6, unsigned char var_19, int zero);

int main() {
    init();
    test(var_1, var_6, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
