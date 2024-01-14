#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19070;
unsigned long long int var_1 = 12317586929015611165ULL;
unsigned char var_2 = (unsigned char)105;
unsigned char var_3 = (unsigned char)15;
signed char var_4 = (signed char)126;
unsigned long long int var_6 = 8229833577775307438ULL;
signed char var_10 = (signed char)-100;
int var_11 = -1637428583;
unsigned short var_12 = (unsigned short)18077;
unsigned short var_13 = (unsigned short)19085;
unsigned long long int var_14 = 3408410579328474363ULL;
short var_15 = (short)11663;
signed char var_16 = (signed char)-1;
int zero = 0;
unsigned int var_17 = 861569816U;
unsigned char var_18 = (unsigned char)241;
long long int var_19 = -5414813728565110130LL;
unsigned int var_20 = 3842818255U;
unsigned long long int var_21 = 3300568786653694990ULL;
unsigned char arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
int arr_3 [20] ;
_Bool arr_5 [11] ;
int arr_6 [11] ;
short arr_8 [11] [11] ;
long long int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2119262235;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1910837898;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (short)22496;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 1832455851535282464LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test(short var_0, unsigned long long int var_1, unsigned char var_2, unsigned char var_3, signed char var_4, unsigned long long int var_6, signed char var_10, int var_11, unsigned short var_12, unsigned short var_13, unsigned long long int var_14, short var_15, signed char var_16, int zero, unsigned char arr_0 [20] [20] , unsigned char arr_1 [20] , int arr_3 [20] , _Bool arr_5 [11] , int arr_6 [11] , short arr_8 [11] [11] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, arr_0 , arr_1 , arr_3 , arr_5 , arr_6 , arr_8 );
    checksum();
    printf("%llu\n", seed);
}
