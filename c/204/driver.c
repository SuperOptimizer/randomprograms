#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5092531764038655613LL;
unsigned long long int var_4 = 8295030284520425379ULL;
unsigned int var_6 = 3810092226U;
unsigned char var_8 = (unsigned char)225;
unsigned long long int var_11 = 6436200826709159880ULL;
unsigned short var_14 = (unsigned short)44042;
int zero = 0;
unsigned int var_15 = 813197249U;
unsigned long long int var_16 = 6191178088545104745ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(long long int var_1, unsigned long long int var_4, unsigned int var_6, unsigned char var_8, unsigned long long int var_11, unsigned short var_14, int zero);

int main() {
    init();
    test(var_1, var_4, var_6, var_8, var_11, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
