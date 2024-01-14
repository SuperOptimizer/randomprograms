#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)23052;
int zero = 0;
signed char var_11 = (signed char)-54;
unsigned short var_12 = (unsigned short)33879;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(_Bool var_0, short var_1, int zero);

int main() {
    init();
    test(var_0, var_1, zero);
    checksum();
    printf("%llu\n", seed);
}
