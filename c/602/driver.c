#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned int var_3 = 2097367666U;
signed char var_4 = (signed char)-81;
short var_5 = (short)20309;
unsigned int var_7 = 717010570U;
short var_9 = (short)30581;
unsigned int var_11 = 1671968905U;
short var_14 = (short)-20783;
int zero = 0;
signed char var_15 = (signed char)-98;
unsigned char var_16 = (unsigned char)235;
signed char var_17 = (signed char)110;
unsigned short var_18 = (unsigned short)13149;
unsigned char var_19 = (unsigned char)150;
unsigned int var_20 = 1559214616U;
unsigned long long int var_21 = 54602709785032724ULL;
unsigned short arr_0 [11] ;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)64960;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)29858;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned char var_0, unsigned int var_3, signed char var_4, short var_5, unsigned int var_7, short var_9, unsigned int var_11, short var_14, int zero, unsigned short arr_0 [11] , short arr_2 [11] );

int main() {
    init();
    test(var_0, var_3, var_4, var_5, var_7, var_9, var_11, var_14, zero, arr_0 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
