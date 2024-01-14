#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1830352130U;
unsigned int var_5 = 1902732290U;
unsigned int var_11 = 28908961U;
int zero = 0;
unsigned int var_12 = 3017652792U;
unsigned int var_13 = 1378272751U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned int var_2, unsigned int var_5, unsigned int var_11, int zero);

int main() {
    init();
    test(var_2, var_5, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
