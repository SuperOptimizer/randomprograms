#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26526;
unsigned long long int var_1 = 6311938743195689827ULL;
_Bool var_2 = (_Bool)1;
int var_3 = 1238165382;
unsigned char var_4 = (unsigned char)100;
unsigned short var_5 = (unsigned short)38173;
unsigned char var_6 = (unsigned char)196;
unsigned short var_7 = (unsigned short)19108;
unsigned char var_8 = (unsigned char)232;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 1228309322;
signed char var_13 = (signed char)106;
unsigned char var_14 = (unsigned char)20;
unsigned char var_15 = (unsigned char)174;
unsigned long long int var_16 = 7903061553000797809ULL;
int var_17 = 714386894;
signed char var_18 = (signed char)82;
unsigned short var_19 = (unsigned short)36421;
signed char var_20 = (signed char)-25;
unsigned short var_21 = (unsigned short)26011;
unsigned char var_22 = (unsigned char)104;
unsigned long long int var_23 = 9843383617116270083ULL;
unsigned int var_24 = 59157277U;
long long int var_25 = -5820689018871190233LL;
int var_26 = -303039200;
_Bool arr_0 [11] ;
unsigned long long int arr_1 [11] ;
_Bool arr_4 [11] ;
short arr_5 [11] ;
int arr_6 [11] ;
short arr_7 [25] ;
short arr_8 [25] ;
int arr_10 [15] ;
signed char arr_12 [15] ;
int arr_14 [15] [15] [15] ;
unsigned short arr_18 [15] [15] ;
_Bool arr_2 [11] ;
signed char arr_3 [11] [11] ;
unsigned int arr_9 [25] ;
short arr_21 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3445353144107277047ULL : 14504638521745899105ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)-4267;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 224968750;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)-29022;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)20954;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -1480520510;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -1590972601;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)6777;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)90 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 907571695U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (short)21038;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test(short var_0, unsigned long long int var_1, _Bool var_2, int var_3, unsigned char var_4, unsigned short var_5, unsigned char var_6, unsigned short var_7, unsigned char var_8, _Bool var_9, int zero, _Bool arr_0 [11] , unsigned long long int arr_1 [11] , _Bool arr_4 [11] , short arr_5 [11] , int arr_6 [11] , short arr_7 [25] , short arr_8 [25] , int arr_10 [15] , signed char arr_12 [15] , int arr_14 [15] [15] [15] , unsigned short arr_18 [15] [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_0 , arr_1 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_10 , arr_12 , arr_14 , arr_18 );
    checksum();
    printf("%llu\n", seed);
}
