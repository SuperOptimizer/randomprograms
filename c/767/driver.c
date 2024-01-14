#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)231;
unsigned char var_3 = (unsigned char)7;
unsigned long long int var_4 = 5142830403118510877ULL;
unsigned int var_5 = 365726868U;
unsigned short var_10 = (unsigned short)17236;
unsigned long long int var_11 = 2137114816789270243ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_19 = -96516639;
int var_20 = 425840879;
short var_21 = (short)-18204;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned char var_1, unsigned char var_3, unsigned long long int var_4, unsigned int var_5, unsigned short var_10, unsigned long long int var_11, _Bool var_15, int zero);

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_10, var_11, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
