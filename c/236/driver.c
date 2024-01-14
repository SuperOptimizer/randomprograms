#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12206;
unsigned short var_1 = (unsigned short)6630;
unsigned char var_3 = (unsigned char)114;
int var_4 = 1392344937;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)196;
short var_8 = (short)14852;
unsigned int var_9 = 1520727011U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)67;
int var_13 = 1099702277;
short var_14 = (short)-32507;
unsigned long long int var_15 = 6794161539251686882ULL;
signed char var_16 = (signed char)36;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8882043906703093886LL;
unsigned char var_19 = (unsigned char)223;
unsigned char var_20 = (unsigned char)177;
short var_21 = (short)-30724;
unsigned long long int var_22 = 12141797830826159703ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned short var_0, unsigned short var_1, unsigned char var_3, int var_4, _Bool var_6, unsigned char var_7, short var_8, unsigned int var_9, _Bool var_11, signed char var_12, int var_13, short var_14, unsigned long long int var_15, signed char var_16, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
