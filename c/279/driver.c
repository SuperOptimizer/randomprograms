#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1106223365233595045LL;
long long int var_2 = -7130236667723313429LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 11786158595172303355ULL;
signed char var_5 = (signed char)62;
short var_7 = (short)31744;
unsigned int var_8 = 1413118979U;
unsigned char var_10 = (unsigned char)150;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3122259848U;
unsigned short var_13 = (unsigned short)40366;
unsigned int var_14 = 219908753U;
unsigned int var_15 = 1139530079U;
unsigned long long int var_16 = 8361847038785908187ULL;
long long int var_17 = 5849660412503203269LL;
int zero = 0;
unsigned long long int var_18 = 145705490117007304ULL;
long long int var_19 = -721294766929668731LL;
unsigned long long int var_20 = 71140138697808216ULL;
unsigned int var_21 = 2336922013U;
int var_22 = -526337713;
unsigned int var_23 = 1999175815U;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 1197978891U;
unsigned short var_26 = (unsigned short)40812;
unsigned int var_27 = 1235123964U;
signed char var_28 = (signed char)-103;
unsigned char var_29 = (unsigned char)180;
_Bool arr_0 [24] ;
signed char arr_1 [24] ;
int arr_2 [24] [24] [24] ;
short arr_3 [24] ;
signed char arr_6 [24] ;
signed char arr_7 [24] [24] ;
short arr_9 [25] [25] ;
short arr_10 [25] [25] ;
signed char arr_12 [25] [25] ;
long long int arr_13 [25] [25] [25] ;
short arr_15 [25] [25] ;
signed char arr_16 [25] [25] [25] [25] ;
unsigned short arr_8 [24] [24] ;
long long int arr_11 [25] [25] ;
long long int arr_14 [25] [25] ;
unsigned short arr_17 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1106090195;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-32437;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)60 : (signed char)56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (short)1049;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (short)720;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -2289473674612640763LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-15897;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)11522 : (unsigned short)2157;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = 3683304059745776019LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = -3584920184577092289LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27806;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test(long long int var_1, long long int var_2, _Bool var_3, unsigned long long int var_4, signed char var_5, short var_7, unsigned int var_8, unsigned char var_10, _Bool var_11, unsigned int var_12, unsigned short var_13, unsigned int var_14, unsigned int var_15, unsigned long long int var_16, long long int var_17, int zero, _Bool arr_0 [24] , signed char arr_1 [24] , int arr_2 [24] [24] [24] , short arr_3 [24] , signed char arr_6 [24] , signed char arr_7 [24] [24] , short arr_9 [25] [25] , short arr_10 [25] [25] , signed char arr_12 [25] [25] , long long int arr_13 [25] [25] [25] , short arr_15 [25] [25] , signed char arr_16 [25] [25] [25] [25] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_6 , arr_7 , arr_9 , arr_10 , arr_12 , arr_13 , arr_15 , arr_16 );
    checksum();
    printf("%llu\n", seed);
}
