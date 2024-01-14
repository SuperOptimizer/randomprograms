#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
short var_2 = (short)23479;
unsigned int var_3 = 2441872585U;
unsigned long long int var_4 = 2926992207178189231ULL;
unsigned short var_5 = (unsigned short)41925;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)231;
_Bool var_11 = (_Bool)0;
int var_13 = -1385402322;
unsigned long long int var_14 = 17269335430636865165ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14080730895087177022ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-76;
signed char var_20 = (signed char)57;
unsigned long long int arr_0 [12] ;
_Bool arr_6 [13] ;
signed char arr_7 [13] [13] ;
unsigned short arr_4 [12] [12] ;
signed char arr_5 [12] [12] ;
signed char arr_8 [13] ;
signed char arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3464501637089655868ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)11739;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)-3;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test(unsigned char var_0, short var_2, unsigned int var_3, unsigned long long int var_4, unsigned short var_5, _Bool var_6, _Bool var_7, _Bool var_9, unsigned char var_10, _Bool var_11, int var_13, unsigned long long int var_14, _Bool var_15, unsigned long long int var_16, _Bool var_17, int zero, unsigned long long int arr_0 [12] , _Bool arr_6 [13] , signed char arr_7 [13] [13] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_13, var_14, var_15, var_16, var_17, zero, arr_0 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
