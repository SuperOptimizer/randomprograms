#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6916116092254097133ULL;
short var_1 = (short)19;
short var_2 = (short)-19416;
unsigned short var_4 = (unsigned short)55852;
short var_8 = (short)22926;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)18488;
unsigned int var_18 = 781041074U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned long long int var_0, short var_1, short var_2, unsigned short var_4, short var_8, _Bool var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_8, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
