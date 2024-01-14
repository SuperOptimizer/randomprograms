#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
unsigned short var_2 = (unsigned short)60319;
unsigned int var_4 = 349061423U;
long long int var_5 = 1473972041677153960LL;
unsigned short var_7 = (unsigned short)14393;
unsigned char var_9 = (unsigned char)49;
long long int var_10 = 8186665535273232776LL;
int zero = 0;
signed char var_12 = (signed char)-75;
short var_13 = (short)19717;
unsigned char var_14 = (unsigned char)77;
signed char var_15 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(signed char var_1, unsigned short var_2, unsigned int var_4, long long int var_5, unsigned short var_7, unsigned char var_9, long long int var_10, int zero);

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_7, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
