#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
signed char var_1 = (signed char)-42;
unsigned short var_5 = (unsigned short)13851;
unsigned char var_6 = (unsigned char)243;
unsigned char var_8 = (unsigned char)14;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)47980;
unsigned long long int var_14 = 9255701376678645234ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned char var_0, signed char var_1, unsigned short var_5, unsigned char var_6, unsigned char var_8, _Bool var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_5, var_6, var_8, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
