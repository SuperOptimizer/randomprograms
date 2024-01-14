#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1230655142396450866LL;
short var_3 = (short)-3559;
unsigned short var_4 = (unsigned short)56436;
unsigned int var_5 = 3160138607U;
long long int var_6 = 382886838410895938LL;
unsigned char var_8 = (unsigned char)20;
signed char var_9 = (signed char)-12;
unsigned long long int var_10 = 948862662582369934ULL;
long long int var_13 = -1768794469975134921LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)25569;
short var_16 = (short)32299;
short var_17 = (short)-29400;
unsigned char var_18 = (unsigned char)25;
short var_19 = (short)20866;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(long long int var_1, short var_3, unsigned short var_4, unsigned int var_5, long long int var_6, unsigned char var_8, signed char var_9, unsigned long long int var_10, long long int var_13, _Bool var_14, int zero);

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
