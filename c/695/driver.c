#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32995;
unsigned char var_1 = (unsigned char)61;
short var_2 = (short)6663;
short var_4 = (short)7953;
signed char var_5 = (signed char)-118;
unsigned char var_6 = (unsigned char)176;
unsigned int var_7 = 1595526864U;
long long int var_8 = -3739632051401994601LL;
int var_9 = 1311321888;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-8645;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2962861381U;
unsigned char var_15 = (unsigned char)107;
short var_16 = (short)-19081;
unsigned char var_17 = (unsigned char)60;
unsigned short arr_0 [18] ;
short arr_1 [18] ;
short arr_2 [18] ;
int arr_5 [18] [18] ;
unsigned char arr_6 [18] [18] [18] ;
signed char arr_7 [18] [18] [18] ;
unsigned int arr_10 [18] [18] [18] ;
int arr_13 [24] ;
_Bool arr_15 [24] [24] [24] ;
int arr_3 [18] ;
unsigned short arr_8 [18] [18] [18] ;
unsigned char arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)28096;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-13582;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)26587;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 419320089;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 578307530U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = -263071271;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1733783473;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)22006;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned char)138;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test(unsigned short var_0, unsigned char var_1, short var_2, short var_4, signed char var_5, unsigned char var_6, unsigned int var_7, long long int var_8, int var_9, int zero, unsigned short arr_0 [18] , short arr_1 [18] , short arr_2 [18] , int arr_5 [18] [18] , unsigned char arr_6 [18] [18] [18] , signed char arr_7 [18] [18] [18] , unsigned int arr_10 [18] [18] [18] , int arr_13 [24] , _Bool arr_15 [24] [24] [24] );

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_0 , arr_1 , arr_2 , arr_5 , arr_6 , arr_7 , arr_10 , arr_13 , arr_15 );
    checksum();
    printf("%llu\n", seed);
}
