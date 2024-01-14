#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4210739296U;
unsigned short var_1 = (unsigned short)56151;
signed char var_2 = (signed char)-70;
signed char var_3 = (signed char)-81;
short var_4 = (short)26028;
signed char var_5 = (signed char)41;
unsigned int var_6 = 3050467383U;
long long int var_7 = -5091801664909226047LL;
signed char var_9 = (signed char)-73;
unsigned short var_10 = (unsigned short)43736;
unsigned long long int var_11 = 1623775510353824347ULL;
int zero = 0;
int var_12 = 1903568414;
long long int var_13 = 8034465513102518835LL;
short var_14 = (short)26816;
signed char var_15 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned int var_0, unsigned short var_1, signed char var_2, signed char var_3, short var_4, signed char var_5, unsigned int var_6, long long int var_7, signed char var_9, unsigned short var_10, unsigned long long int var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
