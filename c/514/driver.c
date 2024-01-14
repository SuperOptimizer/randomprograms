#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -864234350;
int var_2 = 95447607;
unsigned short var_3 = (unsigned short)31060;
unsigned char var_4 = (unsigned char)248;
int var_7 = -1058360675;
int var_8 = -1286910084;
unsigned char var_9 = (unsigned char)189;
short var_10 = (short)-16878;
unsigned char var_12 = (unsigned char)174;
int zero = 0;
int var_13 = 537620049;
short var_14 = (short)-15230;
long long int var_15 = 134205771300172311LL;
long long int var_16 = 528658728963005159LL;
int var_17 = 1335547901;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(int var_0, int var_2, unsigned short var_3, unsigned char var_4, int var_7, int var_8, unsigned char var_9, short var_10, unsigned char var_12, int zero);

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_7, var_8, var_9, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
