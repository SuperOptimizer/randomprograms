#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-1705;
unsigned short var_2 = (unsigned short)6756;
_Bool var_5 = (_Bool)1;
long long int var_8 = 2578473282814441050LL;
unsigned char var_13 = (unsigned char)132;
signed char var_15 = (signed char)101;
int zero = 0;
unsigned long long int var_17 = 2939595436462408287ULL;
int var_18 = 269642794;
unsigned char var_19 = (unsigned char)237;
unsigned char var_20 = (unsigned char)86;
short var_21 = (short)838;
signed char var_22 = (signed char)(-127 - 1);
unsigned char var_23 = (unsigned char)76;
int arr_1 [21] [21] ;
int arr_2 [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
_Bool arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -2009144473;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1666354517 : 255871984;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 15616718343033738366ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(_Bool var_0, short var_1, unsigned short var_2, _Bool var_5, long long int var_8, unsigned char var_13, signed char var_15, int zero, int arr_1 [21] [21] , int arr_2 [21] , unsigned long long int arr_3 [21] [21] [21] , _Bool arr_4 [21] [21] [21] );

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_8, var_13, var_15, zero, arr_1 , arr_2 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
