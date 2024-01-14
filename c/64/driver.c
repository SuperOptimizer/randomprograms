#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)942;
long long int var_4 = 983511801592270767LL;
short var_6 = (short)-8418;
short var_9 = (short)-21331;
unsigned int var_12 = 1658447440U;
signed char var_13 = (signed char)120;
int zero = 0;
long long int var_19 = -3114438475480809180LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)11246;
long long int var_22 = 9078764085077254913LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(_Bool var_0, short var_3, long long int var_4, short var_6, short var_9, unsigned int var_12, signed char var_13, int zero);

int main() {
    init();
    test(var_0, var_3, var_4, var_6, var_9, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
