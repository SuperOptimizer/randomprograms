#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9888;
unsigned int var_1 = 153289318U;
unsigned long long int var_2 = 5047839202582150314ULL;
short var_3 = (short)8375;
unsigned long long int var_5 = 6384685821769818330ULL;
short var_6 = (short)-24115;
unsigned long long int var_9 = 5468421033155701493ULL;
unsigned int var_10 = 1889224978U;
long long int var_11 = -7612151585902922370LL;
unsigned short var_12 = (unsigned short)52875;
int var_13 = 505870058;
unsigned int var_14 = 1726151824U;
short var_15 = (short)-13624;
int zero = 0;
unsigned long long int var_16 = 17432861659244952979ULL;
unsigned int var_17 = 3470989361U;
unsigned short var_18 = (unsigned short)49680;
unsigned short var_19 = (unsigned short)43290;
unsigned char var_20 = (unsigned char)53;
unsigned int var_21 = 1240965514U;
signed char var_22 = (signed char)74;
unsigned long long int var_23 = 7812436076413853708ULL;
unsigned char arr_0 [25] [25] ;
unsigned char arr_1 [25] ;
long long int arr_2 [25] ;
unsigned char arr_3 [25] ;
long long int arr_4 [25] [25] ;
unsigned int arr_7 [25] [25] [25] [25] ;
long long int arr_8 [25] [25] [25] [25] ;
unsigned short arr_9 [25] [25] ;
unsigned char arr_10 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -5099827671504429601LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -3820684928009399767LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 158345270U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -6340733819213020930LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)57159;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)114;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test(unsigned short var_0, unsigned int var_1, unsigned long long int var_2, short var_3, unsigned long long int var_5, short var_6, unsigned long long int var_9, unsigned int var_10, long long int var_11, unsigned short var_12, int var_13, unsigned int var_14, short var_15, int zero, unsigned char arr_0 [25] [25] , unsigned char arr_1 [25] , long long int arr_2 [25] , unsigned char arr_3 [25] , long long int arr_4 [25] [25] , unsigned int arr_7 [25] [25] [25] [25] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_6, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
