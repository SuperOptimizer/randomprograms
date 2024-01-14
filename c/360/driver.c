#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned long long int var_4 = 16219828918778564249ULL;
long long int var_6 = 7114028608437454404LL;
signed char var_10 = (signed char)-114;
int zero = 0;
unsigned char var_13 = (unsigned char)81;
unsigned long long int var_14 = 701888327698105782ULL;
int var_15 = 1827977108;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(signed char var_0, unsigned long long int var_4, long long int var_6, signed char var_10, int zero);

int main() {
    init();
    test(var_0, var_4, var_6, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
