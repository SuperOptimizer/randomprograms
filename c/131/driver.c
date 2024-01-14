#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)208;
signed char var_4 = (signed char)-57;
unsigned char var_6 = (unsigned char)210;
long long int var_7 = -6443695211255052485LL;
int zero = 0;
unsigned int var_17 = 206254854U;
long long int var_18 = -1889206113208403076LL;
unsigned long long int var_19 = 17280240386582850468ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned char var_3, signed char var_4, unsigned char var_6, long long int var_7, int zero);

int main() {
    init();
    test(var_3, var_4, var_6, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
