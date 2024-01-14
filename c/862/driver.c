#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5717;
short var_1 = (short)32206;
short var_3 = (short)29095;
short var_4 = (short)24938;
signed char var_5 = (signed char)15;
int var_6 = -22034977;
int var_7 = -1422346937;
unsigned short var_8 = (unsigned short)35704;
short var_9 = (short)20816;
signed char var_14 = (signed char)-9;
int zero = 0;
unsigned long long int var_16 = 4206118384347203230ULL;
unsigned char var_17 = (unsigned char)93;
long long int var_18 = -5985401304469934453LL;
signed char var_19 = (signed char)97;
signed char var_20 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(short var_0, short var_1, short var_3, short var_4, signed char var_5, int var_6, int var_7, unsigned short var_8, short var_9, signed char var_14, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
