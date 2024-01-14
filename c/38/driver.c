#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -382820846;
unsigned int var_1 = 2243114228U;
short var_2 = (short)-29432;
unsigned long long int var_3 = 7898267382264808043ULL;
signed char var_8 = (signed char)60;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-4059;
unsigned char var_12 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(int var_0, unsigned int var_1, short var_2, unsigned long long int var_3, signed char var_8, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
