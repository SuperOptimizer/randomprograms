#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)229;
_Bool var_9 = (_Bool)0;
long long int var_15 = 5306787261143361813LL;
int zero = 0;
unsigned char var_18 = (unsigned char)64;
unsigned char var_19 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned char var_7, _Bool var_9, long long int var_15, int zero);

int main() {
    init();
    test(var_7, var_9, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
