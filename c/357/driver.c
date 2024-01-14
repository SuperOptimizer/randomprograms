#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
unsigned short var_1 = (unsigned short)52046;
unsigned long long int var_4 = 271322703111153916ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)26;
unsigned long long int var_9 = 3126610291939444036ULL;
int zero = 0;
short var_10 = (short)-30670;
short var_11 = (short)28455;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(signed char var_0, unsigned short var_1, unsigned long long int var_4, _Bool var_5, unsigned char var_8, unsigned long long int var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_4, var_5, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
