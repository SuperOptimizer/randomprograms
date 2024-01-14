#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-58;
unsigned short var_3 = (unsigned short)4695;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)53571;
short var_8 = (short)-29405;
_Bool var_10 = (_Bool)1;
int var_11 = 1048276333;
int var_17 = 426556639;
long long int var_18 = 4926182266964052557LL;
int zero = 0;
unsigned short var_19 = (unsigned short)13963;
signed char var_20 = (signed char)103;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-15;
unsigned char var_23 = (unsigned char)83;
long long int arr_0 [11] [11] ;
short arr_1 [11] [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -2973523587501310153LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)16352;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -5875701098141457863LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(signed char var_1, unsigned short var_3, _Bool var_4, unsigned short var_6, short var_8, _Bool var_10, int var_11, int var_17, long long int var_18, int zero, long long int arr_0 [11] [11] , short arr_1 [11] [11] , long long int arr_3 [11] );

int main() {
    init();
    test(var_1, var_3, var_4, var_6, var_8, var_10, var_11, var_17, var_18, zero, arr_0 , arr_1 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
