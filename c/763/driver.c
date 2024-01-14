#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)32491;
long long int var_2 = -6438942792383845517LL;
unsigned int var_4 = 3103337886U;
unsigned char var_6 = (unsigned char)179;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_15 = (short)30441;
unsigned short arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
unsigned int arr_4 [18] ;
unsigned short arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)59818;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3439081010649523161ULL : 14766531442800389197ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 769725944U : 2247233828U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)16023 : (unsigned short)12826;
}

void checksum() {
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test(_Bool var_0, unsigned short var_1, long long int var_2, unsigned int var_4, unsigned char var_6, _Bool var_8, _Bool var_10, int zero, unsigned short arr_0 [18] [18] , unsigned long long int arr_1 [18] );

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_6, var_8, var_10, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
