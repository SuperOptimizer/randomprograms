#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3802247887723460679LL;
short var_3 = (short)2308;
unsigned int var_6 = 902416356U;
unsigned char var_8 = (unsigned char)42;
unsigned short var_9 = (unsigned short)63667;
long long int var_11 = -5670801584410553769LL;
int var_12 = 1191482312;
unsigned int var_15 = 2646772313U;
signed char var_19 = (signed char)-121;
int zero = 0;
unsigned short var_20 = (unsigned short)46140;
unsigned char var_21 = (unsigned char)3;
short var_22 = (short)24722;
unsigned char var_23 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(long long int var_2, short var_3, unsigned int var_6, unsigned char var_8, unsigned short var_9, long long int var_11, int var_12, unsigned int var_15, signed char var_19, int zero);

int main() {
    init();
    test(var_2, var_3, var_6, var_8, var_9, var_11, var_12, var_15, var_19, zero);
    checksum();
    printf("%llu\n", seed);
}
