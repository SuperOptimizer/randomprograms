#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27326;
long long int var_4 = 5737934465535745532LL;
unsigned long long int var_6 = 9496082109285711002ULL;
unsigned long long int var_8 = 11069672480852400807ULL;
int var_9 = 1331832603;
int zero = 0;
unsigned long long int var_11 = 11228836593466634115ULL;
unsigned long long int var_12 = 4825716851928506114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(short var_1, long long int var_4, unsigned long long int var_6, unsigned long long int var_8, int var_9, int zero);

int main() {
    init();
    test(var_1, var_4, var_6, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
