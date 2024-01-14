#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)88;
long long int var_5 = -2841758191302386560LL;
short var_8 = (short)-10045;
int var_9 = 205108586;
unsigned short var_11 = (unsigned short)34847;
int zero = 0;
unsigned short var_16 = (unsigned short)23664;
unsigned long long int var_17 = 791928554218749552ULL;
unsigned char var_18 = (unsigned char)97;
unsigned long long int var_19 = 12713601572929979236ULL;
long long int var_20 = -8128966447245189125LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(signed char var_3, long long int var_5, short var_8, int var_9, unsigned short var_11, int zero);

int main() {
    init();
    test(var_3, var_5, var_8, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
