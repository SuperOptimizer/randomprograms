#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_9 = 3933093558023642737LL;
long long int var_13 = 9053221018663586054LL;
int zero = 0;
long long int var_15 = -509859020509952585LL;
unsigned long long int var_16 = 17173647125265082601ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(_Bool var_2, long long int var_9, long long int var_13, int zero);

int main() {
    init();
    test(var_2, var_9, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
