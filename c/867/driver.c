#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8380;
short var_2 = (short)-5726;
_Bool var_3 = (_Bool)1;
int var_4 = 23097352;
unsigned short var_10 = (unsigned short)157;
short var_11 = (short)24246;
int var_12 = -1556992819;
unsigned long long int var_13 = 11254908613232142880ULL;
int zero = 0;
short var_16 = (short)13772;
int var_17 = -1197683597;
long long int var_18 = 3815219174401182583LL;
unsigned long long int var_19 = 1923270954378396897ULL;
int var_20 = -1630384198;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(short var_1, short var_2, _Bool var_3, int var_4, unsigned short var_10, short var_11, int var_12, unsigned long long int var_13, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_10, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
