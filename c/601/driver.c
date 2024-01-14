#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)8800;
unsigned char var_9 = (unsigned char)240;
unsigned char var_10 = (unsigned char)157;
unsigned short var_13 = (unsigned short)1471;
int zero = 0;
short var_14 = (short)15508;
unsigned char var_15 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(signed char var_1, _Bool var_7, unsigned short var_8, unsigned char var_9, unsigned char var_10, unsigned short var_13, int zero);

int main() {
    init();
    test(var_1, var_7, var_8, var_9, var_10, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
