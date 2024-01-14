#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5869348996592575101ULL;
unsigned long long int var_3 = 11424933875506449796ULL;
signed char var_7 = (signed char)55;
int var_9 = -967424266;
unsigned short var_10 = (unsigned short)55413;
_Bool var_12 = (_Bool)1;
int var_13 = -583697448;
int zero = 0;
long long int var_20 = 2770028572180410802LL;
int var_21 = 862547864;
unsigned int var_22 = 2959455470U;
unsigned long long int var_23 = 10716169282077511601ULL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)44077;
long long int var_27 = -1637198925375584731LL;
unsigned int arr_0 [20] ;
int arr_1 [20] [20] ;
unsigned int arr_2 [20] [20] [20] ;
long long int arr_4 [20] [20] [20] ;
signed char arr_5 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2338391576U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -1771176417;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1836411317U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2531042193435714366LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)23;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test(unsigned long long int var_1, unsigned long long int var_3, signed char var_7, int var_9, unsigned short var_10, _Bool var_12, int var_13, int zero, unsigned int arr_0 [20] , int arr_1 [20] [20] , unsigned int arr_2 [20] [20] [20] , long long int arr_4 [20] [20] [20] , signed char arr_5 [20] [20] [20] [20] );

int main() {
    init();
    test(var_1, var_3, var_7, var_9, var_10, var_12, var_13, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
