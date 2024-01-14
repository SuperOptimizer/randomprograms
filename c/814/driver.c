#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -164285550554994052LL;
unsigned long long int var_3 = 5983750670876860099ULL;
signed char var_4 = (signed char)7;
short var_9 = (short)-23614;
int zero = 0;
int var_11 = -1489458507;
signed char var_12 = (signed char)-94;
long long int var_13 = 2313591680485655579LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(long long int var_0, unsigned long long int var_3, signed char var_4, short var_9, int zero);

int main() {
    init();
    test(var_0, var_3, var_4, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
