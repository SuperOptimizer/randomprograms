#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
unsigned long long int var_1 = 3457810523605622051ULL;
long long int var_2 = 7044398269331139016LL;
int var_3 = 1206853178;
short var_4 = (short)-24683;
int var_5 = 2023200744;
unsigned short var_9 = (unsigned short)33903;
int zero = 0;
unsigned long long int var_10 = 11239464013465617064ULL;
unsigned long long int var_11 = 13305118409046835779ULL;
unsigned long long int var_12 = 17622266505941439055ULL;
long long int var_13 = -6616150864993840913LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned char var_0, unsigned long long int var_1, long long int var_2, int var_3, short var_4, int var_5, unsigned short var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
