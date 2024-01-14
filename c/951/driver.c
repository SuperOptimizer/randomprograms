#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28963;
unsigned char var_9 = (unsigned char)118;
int zero = 0;
int var_10 = -1033537115;
unsigned long long int var_11 = 3740709610542972137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned short var_2, unsigned char var_9, int zero);

int main() {
    init();
    test(var_2, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
