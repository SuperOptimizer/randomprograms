#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
short var_3 = (short)-15010;
unsigned char var_5 = (unsigned char)120;
int var_6 = -1973330508;
unsigned int var_10 = 3698813052U;
short var_11 = (short)-12450;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)104;
int var_15 = 655268233;
int zero = 0;
unsigned char var_17 = (unsigned char)245;
unsigned char var_18 = (unsigned char)159;
long long int var_19 = -8437264301688222289LL;
unsigned long long int var_20 = 15437053041222184578ULL;
unsigned char var_21 = (unsigned char)250;
unsigned short var_22 = (unsigned short)11522;
unsigned int arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
short arr_2 [15] ;
unsigned long long int arr_3 [15] ;
short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 692586241U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-20556;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 15514990583681257539ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-16518;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(unsigned char var_1, short var_3, unsigned char var_5, int var_6, unsigned int var_10, short var_11, _Bool var_13, unsigned char var_14, int var_15, int zero, unsigned int arr_0 [15] [15] , unsigned char arr_1 [15] , short arr_2 [15] , unsigned long long int arr_3 [15] , short arr_4 [15] );

int main() {
    init();
    test(var_1, var_3, var_5, var_6, var_10, var_11, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
