#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned long long int var_1 = 9243924973366866206ULL;
int var_2 = 558247219;
_Bool var_3 = (_Bool)0;
long long int var_5 = -7337196074077120604LL;
short var_6 = (short)-5716;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int var_9 = -1128140728;
short var_10 = (short)32562;
unsigned char var_11 = (unsigned char)42;
unsigned long long int var_12 = 6412323792177822270ULL;
int zero = 0;
short var_13 = (short)16504;
short var_14 = (short)-29566;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(signed char var_0, unsigned long long int var_1, int var_2, _Bool var_3, long long int var_5, short var_6, _Bool var_7, _Bool var_8, int var_9, short var_10, unsigned char var_11, unsigned long long int var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
