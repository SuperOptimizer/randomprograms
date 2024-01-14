#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25382;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-83;
unsigned short var_4 = (unsigned short)52638;
unsigned int var_5 = 3316147339U;
short var_11 = (short)-17456;
int var_12 = -1940569386;
short var_13 = (short)11026;
int var_14 = 513239627;
signed char var_15 = (signed char)30;
long long int var_16 = 5724371678428742398LL;
unsigned short var_17 = (unsigned short)8023;
int zero = 0;
signed char var_19 = (signed char)-18;
int var_20 = -1153192119;
int var_21 = 998855952;
unsigned long long int var_22 = 3619220144770734695ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(short var_1, _Bool var_2, signed char var_3, unsigned short var_4, unsigned int var_5, short var_11, int var_12, short var_13, int var_14, signed char var_15, long long int var_16, unsigned short var_17, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
