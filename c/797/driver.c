#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -136971231105382179LL;
signed char var_3 = (signed char)58;
signed char var_6 = (signed char)80;
int zero = 0;
unsigned long long int var_10 = 8196658241815211273ULL;
unsigned short var_11 = (unsigned short)2301;
unsigned long long int var_12 = 3245926012169966866ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(long long int var_2, signed char var_3, signed char var_6, int zero);

int main() {
    init();
    test(var_2, var_3, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
