#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26068;
unsigned short var_1 = (unsigned short)35922;
long long int var_2 = 1035572598532095521LL;
unsigned long long int var_3 = 12992892326993619742ULL;
int var_6 = 472498931;
int var_8 = -1333375937;
long long int var_12 = -1311044078918149113LL;
short var_14 = (short)14884;
int zero = 0;
unsigned char var_16 = (unsigned char)133;
int var_17 = -226071658;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(short var_0, unsigned short var_1, long long int var_2, unsigned long long int var_3, int var_6, int var_8, long long int var_12, short var_14, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_6, var_8, var_12, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
