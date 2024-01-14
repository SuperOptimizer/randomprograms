#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-26;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)55511;
int var_9 = 1006957664;
unsigned char var_10 = (unsigned char)32;
unsigned int var_11 = 2932166474U;
unsigned char var_12 = (unsigned char)60;
unsigned int var_13 = 3237646413U;
int var_14 = -1135776752;
int var_15 = 586984685;
int zero = 0;
signed char var_17 = (signed char)-82;
long long int var_18 = -2743965147354848418LL;
signed char var_19 = (signed char)2;
long long int var_20 = -4535009246639346969LL;
unsigned long long int var_21 = 2834790300714178605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(_Bool var_2, _Bool var_3, signed char var_5, _Bool var_6, unsigned short var_8, int var_9, unsigned char var_10, unsigned int var_11, unsigned char var_12, unsigned int var_13, int var_14, int var_15, int zero);

int main() {
    init();
    test(var_2, var_3, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
