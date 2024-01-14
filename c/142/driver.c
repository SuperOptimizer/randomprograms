#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32116;
unsigned long long int var_11 = 4311188416790614330ULL;
long long int var_18 = 7179400077717946032LL;
int zero = 0;
long long int var_19 = 996771845811769334LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(short var_2, unsigned long long int var_11, long long int var_18, int zero);

int main() {
    init();
    test(var_2, var_11, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
