#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6002131625725830697LL;
int var_2 = 922683973;
unsigned char var_3 = (unsigned char)41;
long long int var_4 = 9140586154834618668LL;
long long int var_5 = -5628237948020515797LL;
unsigned char var_7 = (unsigned char)69;
signed char var_8 = (signed char)-18;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2722883109U;
int var_12 = -1640338980;
short var_13 = (short)2986;
unsigned short var_14 = (unsigned short)62711;
unsigned char var_15 = (unsigned char)253;
unsigned int var_16 = 4201837022U;
int zero = 0;
signed char var_17 = (signed char)-124;
int var_18 = -90047285;
unsigned short var_19 = (unsigned short)54565;
unsigned char var_20 = (unsigned char)108;
long long int var_21 = 7413473906396836479LL;
unsigned char var_22 = (unsigned char)215;
unsigned char var_23 = (unsigned char)244;
unsigned long long int var_24 = 15699107754344067274ULL;
int var_25 = -1454114052;
unsigned char var_26 = (unsigned char)233;
unsigned long long int var_27 = 13190688949455393319ULL;
unsigned short arr_3 [15] ;
unsigned short arr_2 [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9458 : (unsigned short)7044;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)10211;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-33 : (signed char)-70;
}

void checksum() {
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(long long int var_0, int var_2, unsigned char var_3, long long int var_4, long long int var_5, unsigned char var_7, signed char var_8, _Bool var_10, unsigned int var_11, int var_12, short var_13, unsigned short var_14, unsigned char var_15, unsigned int var_16, int zero, unsigned short arr_3 [15] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, arr_3 );
    checksum();
    printf("%llu\n", seed);
}
