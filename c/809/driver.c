#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned long long int var_9 = 7379534250688313160ULL;
unsigned char var_17 = (unsigned char)110;
int zero = 0;
unsigned long long int var_19 = 8552908194731884046ULL;
int var_20 = 707548932;
unsigned char var_21 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned char var_0, unsigned long long int var_9, unsigned char var_17, int zero);

int main() {
    init();
    test(var_0, var_9, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
