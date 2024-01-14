#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18678;
unsigned char var_4 = (unsigned char)233;
unsigned char var_7 = (unsigned char)208;
unsigned long long int var_11 = 2384599077053559001ULL;
short var_14 = (short)-15047;
long long int var_16 = 6266811115597805476LL;
unsigned long long int var_17 = 16684532428629431335ULL;
int zero = 0;
unsigned long long int var_20 = 8519273293399211233ULL;
short var_21 = (short)-21787;
long long int var_22 = 3266216149437354549LL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(short var_3, unsigned char var_4, unsigned char var_7, unsigned long long int var_11, short var_14, long long int var_16, unsigned long long int var_17, int zero);

int main() {
    init();
    test(var_3, var_4, var_7, var_11, var_14, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
