#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 231968469119167456ULL;
int var_3 = -877837651;
unsigned long long int var_4 = 15274649896796111635ULL;
long long int var_5 = 5513546847728868359LL;
unsigned char var_6 = (unsigned char)107;
unsigned long long int var_7 = 13398262815857422945ULL;
int var_10 = 1158262435;
unsigned int var_11 = 368475813U;
unsigned char var_12 = (unsigned char)133;
long long int var_13 = -3225792244285557030LL;
short var_14 = (short)20409;
int zero = 0;
long long int var_15 = 8548309840184317786LL;
int var_16 = -1551312761;
signed char var_17 = (signed char)5;
long long int var_18 = -453950446666045677LL;
unsigned long long int var_19 = 12383185919433178033ULL;
int var_20 = -96521682;
short var_21 = (short)-10224;
int var_22 = 127032101;
short var_23 = (short)12937;
unsigned short var_24 = (unsigned short)42583;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)157;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 240554684U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test(unsigned long long int var_1, int var_3, unsigned long long int var_4, long long int var_5, unsigned char var_6, unsigned long long int var_7, int var_10, unsigned int var_11, unsigned char var_12, long long int var_13, short var_14, int zero, unsigned int arr_2 [19] );

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_6, var_7, var_10, var_11, var_12, var_13, var_14, zero, arr_2 );
    checksum();
    printf("%llu\n", seed);
}
