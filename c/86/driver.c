#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4124;
signed char var_1 = (signed char)-6;
short var_2 = (short)15047;
short var_4 = (short)-21255;
unsigned short var_7 = (unsigned short)63666;
signed char var_8 = (signed char)70;
unsigned long long int var_9 = 220035149499828097ULL;
unsigned int var_10 = 3552205971U;
long long int var_11 = 6690151041462361026LL;
long long int var_12 = 6809412960086948502LL;
int zero = 0;
unsigned short var_14 = (unsigned short)64962;
unsigned short var_15 = (unsigned short)23090;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(short var_0, signed char var_1, short var_2, short var_4, unsigned short var_7, signed char var_8, unsigned long long int var_9, unsigned int var_10, long long int var_11, long long int var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_7, var_8, var_9, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
