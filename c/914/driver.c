#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)44350;
unsigned int var_9 = 453835115U;
long long int var_10 = 6403904066071367784LL;
unsigned char var_12 = (unsigned char)108;
unsigned char var_13 = (unsigned char)15;
unsigned int var_17 = 1268650282U;
int zero = 0;
int var_18 = 136193229;
signed char var_19 = (signed char)-108;
short var_20 = (short)-25657;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(_Bool var_2, unsigned short var_6, unsigned int var_9, long long int var_10, unsigned char var_12, unsigned char var_13, unsigned int var_17, int zero);

int main() {
    init();
    test(var_2, var_6, var_9, var_10, var_12, var_13, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
