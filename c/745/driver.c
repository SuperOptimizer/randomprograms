#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2919059994U;
unsigned int var_1 = 3769740249U;
short var_2 = (short)7553;
unsigned int var_3 = 3189215843U;
unsigned char var_4 = (unsigned char)74;
unsigned char var_5 = (unsigned char)121;
unsigned long long int var_7 = 16803310256602725460ULL;
signed char var_8 = (signed char)-49;
short var_9 = (short)26308;
short var_10 = (short)-16551;
long long int var_11 = 2945533132523504137LL;
short var_12 = (short)22428;
int var_13 = -2033511342;
unsigned char var_14 = (unsigned char)134;
int zero = 0;
unsigned char var_15 = (unsigned char)240;
short var_16 = (short)28641;
signed char var_17 = (signed char)-30;
unsigned char var_18 = (unsigned char)118;
long long int var_19 = -769497940442664932LL;
unsigned char var_20 = (unsigned char)209;
unsigned long long int var_21 = 13148421476929374777ULL;
long long int var_22 = -8303316828779027513LL;
unsigned char arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
int arr_2 [18] [18] [18] ;
unsigned short arr_4 [18] [18] [18] [18] ;
unsigned char arr_5 [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
short arr_7 [18] [18] [18] [18] ;
long long int arr_8 [18] [18] [18] [18] ;
short arr_12 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 7475050368856514234ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -840899637;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11137;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 16788350819988176557ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)13566;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -28735956483449830LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)29808;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 1709347490U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test(unsigned int var_0, unsigned int var_1, short var_2, unsigned int var_3, unsigned char var_4, unsigned char var_5, unsigned long long int var_7, signed char var_8, short var_9, short var_10, long long int var_11, short var_12, int var_13, unsigned char var_14, int zero, unsigned char arr_0 [18] [18] , unsigned long long int arr_1 [18] , int arr_2 [18] [18] [18] , unsigned short arr_4 [18] [18] [18] [18] , unsigned char arr_5 [18] [18] , unsigned long long int arr_6 [18] [18] [18] , short arr_7 [18] [18] [18] [18] , long long int arr_8 [18] [18] [18] [18] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 );
    checksum();
    printf("%llu\n", seed);
}
