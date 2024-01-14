#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-2;
long long int var_4 = 1013499496315343165LL;
signed char var_8 = (signed char)-34;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)213;
unsigned int var_19 = 1675781957U;
int var_20 = 1893204481;
long long int var_21 = -5865283977268927454LL;
long long int var_22 = -8149457368180226335LL;
long long int arr_0 [19] ;
signed char arr_1 [19] ;
unsigned long long int arr_2 [19] [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1155502156596351609LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 14362587524082560221ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 10572907558798884598ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(_Bool var_2, signed char var_3, long long int var_4, signed char var_8, _Bool var_12, int zero, long long int arr_0 [19] , signed char arr_1 [19] , unsigned long long int arr_2 [19] [19] , unsigned long long int arr_3 [19] );

int main() {
    init();
    test(var_2, var_3, var_4, var_8, var_12, zero, arr_0 , arr_1 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
