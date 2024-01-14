#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13248268712129797786ULL;
unsigned int var_1 = 1240615765U;
unsigned char var_2 = (unsigned char)134;
long long int var_3 = 8957956394797708441LL;
signed char var_4 = (signed char)-1;
unsigned long long int var_5 = 3010597942890321664ULL;
short var_6 = (short)-25861;
short var_7 = (short)7088;
short var_8 = (short)854;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 5524280389391627124ULL;
signed char var_11 = (signed char)-45;
unsigned char var_12 = (unsigned char)203;
long long int var_13 = -784796944593085149LL;
short var_14 = (short)18779;
int zero = 0;
unsigned int var_15 = 2808235806U;
unsigned short var_16 = (unsigned short)22932;
unsigned char var_17 = (unsigned char)79;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-5108;
short var_20 = (short)224;
signed char var_21 = (signed char)-55;
unsigned char var_22 = (unsigned char)133;
unsigned short var_23 = (unsigned short)43173;
unsigned short var_24 = (unsigned short)40914;
unsigned char var_25 = (unsigned char)248;
unsigned char var_26 = (unsigned char)28;
unsigned long long int var_27 = 15464947069441933805ULL;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)68;
unsigned char var_31 = (unsigned char)151;
int var_32 = 1310854263;
_Bool var_33 = (_Bool)1;
unsigned char var_34 = (unsigned char)86;
unsigned short var_35 = (unsigned short)26624;
int var_36 = 43642641;
_Bool var_37 = (_Bool)1;
long long int var_38 = 1028866977780046586LL;
signed char arr_0 [20] [20] ;
signed char arr_1 [20] ;
_Bool arr_2 [20] [20] ;
unsigned int arr_3 [20] ;
int arr_6 [20] [20] [20] ;
unsigned long long int arr_7 [12] [12] ;
_Bool arr_8 [12] [12] ;
short arr_11 [12] ;
unsigned char arr_9 [12] [12] ;
long long int arr_17 [12] [12] [12] ;
signed char arr_18 [12] [12] ;
unsigned char arr_19 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1882733418U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 314109131;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 3286139471453553505ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (short)8858;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8674534185510827203LL : -533652931490457104LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned char)41;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test(unsigned long long int var_0, unsigned int var_1, unsigned char var_2, long long int var_3, signed char var_4, unsigned long long int var_5, short var_6, short var_7, short var_8, _Bool var_9, unsigned long long int var_10, signed char var_11, unsigned char var_12, long long int var_13, short var_14, int zero, signed char arr_0 [20] [20] , signed char arr_1 [20] , _Bool arr_2 [20] [20] , unsigned int arr_3 [20] , int arr_6 [20] [20] [20] , unsigned long long int arr_7 [12] [12] , _Bool arr_8 [12] [12] , short arr_11 [12] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_6 , arr_7 , arr_8 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
