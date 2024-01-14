#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1992301014610775264LL;
long long int var_8 = -8420292571984401758LL;
unsigned int var_9 = 2134371907U;
unsigned short var_12 = (unsigned short)13911;
long long int var_15 = -8440367156758511581LL;
int zero = 0;
long long int var_16 = 4918196501582427286LL;
long long int var_17 = 2115846598402058176LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(long long int var_5, long long int var_8, unsigned int var_9, unsigned short var_12, long long int var_15, int zero);

int main() {
    init();
    test(var_5, var_8, var_9, var_12, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
