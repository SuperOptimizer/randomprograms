#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8951153604650651761ULL;
unsigned int var_2 = 1111080963U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = -547380055;
long long int var_6 = -2777806330184943651LL;
unsigned short var_7 = (unsigned short)35297;
unsigned short var_8 = (unsigned short)14942;
unsigned short var_9 = (unsigned short)35618;
long long int var_10 = 2760754160019793929LL;
short var_11 = (short)-2325;
unsigned char var_12 = (unsigned char)5;
short var_13 = (short)25562;
int zero = 0;
unsigned short var_14 = (unsigned short)42244;
short var_15 = (short)1244;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-4289;
short var_18 = (short)-14458;
long long int var_19 = 8396039929235467174LL;
int var_20 = 26931385;
short var_21 = (short)5418;
unsigned char var_22 = (unsigned char)201;
unsigned short var_23 = (unsigned short)52406;
long long int var_24 = 7536618565572706163LL;
signed char var_25 = (signed char)36;
long long int var_26 = -4585398994661739407LL;
unsigned short var_27 = (unsigned short)46837;
unsigned short var_28 = (unsigned short)38935;
short var_29 = (short)-20379;
unsigned long long int var_30 = 12618695088046498401ULL;
signed char var_31 = (signed char)5;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)58170;
int var_35 = 689245372;
unsigned int var_36 = 4040626469U;
short var_37 = (short)-1286;
unsigned int arr_0 [15] ;
short arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
short arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1298922035U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-13098;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)32148;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test(unsigned long long int var_1, unsigned int var_2, _Bool var_3, _Bool var_4, int var_5, long long int var_6, unsigned short var_7, unsigned short var_8, unsigned short var_9, long long int var_10, short var_11, unsigned char var_12, short var_13, int zero, unsigned int arr_0 [15] , short arr_1 [15] [15] , unsigned char arr_2 [15] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, arr_0 , arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
