#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29193;
_Bool var_4 = (_Bool)0;
long long int var_5 = 792229660397801707LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2409826226745221688LL;
short var_8 = (short)-7563;
short var_9 = (short)-13655;
_Bool var_10 = (_Bool)1;
short var_11 = (short)11340;
_Bool var_15 = (_Bool)1;
long long int var_17 = 448031157341786282LL;
long long int var_19 = -5858077341036023911LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-31827;
short var_23 = (short)-1972;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test(short var_2, _Bool var_4, long long int var_5, _Bool var_6, long long int var_7, short var_8, short var_9, _Bool var_10, short var_11, _Bool var_15, long long int var_17, long long int var_19, int zero);

int main() {
    init();
    test(var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_15, var_17, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
