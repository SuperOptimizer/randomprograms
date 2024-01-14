#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
unsigned long long int var_2 = 4104660126502165329ULL;
unsigned int var_3 = 1428541435U;
_Bool var_4 = (_Bool)0;
long long int var_5 = 2352386270829504764LL;
signed char var_6 = (signed char)-43;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)65;
int var_11 = 390476276;
signed char var_12 = (signed char)-89;
signed char var_13 = (signed char)-97;
_Bool var_14 = (_Bool)1;
int var_15 = 1228589877;
int var_16 = -210940382;
short var_17 = (short)16569;
unsigned int var_18 = 1940972120U;
unsigned long long int var_19 = 13316163053611984155ULL;
int zero = 0;
long long int var_20 = 3416832643614916807LL;
signed char var_21 = (signed char)15;
unsigned char var_22 = (unsigned char)107;
signed char var_23 = (signed char)22;
unsigned long long int var_24 = 4651506055224512266ULL;
unsigned long long int var_25 = 10565794269986151656ULL;
signed char var_26 = (signed char)57;
int arr_0 [12] ;
int arr_1 [12] ;
unsigned char arr_3 [20] ;
short arr_4 [20] [20] ;
unsigned int arr_6 [20] [20] ;
long long int arr_7 [20] [20] ;
long long int arr_2 [12] [12] ;
int arr_5 [20] ;
signed char arr_8 [20] ;
unsigned long long int arr_9 [20] ;
unsigned int arr_10 [20] ;
unsigned int arr_11 [20] ;
signed char arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1283757689 : 502494195;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1075201034 : -183347571;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)24715;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1881710917U : 876078949U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 6925140680154427105LL : -1497903949192409975LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -2604564950853811307LL : -4050274435336391133LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 1773730628;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-123 : (signed char)113;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 10650157694704711590ULL : 15949315039442968690ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1006565464U : 911735650U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 135873353U : 566158635U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-25;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test(unsigned char var_1, unsigned long long int var_2, unsigned int var_3, _Bool var_4, long long int var_5, signed char var_6, _Bool var_7, unsigned char var_10, int var_11, signed char var_12, signed char var_13, _Bool var_14, int var_15, int var_16, short var_17, unsigned int var_18, unsigned long long int var_19, int zero, int arr_0 [12] , int arr_1 [12] , unsigned char arr_3 [20] , short arr_4 [20] [20] , unsigned int arr_6 [20] [20] , long long int arr_7 [20] [20] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, var_19, zero, arr_0 , arr_1 , arr_3 , arr_4 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
