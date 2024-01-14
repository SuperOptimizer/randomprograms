#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10520;
unsigned long long int var_4 = 16802337896019146418ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1761135363U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)37539;
unsigned long long int var_12 = 7681200719220306297ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)95;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 4564698152707648087ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(short var_0, unsigned long long int var_4, _Bool var_5, unsigned int var_6, _Bool var_8, unsigned short var_9, unsigned long long int var_12, int zero);

int main() {
    init();
    test(var_0, var_4, var_5, var_6, var_8, var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
