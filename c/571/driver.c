#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -309005831;
long long int var_3 = 2374721525112367421LL;
short var_7 = (short)22579;
signed char var_9 = (signed char)-21;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-10770;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(int var_0, long long int var_3, short var_7, signed char var_9, int zero);

int main() {
    init();
    test(var_0, var_3, var_7, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
