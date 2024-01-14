#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1746462963496612156LL;
int var_9 = -1665984648;
unsigned int var_11 = 2295498032U;
int zero = 0;
unsigned short var_16 = (unsigned short)21753;
unsigned int var_17 = 366637002U;
int var_18 = 1026416514;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(long long int var_5, int var_9, unsigned int var_11, int zero);

int main() {
    init();
    test(var_5, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
