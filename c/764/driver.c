#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)13866;
long long int var_10 = -353937122754061948LL;
int zero = 0;
unsigned long long int var_11 = 8799367134451336224ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(unsigned short var_4, long long int var_10, int zero);

int main() {
    init();
    test(var_4, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
