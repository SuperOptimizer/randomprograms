#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -63051083;
_Bool var_3 = (_Bool)1;
long long int var_4 = 840959320308859201LL;
unsigned long long int var_6 = 15019071241118500548ULL;
long long int var_7 = 6138452731359430906LL;
int zero = 0;
int var_10 = -458269060;
unsigned long long int var_11 = 2194565446116093642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(int var_1, _Bool var_3, long long int var_4, unsigned long long int var_6, long long int var_7, int zero);

int main() {
    init();
    test(var_1, var_3, var_4, var_6, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
