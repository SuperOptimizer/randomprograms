#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36626;
long long int var_2 = -8954868124342532590LL;
unsigned int var_7 = 283229400U;
int var_8 = -994729885;
int zero = 0;
short var_13 = (short)-21908;
unsigned long long int var_14 = 6119372691107449899ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned short var_1, long long int var_2, unsigned int var_7, int var_8, int zero);

int main() {
    init();
    test(var_1, var_2, var_7, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
