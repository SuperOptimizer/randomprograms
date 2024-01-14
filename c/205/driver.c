#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned long long int var_1 = 8329260725610396548ULL;
unsigned long long int var_2 = 3151639945306074698ULL;
short var_3 = (short)7362;
unsigned short var_4 = (unsigned short)4721;
unsigned int var_5 = 1089882765U;
unsigned int var_6 = 2263880553U;
long long int var_7 = 4477086093997981934LL;
unsigned long long int var_8 = 14343718556642140916ULL;
int var_9 = -2005306116;
short var_10 = (short)178;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-4925;
short var_13 = (short)11954;
unsigned long long int var_14 = 10418590113821898414ULL;
unsigned int var_15 = 4250416046U;
unsigned int var_16 = 1638659650U;
_Bool var_17 = (_Bool)1;
int var_18 = -1377647724;
unsigned char var_19 = (unsigned char)3;
unsigned short var_20 = (unsigned short)8045;
long long int var_21 = 5074447284815767449LL;
unsigned int var_22 = 1838288787U;
unsigned char var_23 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(unsigned char var_0, unsigned long long int var_1, unsigned long long int var_2, short var_3, unsigned short var_4, unsigned int var_5, unsigned int var_6, long long int var_7, unsigned long long int var_8, int var_9, short var_10, _Bool var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
