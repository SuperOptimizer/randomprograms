#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29686;
signed char var_1 = (signed char)125;
unsigned short var_2 = (unsigned short)4465;
unsigned long long int var_4 = 3089654965764998934ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)54234;
signed char var_8 = (signed char)48;
short var_9 = (short)-6910;
signed char var_10 = (signed char)-54;
int zero = 0;
int var_11 = 338837649;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)29690;
long long int var_14 = -522454687491353000LL;
signed char var_15 = (signed char)-79;
signed char var_16 = (signed char)23;
unsigned char var_17 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(unsigned short var_0, signed char var_1, unsigned short var_2, unsigned long long int var_4, _Bool var_5, _Bool var_6, unsigned short var_7, signed char var_8, short var_9, signed char var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
