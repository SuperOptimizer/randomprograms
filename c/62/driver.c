#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)13268;
unsigned short var_13 = (unsigned short)52420;
int zero = 0;
unsigned char var_19 = (unsigned char)209;
unsigned int var_20 = 1710899643U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(short var_9, unsigned short var_13, int zero);

int main() {
    init();
    test(var_9, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
