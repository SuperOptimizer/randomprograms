#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 880630525768030082ULL;
signed char var_2 = (signed char)-5;
unsigned char var_3 = (unsigned char)109;
unsigned int var_4 = 408341856U;
unsigned int var_6 = 3352291004U;
unsigned char var_8 = (unsigned char)250;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 4085066703U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-23228;
long long int var_13 = -7537221998802048261LL;
signed char var_14 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(unsigned long long int var_1, signed char var_2, unsigned char var_3, unsigned int var_4, unsigned int var_6, unsigned char var_8, _Bool var_9, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_6, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
