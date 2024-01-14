#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)50908;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-101;
unsigned short var_12 = (unsigned short)32087;
short var_14 = (short)-4017;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = -1617247206;
unsigned short var_18 = (unsigned short)16559;
unsigned long long int arr_1 [23] ;
signed char arr_2 [23] [23] ;
short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 16175594948785812370ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)32014;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test(_Bool var_0, unsigned short var_1, _Bool var_4, signed char var_7, unsigned short var_12, short var_14, _Bool var_16, int zero, unsigned long long int arr_1 [23] , signed char arr_2 [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_4, var_7, var_12, var_14, var_16, zero, arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
