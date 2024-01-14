#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1945460721;
short var_1 = (short)-13767;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-3047;
short var_4 = (short)8442;
short var_5 = (short)-22217;
unsigned int var_6 = 2065207918U;
long long int var_7 = 6057099569391963291LL;
long long int var_8 = 7610666816727114676LL;
int var_9 = -1952491404;
int zero = 0;
short var_10 = (short)27083;
short var_11 = (short)-12801;
unsigned int var_12 = 3587284977U;
long long int var_13 = -9044864625498803449LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-12912;
long long int var_16 = -8641703369055231287LL;
unsigned char var_17 = (unsigned char)200;
short var_18 = (short)-17327;
long long int arr_1 [25] [25] ;
long long int arr_3 [25] [25] ;
int arr_6 [23] [23] ;
long long int arr_8 [23] [23] ;
signed char arr_9 [23] ;
short arr_10 [23] ;
signed char arr_2 [25] ;
short arr_5 [25] ;
_Bool arr_13 [23] [23] [23] ;
unsigned char arr_14 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 3719965652223844295LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 6467766375643560694LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1272048509 : 1119859740;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -7599782435403714548LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)14914 : (short)7511;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-26459 : (short)-28674;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)214 : (unsigned char)161;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test(int var_0, short var_1, _Bool var_2, short var_3, short var_4, short var_5, unsigned int var_6, long long int var_7, long long int var_8, int var_9, int zero, long long int arr_1 [25] [25] , long long int arr_3 [25] [25] , int arr_6 [23] [23] , long long int arr_8 [23] [23] , signed char arr_9 [23] , short arr_10 [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_1 , arr_3 , arr_6 , arr_8 , arr_9 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
