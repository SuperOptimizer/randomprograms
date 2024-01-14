#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_8 = -79574751;
int zero = 0;
signed char var_11 = (signed char)99;
signed char var_12 = (signed char)116;
short var_13 = (short)20149;
long long int var_14 = -1753360943223130058LL;
short var_15 = (short)12145;
signed char arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
signed char arr_2 [20] ;
long long int arr_3 [20] [20] ;
unsigned short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = -2676846406300996977LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)29216;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned char var_1, _Bool var_3, _Bool var_4, int var_8, int zero, signed char arr_0 [20] [20] , unsigned char arr_1 [20] , signed char arr_2 [20] , long long int arr_3 [20] [20] , unsigned short arr_4 [20] );

int main() {
    init();
    test(var_1, var_3, var_4, var_8, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
