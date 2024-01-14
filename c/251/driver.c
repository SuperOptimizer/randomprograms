#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)2;
unsigned long long int var_3 = 11462648426831509839ULL;
short var_4 = (short)32379;
unsigned long long int var_6 = 7334409408328915226ULL;
int var_7 = 70320489;
unsigned short var_8 = (unsigned short)39090;
unsigned short var_10 = (unsigned short)53217;
int var_11 = -789554747;
short var_12 = (short)-32704;
int zero = 0;
short var_14 = (short)-18808;
signed char var_15 = (signed char)-17;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 10987426998143367139ULL;
unsigned int var_18 = 1427251782U;
long long int var_19 = -3759392983108643628LL;
short arr_0 [24] ;
unsigned char arr_1 [24] ;
long long int arr_2 [24] ;
signed char arr_3 [24] ;
short arr_4 [24] [24] ;
short arr_5 [24] ;
short arr_6 [24] [24] [24] ;
_Bool arr_7 [24] [24] [24] ;
_Bool arr_8 [24] [24] [24] [24] ;
_Bool arr_9 [24] [24] [24] ;
_Bool arr_10 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)19594;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2631669201179267492LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-12005;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)23492;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-17896;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(_Bool var_0, signed char var_2, unsigned long long int var_3, short var_4, unsigned long long int var_6, int var_7, unsigned short var_8, unsigned short var_10, int var_11, short var_12, int zero, short arr_0 [24] , unsigned char arr_1 [24] , long long int arr_2 [24] , signed char arr_3 [24] , short arr_4 [24] [24] , short arr_5 [24] , short arr_6 [24] [24] [24] , _Bool arr_7 [24] [24] [24] , _Bool arr_8 [24] [24] [24] [24] , _Bool arr_9 [24] [24] [24] , _Bool arr_10 [24] [24] [24] [24] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_6, var_7, var_8, var_10, var_11, var_12, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
