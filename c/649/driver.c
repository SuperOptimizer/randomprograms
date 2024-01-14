#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3250373970162065528LL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3770506869U;
long long int var_5 = 5334625170999329752LL;
long long int var_6 = 3559364350657921678LL;
int var_9 = -1574958754;
unsigned int var_10 = 550232520U;
int var_11 = -2659616;
long long int var_12 = 8393369150668861465LL;
long long int var_13 = 6416130838673500891LL;
int zero = 0;
long long int var_18 = -8199408526255840593LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(long long int var_0, _Bool var_1, unsigned int var_2, long long int var_5, long long int var_6, int var_9, unsigned int var_10, int var_11, long long int var_12, long long int var_13, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_6, var_9, var_10, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
