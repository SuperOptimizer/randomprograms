#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6596963449657443118LL;
unsigned char var_3 = (unsigned char)234;
short var_4 = (short)-939;
short var_5 = (short)13612;
unsigned short var_8 = (unsigned short)23615;
unsigned long long int var_9 = 10481218037811798691ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)56099;
unsigned int var_12 = 4051582041U;
int zero = 0;
unsigned char var_14 = (unsigned char)106;
_Bool var_15 = (_Bool)1;
long long int var_16 = 7582733699804756833LL;
signed char var_17 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(long long int var_1, unsigned char var_3, short var_4, short var_5, unsigned short var_8, unsigned long long int var_9, _Bool var_10, unsigned short var_11, unsigned int var_12, int zero);

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_8, var_9, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
