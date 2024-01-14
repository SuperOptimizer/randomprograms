#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14042;
signed char var_10 = (signed char)-105;
unsigned int var_11 = 843868210U;
short var_12 = (short)2352;
int var_13 = 119013686;
unsigned char var_15 = (unsigned char)79;
unsigned short var_16 = (unsigned short)19785;
int var_18 = 647799852;
int zero = 0;
short var_19 = (short)22175;
unsigned short var_20 = (unsigned short)60077;
unsigned char var_21 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_3, signed char var_10, unsigned int var_11, short var_12, int var_13, unsigned char var_15, unsigned short var_16, int var_18, int zero);

int main() {
    init();
    test(var_3, var_10, var_11, var_12, var_13, var_15, var_16, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
