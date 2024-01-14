#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)255;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)235;
unsigned char var_15 = (unsigned char)186;
unsigned short var_17 = (unsigned short)53376;
int zero = 0;
unsigned int var_18 = 3685734033U;
unsigned int var_19 = 4215520014U;
int var_20 = -313681432;
unsigned short var_21 = (unsigned short)39746;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned char var_5, _Bool var_6, unsigned char var_10, unsigned char var_15, unsigned short var_17, int zero);

int main() {
    init();
    test(var_5, var_6, var_10, var_15, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
