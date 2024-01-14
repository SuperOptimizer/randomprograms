#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
signed char var_2 = (signed char)33;
short var_3 = (short)13037;
signed char var_5 = (signed char)-127;
short var_6 = (short)29677;
unsigned char var_7 = (unsigned char)25;
unsigned short var_8 = (unsigned short)25045;
int var_9 = 308975978;
unsigned char var_10 = (unsigned char)65;
short var_12 = (short)18477;
unsigned long long int var_13 = 4496360176920436282ULL;
int var_14 = -188849267;
int zero = 0;
signed char var_16 = (signed char)-58;
signed char var_17 = (signed char)81;
unsigned short var_18 = (unsigned short)58247;
unsigned short var_19 = (unsigned short)8606;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(signed char var_1, signed char var_2, short var_3, signed char var_5, short var_6, unsigned char var_7, unsigned short var_8, int var_9, unsigned char var_10, short var_12, unsigned long long int var_13, int var_14, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_12, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
