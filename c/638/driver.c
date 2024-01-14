#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46541;
unsigned short var_3 = (unsigned short)27502;
unsigned short var_5 = (unsigned short)39402;
int var_6 = -1373898331;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)89;
unsigned char var_10 = (unsigned char)22;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-6044;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned short var_0, unsigned short var_3, unsigned short var_5, int var_6, _Bool var_7, unsigned char var_9, unsigned char var_10, int zero);

int main() {
    init();
    test(var_0, var_3, var_5, var_6, var_7, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
