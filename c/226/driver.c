#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
unsigned long long int var_1 = 6373857933854296359ULL;
signed char var_3 = (signed char)-101;
signed char var_4 = (signed char)-37;
unsigned long long int var_5 = 3988505673882780309ULL;
signed char var_7 = (signed char)37;
unsigned long long int var_8 = 10352518408712888010ULL;
signed char var_9 = (signed char)-109;
signed char var_10 = (signed char)7;
unsigned long long int var_11 = 1899430768826383203ULL;
signed char var_12 = (signed char)-45;
signed char var_13 = (signed char)-76;
signed char var_14 = (signed char)-124;
signed char var_15 = (signed char)-3;
signed char var_17 = (signed char)-85;
int zero = 0;
signed char var_18 = (signed char)85;
unsigned long long int var_19 = 12883267028227302290ULL;
signed char var_20 = (signed char)-31;
unsigned long long int var_21 = 1074883303051001091ULL;
signed char var_22 = (signed char)70;
unsigned long long int var_23 = 11443557254065506907ULL;
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
void test(signed char var_0, unsigned long long int var_1, signed char var_3, signed char var_4, unsigned long long int var_5, signed char var_7, unsigned long long int var_8, signed char var_9, signed char var_10, unsigned long long int var_11, signed char var_12, signed char var_13, signed char var_14, signed char var_15, signed char var_17, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
