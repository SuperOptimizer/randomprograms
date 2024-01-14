#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
long long int var_1 = 4772079727744987117LL;
int var_3 = 701470039;
signed char var_4 = (signed char)103;
int var_5 = 111919102;
int var_6 = -441487820;
int var_7 = -199780156;
int var_9 = 1311029613;
int zero = 0;
int var_10 = -282970292;
unsigned int var_11 = 3039026127U;
int var_12 = -1919644934;
unsigned int var_13 = 2817990615U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(signed char var_0, long long int var_1, int var_3, signed char var_4, int var_5, int var_6, int var_7, int var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
