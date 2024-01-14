#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1856861902U;
short var_3 = (short)281;
unsigned long long int var_4 = 8917225386891665031ULL;
signed char var_5 = (signed char)-54;
short var_9 = (short)-3031;
unsigned long long int var_10 = 16481209656580765841ULL;
long long int var_12 = 1767581260686046607LL;
long long int var_13 = 4741335539482131618LL;
long long int var_14 = -2481811325082876074LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-52;
unsigned int var_17 = 3052738546U;
int zero = 0;
unsigned long long int var_18 = 3919866641546345198ULL;
unsigned char var_19 = (unsigned char)92;
unsigned char var_20 = (unsigned char)85;
short var_21 = (short)-15571;
long long int var_22 = -7363885566301919282LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(unsigned int var_2, short var_3, unsigned long long int var_4, signed char var_5, short var_9, unsigned long long int var_10, long long int var_12, long long int var_13, long long int var_14, _Bool var_15, signed char var_16, unsigned int var_17, int zero);

int main() {
    init();
    test(var_2, var_3, var_4, var_5, var_9, var_10, var_12, var_13, var_14, var_15, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
