#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1697718341784477689ULL;
short var_1 = (short)-11753;
short var_2 = (short)29505;
unsigned long long int var_5 = 1542794257580847434ULL;
short var_10 = (short)-3808;
short var_11 = (short)-12123;
short var_16 = (short)29897;
int zero = 0;
long long int var_17 = 1461237604011607047LL;
short var_18 = (short)9191;
short var_19 = (short)-16730;
short var_20 = (short)2723;
short var_21 = (short)-1566;
short var_22 = (short)25950;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(unsigned long long int var_0, short var_1, short var_2, unsigned long long int var_5, short var_10, short var_11, short var_16, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_10, var_11, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
