#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)188;
unsigned short var_11 = (unsigned short)34064;
int var_14 = 1752873584;
unsigned short var_17 = (unsigned short)17544;
int zero = 0;
unsigned char var_19 = (unsigned char)251;
long long int var_20 = -8344817486146206590LL;
unsigned short var_21 = (unsigned short)51209;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned char var_4, unsigned short var_11, int var_14, unsigned short var_17, int zero);

int main() {
    init();
    test(var_4, var_11, var_14, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
