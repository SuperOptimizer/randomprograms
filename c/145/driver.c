#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2897029940955028829LL;
unsigned short var_1 = (unsigned short)60389;
unsigned int var_3 = 629880349U;
unsigned char var_7 = (unsigned char)6;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-21234;
unsigned short var_11 = (unsigned short)53956;
unsigned char var_12 = (unsigned char)109;
int zero = 0;
unsigned long long int var_14 = 6951555910953962574ULL;
unsigned long long int var_15 = 2313764666020407717ULL;
unsigned long long int var_16 = 4737501803880753431ULL;
signed char var_17 = (signed char)122;
int var_18 = -777455565;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(long long int var_0, unsigned short var_1, unsigned int var_3, unsigned char var_7, _Bool var_9, short var_10, unsigned short var_11, unsigned char var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_7, var_9, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
