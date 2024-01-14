#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12927;
int var_7 = -273905815;
unsigned char var_8 = (unsigned char)103;
int var_9 = 1278019077;
signed char var_10 = (signed char)31;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)5181;
unsigned short var_13 = (unsigned short)17840;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned short var_3, int var_7, unsigned char var_8, int var_9, signed char var_10, int zero);

int main() {
    init();
    test(var_3, var_7, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
