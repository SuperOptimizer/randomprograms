#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46414;
signed char var_5 = (signed char)-26;
signed char var_7 = (signed char)-53;
unsigned long long int var_11 = 2756401661067029884ULL;
int zero = 0;
unsigned long long int var_18 = 12264638244587754745ULL;
int var_19 = -1137976803;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned short var_1, signed char var_5, signed char var_7, unsigned long long int var_11, int zero);

int main() {
    init();
    test(var_1, var_5, var_7, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
