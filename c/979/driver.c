#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1062110460;
int var_2 = 2130784914;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)106;
signed char var_7 = (signed char)-14;
signed char var_8 = (signed char)-9;
short var_9 = (short)-10791;
int zero = 0;
int var_10 = 1672441834;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(int var_1, int var_2, _Bool var_5, signed char var_6, signed char var_7, signed char var_8, short var_9, int zero);

int main() {
    init();
    test(var_1, var_2, var_5, var_6, var_7, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
