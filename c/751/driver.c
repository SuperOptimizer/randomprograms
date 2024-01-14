#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1198869987;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 4265397327037464127ULL;
long long int var_4 = 7932221662703925829LL;
unsigned short var_5 = (unsigned short)5451;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 226368041U;
unsigned int var_10 = 1019894949U;
unsigned char var_12 = (unsigned char)99;
unsigned short var_13 = (unsigned short)49539;
short var_14 = (short)31101;
long long int var_15 = 738821511708172091LL;
unsigned char var_16 = (unsigned char)167;
signed char var_17 = (signed char)32;
int var_18 = -7218466;
unsigned short var_19 = (unsigned short)20049;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
long long int var_22 = 2855911576214795073LL;
int var_23 = -1094453001;
unsigned int var_24 = 307912861U;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)13877;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test(int var_0, _Bool var_1, unsigned long long int var_2, long long int var_4, unsigned short var_5, _Bool var_6, unsigned int var_9, unsigned int var_10, unsigned char var_12, unsigned short var_13, short var_14, long long int var_15, unsigned char var_16, signed char var_17, int var_18, unsigned short var_19, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_6, var_9, var_10, var_12, var_13, var_14, var_15, var_16, var_17, var_18, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
