#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13868556516248128863ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)47243;
unsigned short var_5 = (unsigned short)47657;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)2635;
unsigned long long int var_9 = 3199242905565153435ULL;
unsigned int var_11 = 97163229U;
unsigned int var_12 = 282392288U;
signed char var_13 = (signed char)-14;
unsigned int var_14 = 2935089404U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1500929143769028757ULL;
signed char var_18 = (signed char)-109;
int zero = 0;
signed char var_19 = (signed char)-125;
unsigned char var_20 = (unsigned char)120;
unsigned char var_21 = (unsigned char)62;
unsigned short var_22 = (unsigned short)63466;
unsigned short var_23 = (unsigned short)28086;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 7320142723180362950ULL;
unsigned int var_26 = 2289060151U;
signed char var_27 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test(unsigned long long int var_1, _Bool var_2, unsigned short var_4, unsigned short var_5, _Bool var_6, _Bool var_7, unsigned short var_8, unsigned long long int var_9, unsigned int var_11, unsigned int var_12, signed char var_13, unsigned int var_14, _Bool var_16, unsigned long long int var_17, signed char var_18, int zero);

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, var_16, var_17, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
