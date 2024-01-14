#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4271208032U;
int var_2 = -1346041568;
unsigned short var_5 = (unsigned short)45744;
signed char var_6 = (signed char)-66;
int var_7 = -1260992184;
signed char var_11 = (signed char)110;
int zero = 0;
unsigned short var_12 = (unsigned short)13577;
short var_13 = (short)20216;
signed char var_14 = (signed char)31;
unsigned short var_15 = (unsigned short)36724;
signed char var_16 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned int var_1, int var_2, unsigned short var_5, signed char var_6, int var_7, signed char var_11, int zero);

int main() {
    init();
    test(var_1, var_2, var_5, var_6, var_7, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
