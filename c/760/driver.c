#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
signed char var_1 = (signed char)106;
int var_3 = -1699520483;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)32503;
signed char var_7 = (signed char)63;
int var_8 = -1176054045;
unsigned char var_9 = (unsigned char)88;
int zero = 0;
int var_10 = 1760347892;
unsigned char var_11 = (unsigned char)103;
unsigned int var_12 = 1933645373U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)22;
signed char var_15 = (signed char)-47;
int var_16 = 1288453396;
unsigned int var_17 = 1738153614U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(signed char var_0, signed char var_1, int var_3, _Bool var_5, unsigned short var_6, signed char var_7, int var_8, unsigned char var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_6, var_7, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
