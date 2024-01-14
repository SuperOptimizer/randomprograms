#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6163972149126830028ULL;
short var_7 = (short)12894;
unsigned char var_8 = (unsigned char)110;
long long int var_9 = 138908842410944682LL;
unsigned short var_10 = (unsigned short)32626;
unsigned char var_12 = (unsigned char)177;
unsigned short var_13 = (unsigned short)18891;
int zero = 0;
unsigned short var_15 = (unsigned short)26776;
unsigned char var_16 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned long long int var_2, short var_7, unsigned char var_8, long long int var_9, unsigned short var_10, unsigned char var_12, unsigned short var_13, int zero);

int main() {
    init();
    test(var_2, var_7, var_8, var_9, var_10, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
