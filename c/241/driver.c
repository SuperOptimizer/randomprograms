#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
unsigned short var_6 = (unsigned short)15534;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-5;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(signed char var_1, unsigned short var_6, _Bool var_12, int zero);

int main() {
    init();
    test(var_1, var_6, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
