#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
signed char var_1 = (signed char)-104;
unsigned long long int var_5 = 8753793642091991981ULL;
short var_7 = (short)-17771;
unsigned char var_9 = (unsigned char)115;
unsigned long long int var_11 = 1507521184610068540ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)53245;
unsigned char var_21 = (unsigned char)180;
int var_22 = -1605636534;
int var_23 = -877177226;
signed char var_24 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test(unsigned char var_0, signed char var_1, unsigned long long int var_5, short var_7, unsigned char var_9, unsigned long long int var_11, _Bool var_19, int zero);

int main() {
    init();
    test(var_0, var_1, var_5, var_7, var_9, var_11, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
