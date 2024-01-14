#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3175814005441785587LL;
short var_2 = (short)-24262;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 1948617393U;
int var_8 = -1292217148;
long long int var_10 = 6946487416446437287LL;
int zero = 0;
long long int var_12 = -6490769060670423938LL;
int var_13 = 918819682;
long long int var_14 = 6900504304259104951LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(long long int var_0, short var_2, _Bool var_3, unsigned int var_5, int var_8, long long int var_10, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_5, var_8, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
