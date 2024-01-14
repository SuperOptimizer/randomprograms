#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61184;
unsigned long long int var_7 = 1359147901247888176ULL;
long long int var_8 = -1550445651374482113LL;
long long int var_9 = 4221256758069139482LL;
unsigned long long int var_17 = 13776229041340347346ULL;
int zero = 0;
long long int var_18 = -2708062325088522720LL;
long long int var_19 = 5889419721015543442LL;
unsigned long long int var_20 = 8720565462695491660ULL;
long long int var_21 = -6957957551696151921LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned short var_1, unsigned long long int var_7, long long int var_8, long long int var_9, unsigned long long int var_17, int zero);

int main() {
    init();
    test(var_1, var_7, var_8, var_9, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
