#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3161995700096638249LL;
long long int var_4 = 4698438881643658481LL;
unsigned long long int var_7 = 6285276551878853215ULL;
unsigned long long int var_9 = 11896312439331065883ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)49067;
long long int var_11 = -1573725347226787771LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(long long int var_0, long long int var_4, unsigned long long int var_7, unsigned long long int var_9, int zero);

int main() {
    init();
    test(var_0, var_4, var_7, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
