#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9059437729438227914LL;
unsigned short var_7 = (unsigned short)19247;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)-123;
unsigned int var_13 = 1919626744U;
unsigned short var_15 = (unsigned short)60585;
long long int var_16 = 2932209372712739770LL;
int zero = 0;
long long int var_17 = 5071488644628866156LL;
short var_18 = (short)-25398;
unsigned short var_19 = (unsigned short)47947;
short var_20 = (short)-15650;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(long long int var_2, unsigned short var_7, _Bool var_8, signed char var_11, unsigned int var_13, unsigned short var_15, long long int var_16, int zero);

int main() {
    init();
    test(var_2, var_7, var_8, var_11, var_13, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
