#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1930171481980477115LL;
unsigned long long int var_17 = 15877488673930972522ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)30;
long long int var_20 = 3159639487144924414LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(long long int var_1, unsigned long long int var_17, int zero);

int main() {
    init();
    test(var_1, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
