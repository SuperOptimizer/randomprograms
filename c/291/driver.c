#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23084;
unsigned long long int var_4 = 13318392156339701411ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)21636;
int var_8 = 271368685;
unsigned short var_9 = (unsigned short)48308;
int var_11 = -188854732;
signed char var_12 = (signed char)-111;
unsigned short var_13 = (unsigned short)8267;
int zero = 0;
unsigned short var_15 = (unsigned short)63720;
unsigned short var_16 = (unsigned short)4748;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_3, unsigned long long int var_4, _Bool var_5, unsigned short var_6, int var_8, unsigned short var_9, int var_11, signed char var_12, unsigned short var_13, int zero);

int main() {
    init();
    test(var_3, var_4, var_5, var_6, var_8, var_9, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
