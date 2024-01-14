#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3526003457U;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)219;
unsigned short var_8 = (unsigned short)2404;
int zero = 0;
unsigned char var_10 = (unsigned char)189;
unsigned char var_11 = (unsigned char)167;
unsigned long long int var_12 = 16405140259665459758ULL;
long long int var_13 = -8318582003653756969LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(_Bool var_0, unsigned int var_1, _Bool var_2, unsigned char var_3, unsigned short var_8, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
