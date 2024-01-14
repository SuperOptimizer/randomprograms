#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1599288408U;
int var_1 = -995582137;
unsigned long long int var_2 = 938032898636282381ULL;
signed char var_3 = (signed char)-34;
signed char var_4 = (signed char)-88;
_Bool var_5 = (_Bool)1;
short var_6 = (short)1505;
long long int var_7 = 7702153664802249714LL;
unsigned int var_8 = 3870019755U;
unsigned long long int var_9 = 17666973177727430871ULL;
unsigned int var_10 = 2880775739U;
int zero = 0;
unsigned long long int var_11 = 3183418994548355130ULL;
long long int var_12 = -9030963988592197927LL;
_Bool var_13 = (_Bool)0;
int var_14 = 128377870;
unsigned int var_15 = 3737602737U;
unsigned long long int var_16 = 2512142558659472134ULL;
unsigned short arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
int arr_2 [21] [21] ;
unsigned short arr_4 [17] ;
_Bool arr_3 [21] ;
int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)34160;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 199202311U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1328668426;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)2203;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 1349964104;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(unsigned int var_0, int var_1, unsigned long long int var_2, signed char var_3, signed char var_4, _Bool var_5, short var_6, long long int var_7, unsigned int var_8, unsigned long long int var_9, unsigned int var_10, int zero, unsigned short arr_0 [21] [21] , unsigned int arr_1 [21] , int arr_2 [21] [21] , unsigned short arr_4 [17] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_2 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
