#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3487570483870580565LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)37507;
int var_16 = -1481657406;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(long long int var_7, _Bool var_12, int zero);

int main() {
    init();
    test(var_7, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
