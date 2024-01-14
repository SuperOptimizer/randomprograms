#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)25640;
int zero = 0;
unsigned short var_19 = (unsigned short)10821;
unsigned char var_20 = (unsigned char)15;
long long int var_21 = -726558433341486503LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_11, int zero);

int main() {
    init();
    test(var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
