#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
unsigned char var_9 = (unsigned char)34;
unsigned long long int var_10 = 11709582297684112831ULL;
int var_11 = 1289740013;
signed char var_16 = (signed char)6;
int zero = 0;
unsigned long long int var_17 = 8825610104045761448ULL;
unsigned int var_18 = 374415279U;
short var_19 = (short)23718;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned char var_2, unsigned char var_9, unsigned long long int var_10, int var_11, signed char var_16, int zero);

int main() {
    init();
    test(var_2, var_9, var_10, var_11, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
