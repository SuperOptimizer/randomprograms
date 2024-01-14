#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10948;
long long int var_1 = 6242697363573611340LL;
int var_2 = -960727404;
unsigned char var_3 = (unsigned char)10;
int var_4 = 1460106468;
long long int var_7 = -2554031252403036607LL;
unsigned int var_8 = 124045440U;
unsigned int var_10 = 3148989764U;
unsigned short var_11 = (unsigned short)27057;
int var_12 = -1569993761;
int zero = 0;
unsigned int var_13 = 1312689963U;
short var_14 = (short)-24938;
long long int var_15 = 7467958632725738459LL;
unsigned int var_16 = 4032363534U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(short var_0, long long int var_1, int var_2, unsigned char var_3, int var_4, long long int var_7, unsigned int var_8, unsigned int var_10, unsigned short var_11, int var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
