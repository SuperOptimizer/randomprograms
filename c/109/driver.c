#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34846;
unsigned short var_2 = (unsigned short)14176;
unsigned short var_4 = (unsigned short)27682;
unsigned short var_5 = (unsigned short)16406;
unsigned short var_8 = (unsigned short)2221;
unsigned short var_13 = (unsigned short)53386;
unsigned short var_14 = (unsigned short)59913;
unsigned short var_15 = (unsigned short)60892;
int zero = 0;
unsigned short var_16 = (unsigned short)23463;
unsigned short var_17 = (unsigned short)6291;
unsigned short var_18 = (unsigned short)19142;
unsigned short var_19 = (unsigned short)61463;
unsigned short var_20 = (unsigned short)13441;
unsigned short var_21 = (unsigned short)15007;
unsigned short var_22 = (unsigned short)44861;
unsigned short var_23 = (unsigned short)23634;
unsigned short var_24 = (unsigned short)16317;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test(unsigned short var_0, unsigned short var_2, unsigned short var_4, unsigned short var_5, unsigned short var_8, unsigned short var_13, unsigned short var_14, unsigned short var_15, int zero);

int main() {
    init();
    test(var_0, var_2, var_4, var_5, var_8, var_13, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
