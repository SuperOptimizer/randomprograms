#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-27619;
signed char var_9 = (signed char)36;
long long int var_10 = -1153805479035814501LL;
int var_16 = 641968888;
int zero = 0;
int var_19 = 1381424446;
short var_20 = (short)29466;
signed char var_21 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_7, signed char var_9, long long int var_10, int var_16, int zero);

int main() {
    init();
    test(var_7, var_9, var_10, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
