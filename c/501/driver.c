#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3875936220U;
unsigned long long int var_9 = 12712818764788964238ULL;
long long int var_11 = 549668048203455584LL;
long long int var_17 = 2961320104290165409LL;
unsigned short var_18 = (unsigned short)59326;
int zero = 0;
short var_19 = (short)15134;
unsigned char var_20 = (unsigned char)150;
short var_21 = (short)26039;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned int var_1, unsigned long long int var_9, long long int var_11, long long int var_17, unsigned short var_18, int zero);

int main() {
    init();
    test(var_1, var_9, var_11, var_17, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
