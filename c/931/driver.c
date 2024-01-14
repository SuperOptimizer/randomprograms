#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_9 = (unsigned char)134;
signed char var_13 = (signed char)-118;
unsigned char var_15 = (unsigned char)142;
unsigned long long int var_17 = 13313173154658017328ULL;
int zero = 0;
unsigned int var_18 = 949551743U;
unsigned long long int var_19 = 6256091916863067396ULL;
signed char var_20 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(_Bool var_3, unsigned char var_9, signed char var_13, unsigned char var_15, unsigned long long int var_17, int zero);

int main() {
    init();
    test(var_3, var_9, var_13, var_15, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
