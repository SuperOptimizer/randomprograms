#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5933799181948467038LL;
int var_2 = -2055735202;
unsigned char var_4 = (unsigned char)247;
unsigned int var_9 = 3970239305U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 4093291983701861512ULL;
long long int var_14 = -5174469942084177949LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(long long int var_1, int var_2, unsigned char var_4, unsigned int var_9, _Bool var_12, int zero);

int main() {
    init();
    test(var_1, var_2, var_4, var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
