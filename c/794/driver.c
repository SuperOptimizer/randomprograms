#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2408075174U;
int var_3 = -2147014867;
unsigned long long int var_6 = 17725360667638201124ULL;
int var_7 = -562874547;
signed char var_9 = (signed char)-24;
unsigned short var_13 = (unsigned short)18490;
signed char var_19 = (signed char)-107;
int zero = 0;
unsigned long long int var_20 = 17941652428654779183ULL;
signed char var_21 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned int var_2, int var_3, unsigned long long int var_6, int var_7, signed char var_9, unsigned short var_13, signed char var_19, int zero);

int main() {
    init();
    test(var_2, var_3, var_6, var_7, var_9, var_13, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
