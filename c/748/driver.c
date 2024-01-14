#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10011;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_17 = -4253108475649415072LL;
unsigned short var_18 = (unsigned short)36503;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(short var_1, _Bool var_7, _Bool var_8, int zero);

int main() {
    init();
    test(var_1, var_7, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
