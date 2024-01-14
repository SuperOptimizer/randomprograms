#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4902370133841077062ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 9218778425207986974ULL;
unsigned char var_6 = (unsigned char)123;
unsigned char var_8 = (unsigned char)4;
long long int var_9 = 219182372090425092LL;
unsigned short var_12 = (unsigned short)23486;
int zero = 0;
unsigned char var_13 = (unsigned char)126;
unsigned int var_14 = 250088379U;
signed char var_15 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned long long int var_0, _Bool var_1, unsigned long long int var_4, unsigned char var_6, unsigned char var_8, long long int var_9, unsigned short var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_4, var_6, var_8, var_9, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
