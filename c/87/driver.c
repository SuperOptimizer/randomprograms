#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 740730315U;
unsigned long long int var_2 = 4120598558855783307ULL;
short var_4 = (short)-473;
short var_5 = (short)-8834;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-69;
unsigned short var_11 = (unsigned short)52134;
short var_12 = (short)15209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(unsigned int var_1, unsigned long long int var_2, short var_4, short var_5, _Bool var_9, int zero);

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
