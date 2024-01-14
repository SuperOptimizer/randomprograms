#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6486;
unsigned int var_3 = 805660483U;
long long int var_5 = 4758359709651165258LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 489974146106806980LL;
unsigned int var_14 = 1316277097U;
_Bool arr_0 [22] ;
_Bool arr_1 [22] ;
short arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)1989;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test(short var_0, unsigned int var_3, long long int var_5, int zero, _Bool arr_0 [22] , _Bool arr_1 [22] );

int main() {
    init();
    test(var_0, var_3, var_5, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
