#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 348610405;
signed char var_7 = (signed char)63;
long long int var_10 = -1730188388896371278LL;
unsigned int var_11 = 2280504441U;
unsigned long long int var_18 = 3965638315824291572ULL;
int var_19 = -2073267315;
int zero = 0;
unsigned long long int var_20 = 7989116263471419704ULL;
int var_21 = -1307167345;
signed char var_22 = (signed char)-107;
int arr_0 [14] [14] ;
unsigned int arr_6 [17] ;
unsigned int arr_7 [17] ;
signed char arr_4 [14] ;
unsigned int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1213799555;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2878231025U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1573434018U : 3899523031U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1035171500U : 819898476U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test(int var_3, signed char var_7, long long int var_10, unsigned int var_11, unsigned long long int var_18, int var_19, int zero, int arr_0 [14] [14] , unsigned int arr_6 [17] , unsigned int arr_7 [17] );

int main() {
    init();
    test(var_3, var_7, var_10, var_11, var_18, var_19, zero, arr_0 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
