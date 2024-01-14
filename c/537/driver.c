#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-7967;
unsigned long long int var_9 = 12797370878738125169ULL;
short var_10 = (short)22480;
int zero = 0;
unsigned short var_11 = (unsigned short)1193;
short var_12 = (short)-32675;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test(short var_8, unsigned long long int var_9, short var_10, int zero);

int main() {
    init();
    test(var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
