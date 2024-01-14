#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)53366;
long long int var_3 = 316363122411044101LL;
unsigned int var_4 = 3314076913U;
signed char var_5 = (signed char)-127;
int var_6 = 1169391402;
unsigned long long int var_7 = 8586516627295901453ULL;
signed char var_8 = (signed char)93;
signed char var_9 = (signed char)-55;
int zero = 0;
short var_10 = (short)-16773;
long long int var_11 = -4933468293933375716LL;
unsigned int var_12 = 3736233862U;
int var_13 = 1558645080;
signed char var_14 = (signed char)96;
unsigned short var_15 = (unsigned short)1917;
signed char arr_1 [12] [12] ;
unsigned short arr_2 [12] [12] [12] ;
int arr_3 [12] [12] [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)39683;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 768996320;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)93;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test(_Bool var_1, unsigned short var_2, long long int var_3, unsigned int var_4, signed char var_5, int var_6, unsigned long long int var_7, signed char var_8, signed char var_9, int zero, signed char arr_1 [12] [12] , unsigned short arr_2 [12] [12] [12] , int arr_3 [12] [12] [12] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_1 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
