#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 64448346U;
unsigned int var_4 = 3565697151U;
unsigned int var_5 = 3948171647U;
unsigned int var_8 = 2720702944U;
unsigned int var_10 = 2764110863U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1963215372U;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(_Bool var_0, _Bool var_1, _Bool var_2, unsigned int var_3, unsigned int var_4, unsigned int var_5, unsigned int var_8, unsigned int var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_8, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
