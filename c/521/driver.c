#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 475080637U;
unsigned char var_2 = (unsigned char)49;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)45794;
unsigned char var_5 = (unsigned char)202;
unsigned short var_6 = (unsigned short)35906;
unsigned int var_7 = 4192482285U;
signed char var_8 = (signed char)-36;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)94;
int zero = 0;
unsigned char var_15 = (unsigned char)13;
unsigned char var_16 = (unsigned char)131;
unsigned short var_17 = (unsigned short)33505;
unsigned short var_18 = (unsigned short)14629;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)39255;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned int var_0, unsigned char var_2, _Bool var_3, unsigned short var_4, unsigned char var_5, unsigned short var_6, unsigned int var_7, signed char var_8, _Bool var_13, unsigned char var_14, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
