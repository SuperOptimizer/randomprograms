#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -754633349;
unsigned char var_3 = (unsigned char)14;
_Bool var_5 = (_Bool)1;
unsigned long long int var_11 = 16522676578566215843ULL;
signed char var_17 = (signed char)-98;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8075694102508574924LL;
short var_21 = (short)5176;
unsigned char var_22 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(int var_0, unsigned char var_3, _Bool var_5, unsigned long long int var_11, signed char var_17, int zero);

int main() {
    init();
    test(var_0, var_3, var_5, var_11, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
