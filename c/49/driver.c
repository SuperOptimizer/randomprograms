#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)(-127 - 1);
unsigned long long int var_9 = 11055320425368807607ULL;
unsigned long long int var_11 = 16187637889725129395ULL;
unsigned int var_14 = 1297326671U;
unsigned int var_15 = 2815395898U;
int zero = 0;
signed char var_16 = (signed char)-72;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)51166;
unsigned long long int var_19 = 15944195608676626449ULL;
unsigned short var_20 = (unsigned short)46619;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(signed char var_7, unsigned long long int var_9, unsigned long long int var_11, unsigned int var_14, unsigned int var_15, int zero);

int main() {
    init();
    test(var_7, var_9, var_11, var_14, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
