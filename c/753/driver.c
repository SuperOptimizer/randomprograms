#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4236;
unsigned short var_3 = (unsigned short)23489;
unsigned int var_4 = 31962820U;
unsigned short var_5 = (unsigned short)53510;
unsigned int var_7 = 3892914331U;
unsigned char var_8 = (unsigned char)240;
short var_9 = (short)8223;
_Bool var_10 = (_Bool)1;
long long int var_13 = -2208949862182102087LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8260583967804137693LL;
int zero = 0;
long long int var_17 = 5035339221545104102LL;
long long int var_18 = 8727937743052312855LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(short var_0, unsigned short var_3, unsigned int var_4, unsigned short var_5, unsigned int var_7, unsigned char var_8, short var_9, _Bool var_10, long long int var_13, _Bool var_14, long long int var_15, int zero);

int main() {
    init();
    test(var_0, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_13, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
