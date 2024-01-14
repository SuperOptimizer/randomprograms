#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -400261857;
unsigned char var_2 = (unsigned char)130;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-114;
signed char var_6 = (signed char)82;
unsigned long long int var_7 = 8101357491810629582ULL;
_Bool var_8 = (_Bool)1;
int var_9 = 1475335629;
long long int var_11 = 6763781181623329769LL;
unsigned char var_12 = (unsigned char)68;
unsigned char var_13 = (unsigned char)232;
unsigned long long int var_15 = 354548246421321340ULL;
signed char var_16 = (signed char)-54;
signed char var_17 = (signed char)-38;
int zero = 0;
unsigned int var_18 = 2614682931U;
unsigned long long int var_19 = 13371023108385996994ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-32;
short var_22 = (short)5884;
int var_23 = -465387830;
int arr_1 [19] ;
unsigned int arr_2 [19] [19] ;
int arr_3 [19] [19] ;
short arr_4 [19] ;
_Bool arr_5 [19] ;
unsigned int arr_6 [19] [19] [19] [19] ;
long long int arr_7 [19] [19] [19] [19] [19] [19] ;
_Bool arr_11 [19] ;
unsigned short arr_12 [19] [19] [19] ;
unsigned char arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 984345788 : -868353240;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 3495089177U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -174763535 : -57577914;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)24041;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3708474594U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7823659810948570995LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)30295 : (unsigned short)38792;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)25 : (unsigned char)104;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test(int var_1, unsigned char var_2, _Bool var_4, signed char var_5, signed char var_6, unsigned long long int var_7, _Bool var_8, int var_9, long long int var_11, unsigned char var_12, unsigned char var_13, unsigned long long int var_15, signed char var_16, signed char var_17, int zero, int arr_1 [19] , unsigned int arr_2 [19] [19] , int arr_3 [19] [19] , short arr_4 [19] , _Bool arr_5 [19] , unsigned int arr_6 [19] [19] [19] [19] , long long int arr_7 [19] [19] [19] [19] [19] [19] );

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_15, var_16, var_17, zero, arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
