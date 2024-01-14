#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11620859818555864227ULL;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-12;
long long int var_5 = 8669041715428579531LL;
unsigned char var_6 = (unsigned char)98;
short var_11 = (short)-2130;
unsigned short var_12 = (unsigned short)19413;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6259507644412133314ULL;
int zero = 0;
unsigned int var_19 = 3481463644U;
unsigned long long int var_20 = 12468104302558183204ULL;
int var_21 = 87904439;
int var_22 = -1091620285;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned long long int var_0, _Bool var_2, signed char var_4, long long int var_5, unsigned char var_6, short var_11, unsigned short var_12, _Bool var_13, unsigned long long int var_14, int zero);

int main() {
    init();
    test(var_0, var_2, var_4, var_5, var_6, var_11, var_12, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
