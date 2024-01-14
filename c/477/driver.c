#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1106541074U;
int var_1 = 1412004267;
signed char var_2 = (signed char)-46;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 321352788U;
unsigned char var_5 = (unsigned char)110;
short var_6 = (short)9242;
long long int var_7 = -230336116649016205LL;
unsigned long long int var_8 = 7585251938404100340ULL;
unsigned char var_9 = (unsigned char)143;
unsigned short var_10 = (unsigned short)29049;
unsigned char var_11 = (unsigned char)251;
unsigned char var_12 = (unsigned char)39;
int zero = 0;
unsigned long long int var_13 = 10372533731018105767ULL;
short var_14 = (short)16153;
unsigned int var_15 = 923934527U;
long long int var_16 = 5756217107116800513LL;
signed char var_17 = (signed char)83;
unsigned long long int var_18 = 12275581954622104298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_0, int var_1, signed char var_2, _Bool var_3, unsigned int var_4, unsigned char var_5, short var_6, long long int var_7, unsigned long long int var_8, unsigned char var_9, unsigned short var_10, unsigned char var_11, unsigned char var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
