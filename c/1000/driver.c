#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7390136072168918088LL;
long long int var_3 = -4226028740205427965LL;
long long int var_4 = -4038876055165089351LL;
short var_5 = (short)25811;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 3244815695563850296ULL;
unsigned char var_10 = (unsigned char)13;
unsigned int var_11 = 4149277577U;
unsigned int var_12 = 246600888U;
unsigned short var_13 = (unsigned short)43320;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)196;
unsigned short var_16 = (unsigned short)5033;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)47;
unsigned short var_19 = (unsigned short)1472;
int zero = 0;
unsigned char var_20 = (unsigned char)163;
signed char var_21 = (signed char)30;
unsigned char var_22 = (unsigned char)5;
long long int var_23 = 4742278389212380338LL;
signed char var_24 = (signed char)46;
_Bool arr_0 [15] [15] ;
short arr_1 [15] [15] ;
unsigned int arr_4 [15] [15] ;
unsigned char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-2037;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 2561755045U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)17;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(long long int var_1, long long int var_3, long long int var_4, short var_5, _Bool var_7, unsigned long long int var_9, unsigned char var_10, unsigned int var_11, unsigned int var_12, unsigned short var_13, _Bool var_14, unsigned char var_15, unsigned short var_16, _Bool var_17, unsigned char var_18, unsigned short var_19, int zero, _Bool arr_0 [15] [15] , short arr_1 [15] [15] );

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_7, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, var_19, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
