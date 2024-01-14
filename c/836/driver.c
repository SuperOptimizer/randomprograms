#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2055566632;
unsigned long long int var_5 = 10193653507492579588ULL;
unsigned short var_11 = (unsigned short)32293;
int zero = 0;
signed char var_13 = (signed char)-6;
signed char var_14 = (signed char)-48;
long long int var_15 = -6460702863027008994LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(int var_3, unsigned long long int var_5, unsigned short var_11, int zero);

int main() {
    init();
    test(var_3, var_5, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
