#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)8410;
int var_9 = -1933099156;
unsigned char var_10 = (unsigned char)193;
signed char var_12 = (signed char)85;
unsigned int var_13 = 463731996U;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
long long int var_16 = -8057597767644635531LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_8, int var_9, unsigned char var_10, signed char var_12, unsigned int var_13, int zero);

int main() {
    init();
    test(var_8, var_9, var_10, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
