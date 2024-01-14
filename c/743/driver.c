#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13289757405386765089ULL;
unsigned int var_2 = 2467601248U;
long long int var_3 = 2135723464365968934LL;
unsigned long long int var_7 = 11363307323469997824ULL;
unsigned long long int var_8 = 9951010983628017957ULL;
unsigned char var_9 = (unsigned char)15;
unsigned short var_10 = (unsigned short)14242;
int zero = 0;
short var_11 = (short)-8561;
unsigned long long int var_12 = 4480046016106923950ULL;
unsigned int var_13 = 4224243086U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned long long int var_0, unsigned int var_2, long long int var_3, unsigned long long int var_7, unsigned long long int var_8, unsigned char var_9, unsigned short var_10, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_7, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
