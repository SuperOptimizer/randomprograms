#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -1038667076;
unsigned long long int var_13 = 10914294182709034675ULL;
int var_15 = -25287152;
int zero = 0;
int var_16 = 944515020;
unsigned long long int var_17 = 5237675019636069177ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1412243859U;
unsigned long long int var_20 = 2817163330488718601ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(int var_10, unsigned long long int var_13, int var_15, int zero);

int main() {
    init();
    test(var_10, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
