#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35388;
unsigned short var_3 = (unsigned short)34365;
signed char var_4 = (signed char)37;
long long int var_5 = -3409943385975731849LL;
long long int var_7 = -7852623002028029699LL;
unsigned long long int var_10 = 656610681439973922ULL;
signed char var_12 = (signed char)-28;
unsigned long long int var_13 = 8671984359714520832ULL;
unsigned short var_14 = (unsigned short)50988;
unsigned long long int var_16 = 17298380570097279278ULL;
int zero = 0;
long long int var_17 = 5791447133623194265LL;
signed char var_18 = (signed char)19;
unsigned long long int var_19 = 8393988408781354046ULL;
unsigned long long int var_20 = 15511048768719557787ULL;
short var_21 = (short)30574;
int arr_7 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 375726102;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned short var_1, unsigned short var_3, signed char var_4, long long int var_5, long long int var_7, unsigned long long int var_10, signed char var_12, unsigned long long int var_13, unsigned short var_14, unsigned long long int var_16, int zero, int arr_7 [11] [11] [11] );

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_7, var_10, var_12, var_13, var_14, var_16, zero, arr_7 );
    checksum();
    printf("%llu\n", seed);
}
