#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2065329669225928177LL;
signed char var_1 = (signed char)4;
unsigned long long int var_4 = 2715559326227841169ULL;
unsigned int var_6 = 1329390040U;
long long int var_7 = -4631396922045866062LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_14 = 7782950526350431814ULL;
int zero = 0;
long long int var_16 = 7953147736384399108LL;
int var_17 = -1201916347;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(long long int var_0, signed char var_1, unsigned long long int var_4, unsigned int var_6, long long int var_7, _Bool var_9, _Bool var_10, unsigned long long int var_14, int zero);

int main() {
    init();
    test(var_0, var_1, var_4, var_6, var_7, var_9, var_10, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
