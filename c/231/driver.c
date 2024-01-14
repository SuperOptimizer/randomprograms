#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned long long int var_1 = 13803372605735446268ULL;
short var_3 = (short)14685;
unsigned long long int var_4 = 15201521556498581957ULL;
unsigned long long int var_5 = 16850534003999794664ULL;
int var_7 = 56639098;
unsigned long long int var_8 = 5803746557896217448ULL;
short var_10 = (short)23582;
int var_11 = 350515956;
unsigned int var_12 = 3732971972U;
long long int var_13 = -4894699979588146324LL;
unsigned short var_14 = (unsigned short)56754;
int var_15 = -1400579005;
unsigned short var_16 = (unsigned short)37606;
int var_17 = -887938969;
int zero = 0;
unsigned short var_18 = (unsigned short)56358;
unsigned long long int var_19 = 10614421379859630317ULL;
unsigned int var_20 = 247561883U;
int var_21 = -320774204;
unsigned int var_22 = 1567624964U;
signed char var_23 = (signed char)-38;
unsigned long long int var_24 = 3833621660857902424ULL;
long long int var_25 = 4837714467852792260LL;
unsigned long long int var_26 = 9489568098790598254ULL;
int var_27 = -1137945247;
unsigned long long int var_28 = 5762996378739316137ULL;
short var_29 = (short)2423;
short var_30 = (short)-6889;
unsigned long long int var_31 = 16646970271537518249ULL;
signed char var_32 = (signed char)-107;
unsigned short var_33 = (unsigned short)20461;
short var_34 = (short)-19663;
unsigned long long int var_35 = 12080767842679693516ULL;
short var_36 = (short)-6174;
_Bool var_37 = (_Bool)0;
signed char var_38 = (signed char)-108;
long long int var_39 = 5024053037960622182LL;
long long int var_40 = -7182357977516772668LL;
unsigned int var_41 = 1533091925U;
int var_42 = 79939106;
short arr_0 [13] [13] ;
int arr_1 [13] ;
short arr_2 [20] ;
unsigned short arr_3 [20] [20] ;
long long int arr_4 [20] ;
unsigned long long int arr_5 [20] [20] ;
long long int arr_7 [20] ;
unsigned int arr_8 [20] ;
unsigned long long int arr_10 [20] [20] [20] ;
short arr_11 [20] ;
unsigned short arr_13 [20] ;
unsigned short arr_15 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31877;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1431300403;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-14057 : (short)-32694;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)14722 : (unsigned short)53998;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -4889548665326159089LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 9626002908218299843ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -2961229442127856658LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 3944899735U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12344800163422590588ULL : 10000353158247057340ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)8085;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (unsigned short)50925;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)39671 : (unsigned short)28158;
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test(signed char var_0, unsigned long long int var_1, short var_3, unsigned long long int var_4, unsigned long long int var_5, int var_7, unsigned long long int var_8, short var_10, int var_11, unsigned int var_12, long long int var_13, unsigned short var_14, int var_15, unsigned short var_16, int var_17, int zero, short arr_0 [13] [13] , int arr_1 [13] , short arr_2 [20] , unsigned short arr_3 [20] [20] , long long int arr_4 [20] , unsigned long long int arr_5 [20] [20] , long long int arr_7 [20] , unsigned int arr_8 [20] , unsigned long long int arr_10 [20] [20] [20] , short arr_11 [20] , unsigned short arr_13 [20] , unsigned short arr_15 [20] [20] [20] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_7 , arr_8 , arr_10 , arr_11 , arr_13 , arr_15 );
    checksum();
    printf("%llu\n", seed);
}
