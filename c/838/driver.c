#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31257;
_Bool var_1 = (_Bool)0;
short var_3 = (short)27708;
unsigned char var_4 = (unsigned char)17;
short var_5 = (short)-25863;
unsigned long long int var_6 = 3320912941643587566ULL;
unsigned short var_7 = (unsigned short)43753;
_Bool var_8 = (_Bool)0;
short var_9 = (short)5010;
short var_10 = (short)-22520;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1229263204470536617LL;
short var_13 = (short)8430;
unsigned long long int var_14 = 15236863129846853569ULL;
unsigned int var_15 = 55656981U;
int zero = 0;
unsigned char var_17 = (unsigned char)11;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)175;
int var_20 = -1144017562;
long long int var_21 = 4924853832093762345LL;
unsigned int var_22 = 522768165U;
int var_23 = -1661407151;
signed char var_24 = (signed char)-45;
unsigned long long int var_25 = 1484356546690866912ULL;
unsigned int var_26 = 208006445U;
signed char var_27 = (signed char)-46;
_Bool arr_0 [19] [19] ;
short arr_1 [19] [19] ;
int arr_2 [19] ;
signed char arr_3 [19] [19] ;
unsigned short arr_4 [19] [19] ;
unsigned int arr_5 [19] ;
long long int arr_6 [19] ;
int arr_8 [19] [19] [19] [19] ;
unsigned long long int arr_9 [19] ;
unsigned int arr_10 [19] ;
short arr_11 [19] [19] ;
unsigned short arr_17 [25] ;
_Bool arr_18 [25] ;
_Bool arr_12 [19] [19] [19] [19] ;
int arr_13 [19] [19] [19] [19] ;
unsigned char arr_16 [18] ;
unsigned long long int arr_19 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)13364;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -2111479224;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)38886;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1607786763U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -840545771119764478LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -733114449;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 5786182542186038898ULL : 13113888700864181975ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 3234573129U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-17920;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (unsigned short)58657;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1831867905 : -1869214653;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 3437600189249686371ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test(short var_0, _Bool var_1, short var_3, unsigned char var_4, short var_5, unsigned long long int var_6, unsigned short var_7, _Bool var_8, short var_9, short var_10, _Bool var_11, long long int var_12, short var_13, unsigned long long int var_14, unsigned int var_15, int zero, _Bool arr_0 [19] [19] , short arr_1 [19] [19] , int arr_2 [19] , signed char arr_3 [19] [19] , unsigned short arr_4 [19] [19] , unsigned int arr_5 [19] , long long int arr_6 [19] , int arr_8 [19] [19] [19] [19] , unsigned long long int arr_9 [19] , unsigned int arr_10 [19] , short arr_11 [19] [19] , unsigned short arr_17 [25] , _Bool arr_18 [25] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_8 , arr_9 , arr_10 , arr_11 , arr_17 , arr_18 );
    checksum();
    printf("%llu\n", seed);
}
