#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)39269;
int zero = 0;
unsigned long long int var_11 = 6918781964913548724ULL;
unsigned short var_12 = (unsigned short)64588;
int var_13 = 911089093;
unsigned long long int var_14 = 15630568994795770859ULL;
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
void test(_Bool var_4, unsigned short var_7, int zero);

int main() {
    init();
    test(var_4, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
