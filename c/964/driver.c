#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1681220553U;
unsigned long long int var_4 = 13911595698956072573ULL;
unsigned int var_6 = 2915220837U;
unsigned short var_7 = (unsigned short)48993;
unsigned short var_10 = (unsigned short)33242;
unsigned short var_15 = (unsigned short)57164;
int zero = 0;
long long int var_19 = 7024701717155091693LL;
unsigned int var_20 = 1003912462U;
int var_21 = 352705663;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned int var_2, unsigned long long int var_4, unsigned int var_6, unsigned short var_7, unsigned short var_10, unsigned short var_15, int zero);

int main() {
    init();
    test(var_2, var_4, var_6, var_7, var_10, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
