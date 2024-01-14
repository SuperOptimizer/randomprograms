#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1254095701;
signed char var_4 = (signed char)104;
unsigned int var_9 = 2859636094U;
int zero = 0;
unsigned long long int var_19 = 10081863033673242372ULL;
unsigned int var_20 = 2314682977U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(int var_3, signed char var_4, unsigned int var_9, int zero);

int main() {
    init();
    test(var_3, var_4, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
