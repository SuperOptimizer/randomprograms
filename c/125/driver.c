#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)66;
unsigned int var_4 = 4186561435U;
unsigned long long int var_8 = 2222615359443229934ULL;
int var_13 = -1336253258;
unsigned long long int var_15 = 2431352784301692882ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16862708393681209921ULL;
unsigned long long int var_20 = 14048650136636632413ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned char var_1, unsigned int var_4, unsigned long long int var_8, int var_13, unsigned long long int var_15, int zero);

int main() {
    init();
    test(var_1, var_4, var_8, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
