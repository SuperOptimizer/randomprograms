#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1384805919;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)40987;
short var_5 = (short)-26347;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -1603734065;
int var_13 = -1349704715;
int arr_2 [17] ;
unsigned short arr_3 [17] [17] ;
_Bool arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1386847344;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)31252;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test(int var_1, _Bool var_2, unsigned short var_4, short var_5, _Bool var_11, int zero, int arr_2 [17] , unsigned short arr_3 [17] [17] );

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_11, zero, arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
