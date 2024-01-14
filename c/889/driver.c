#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 6434433202234945720ULL;
short var_2 = (short)10456;
unsigned short var_5 = (unsigned short)16586;
int var_7 = 1570907758;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 10571152478818955775ULL;
unsigned short var_13 = (unsigned short)4277;
int zero = 0;
int var_18 = -547674937;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-4621;
unsigned long long int var_21 = 4971881283579834657ULL;
unsigned short var_22 = (unsigned short)6289;
unsigned int var_23 = 2399295326U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(_Bool var_0, unsigned long long int var_1, short var_2, unsigned short var_5, int var_7, _Bool var_10, unsigned long long int var_12, unsigned short var_13, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_7, var_10, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
