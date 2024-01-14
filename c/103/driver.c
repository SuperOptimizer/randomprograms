#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -764941308208736666LL;
unsigned long long int var_1 = 14887913160823144437ULL;
long long int var_2 = 2168672865218170889LL;
long long int var_4 = -4305289059983302224LL;
long long int var_7 = -36242931375949276LL;
long long int var_8 = 8670933258056841674LL;
int var_10 = 639480848;
long long int var_12 = 3217420357247359962LL;
int zero = 0;
long long int var_13 = 1624029474967028726LL;
short var_14 = (short)-20826;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(long long int var_0, unsigned long long int var_1, long long int var_2, long long int var_4, long long int var_7, long long int var_8, int var_10, long long int var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_7, var_8, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
