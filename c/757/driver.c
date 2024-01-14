#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned int var_1 = 3609673685U;
unsigned char var_3 = (unsigned char)165;
long long int var_4 = 4806748296433916881LL;
unsigned long long int var_5 = 4953361683682461827ULL;
unsigned long long int var_6 = 1283453125767095025ULL;
unsigned short var_8 = (unsigned short)49324;
unsigned char var_9 = (unsigned char)152;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)5830;
short var_13 = (short)27622;
unsigned char var_14 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned char var_0, unsigned int var_1, unsigned char var_3, long long int var_4, unsigned long long int var_5, unsigned long long int var_6, unsigned short var_8, unsigned char var_9, _Bool var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
