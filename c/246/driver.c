#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 615847676;
unsigned int var_3 = 4070867350U;
signed char var_6 = (signed char)33;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)59303;
int var_10 = 353128497;
int zero = 0;
unsigned long long int var_11 = 2625296088747225281ULL;
unsigned char var_12 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(_Bool var_0, int var_1, unsigned int var_3, signed char var_6, _Bool var_8, unsigned short var_9, int var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_6, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
