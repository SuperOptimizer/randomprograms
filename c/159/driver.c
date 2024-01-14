#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17110519414510304766ULL;
long long int var_2 = 8405361919788498468LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 6263913537170581795LL;
unsigned long long int var_6 = 7576324220644504204ULL;
unsigned int var_8 = 449564450U;
unsigned int var_10 = 1760681518U;
unsigned int var_11 = 1313481188U;
unsigned int var_12 = 2145200877U;
int zero = 0;
unsigned char var_13 = (unsigned char)48;
unsigned int var_14 = 3983325571U;
unsigned long long int var_15 = 2493025122969050051ULL;
int var_16 = -1001688220;
signed char var_17 = (signed char)-61;
long long int arr_1 [10] ;
unsigned int arr_2 [10] [10] ;
int arr_3 [10] ;
unsigned long long int arr_4 [10] [10] [10] ;
signed char arr_6 [10] [10] [10] [10] ;
long long int arr_7 [10] [10] [10] ;
signed char arr_8 [10] [10] [10] ;
short arr_9 [10] ;
signed char arr_10 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -9175553379765788676LL : -5706791301413234959LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 3300511788U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 239871361;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 11171450184784405056ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)9 : (signed char)123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2753735994701334993LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-77 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)-10031;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)-80;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test(unsigned long long int var_0, long long int var_2, _Bool var_4, long long int var_5, unsigned long long int var_6, unsigned int var_8, unsigned int var_10, unsigned int var_11, unsigned int var_12, int zero, long long int arr_1 [10] , unsigned int arr_2 [10] [10] , int arr_3 [10] , unsigned long long int arr_4 [10] [10] [10] , signed char arr_6 [10] [10] [10] [10] , long long int arr_7 [10] [10] [10] , signed char arr_8 [10] [10] [10] , short arr_9 [10] );

int main() {
    init();
    test(var_0, var_2, var_4, var_5, var_6, var_8, var_10, var_11, var_12, zero, arr_1 , arr_2 , arr_3 , arr_4 , arr_6 , arr_7 , arr_8 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
