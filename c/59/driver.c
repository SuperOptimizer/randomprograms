#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -857483190;
short var_1 = (short)-24383;
signed char var_2 = (signed char)-4;
unsigned short var_3 = (unsigned short)8665;
signed char var_5 = (signed char)51;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2500838232U;
int var_9 = -305360408;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16106939526886916008ULL;
unsigned long long int var_12 = 15918590764099095913ULL;
unsigned int var_13 = 1548607130U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)122;
unsigned int var_16 = 77612196U;
unsigned int var_17 = 1630270832U;
unsigned char var_18 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(int var_0, short var_1, signed char var_2, unsigned short var_3, signed char var_5, _Bool var_7, unsigned int var_8, int var_9, _Bool var_10, unsigned long long int var_11, unsigned long long int var_12, unsigned int var_13, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
