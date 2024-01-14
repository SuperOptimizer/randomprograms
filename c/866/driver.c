#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 474051345U;
long long int var_3 = -5124382749531706267LL;
int var_7 = -253610060;
unsigned char var_8 = (unsigned char)44;
signed char var_9 = (signed char)38;
int zero = 0;
long long int var_10 = 392402254052347822LL;
unsigned char var_11 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned int var_2, long long int var_3, int var_7, unsigned char var_8, signed char var_9, int zero);

int main() {
    init();
    test(var_2, var_3, var_7, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
