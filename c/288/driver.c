#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -318175959364119834LL;
unsigned long long int var_4 = 8577516985990220396ULL;
unsigned int var_5 = 370162993U;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)37012;
int var_11 = -1536380898;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(long long int var_1, unsigned long long int var_4, unsigned int var_5, _Bool var_6, _Bool var_8, int zero);

int main() {
    init();
    test(var_1, var_4, var_5, var_6, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
