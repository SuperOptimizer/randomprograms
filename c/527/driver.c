#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4790619289809454121LL;
unsigned char var_5 = (unsigned char)49;
short var_6 = (short)-3254;
int zero = 0;
unsigned int var_10 = 1215605500U;
unsigned long long int var_11 = 4689881482295552545ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(long long int var_1, unsigned char var_5, short var_6, int zero);

int main() {
    init();
    test(var_1, var_5, var_6, zero);
    checksum();
    printf("%llu\n", seed);
}
