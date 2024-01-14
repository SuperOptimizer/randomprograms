#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1315219432U;
signed char var_3 = (signed char)-41;
signed char var_5 = (signed char)-62;
signed char var_7 = (signed char)86;
int var_8 = -236862314;
unsigned short var_9 = (unsigned short)3300;
int var_11 = -325059761;
int var_12 = 947503856;
int zero = 0;
unsigned int var_14 = 1778615644U;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5887404715855162141LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned int var_2, signed char var_3, signed char var_5, signed char var_7, int var_8, unsigned short var_9, int var_11, int var_12, int zero);

int main() {
    init();
    test(var_2, var_3, var_5, var_7, var_8, var_9, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
