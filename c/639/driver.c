#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3439402080236011079ULL;
unsigned short var_2 = (unsigned short)14128;
unsigned char var_4 = (unsigned char)3;
unsigned char var_5 = (unsigned char)243;
signed char var_9 = (signed char)-98;
int zero = 0;
signed char var_12 = (signed char)53;
unsigned short var_13 = (unsigned short)2571;
unsigned char var_14 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned long long int var_0, unsigned short var_2, unsigned char var_4, unsigned char var_5, signed char var_9, int zero);

int main() {
    init();
    test(var_0, var_2, var_4, var_5, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
