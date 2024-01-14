#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10622;
long long int var_1 = 2126950698312639184LL;
unsigned int var_2 = 2750866255U;
long long int var_4 = -38131945484039625LL;
int var_5 = -1945541090;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-14633;
long long int var_8 = -6465720474309701390LL;
unsigned char var_9 = (unsigned char)54;
unsigned char var_10 = (unsigned char)2;
signed char var_11 = (signed char)12;
short var_12 = (short)7001;
int var_13 = -1007821173;
long long int var_18 = -2024937800989813898LL;
int zero = 0;
unsigned char var_19 = (unsigned char)163;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)67;
unsigned char var_22 = (unsigned char)123;
long long int arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
short arr_2 [20] ;
unsigned long long int arr_5 [20] [20] ;
short arr_6 [20] [20] [20] ;
unsigned long long int arr_7 [20] ;
_Bool arr_8 [20] [20] [20] ;
long long int arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -5210068778676746889LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1501065697U : 1042671937U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-32696;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 3174581187268381928ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-23889;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 4135418972223294799ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 6683592527734788994LL : 3994867064056208325LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test(short var_0, long long int var_1, unsigned int var_2, long long int var_4, int var_5, _Bool var_6, short var_7, long long int var_8, unsigned char var_9, unsigned char var_10, signed char var_11, short var_12, int var_13, long long int var_18, int zero, long long int arr_0 [20] [20] , unsigned int arr_1 [20] , short arr_2 [20] , unsigned long long int arr_5 [20] [20] , short arr_6 [20] [20] [20] , unsigned long long int arr_7 [20] );

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_18, zero, arr_0 , arr_1 , arr_2 , arr_5 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
