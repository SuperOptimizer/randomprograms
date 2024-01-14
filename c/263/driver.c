#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3579112394U;
short var_1 = (short)21657;
short var_2 = (short)25899;
signed char var_3 = (signed char)-94;
short var_4 = (short)-18974;
short var_5 = (short)-32154;
signed char var_6 = (signed char)2;
unsigned int var_7 = 2070739153U;
unsigned int var_8 = 3391572648U;
short var_9 = (short)-9756;
unsigned long long int var_10 = 17758611425019853814ULL;
unsigned char var_11 = (unsigned char)189;
unsigned char var_12 = (unsigned char)128;
int zero = 0;
unsigned short var_13 = (unsigned short)44235;
unsigned int var_14 = 735841718U;
signed char var_15 = (signed char)10;
unsigned int var_16 = 2170566380U;
unsigned char var_17 = (unsigned char)209;
short var_18 = (short)32582;
unsigned int arr_3 [19] ;
unsigned long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 769802018U : 2120135009U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 11400806183906680407ULL : 787412368178306566ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_0, short var_1, short var_2, signed char var_3, short var_4, short var_5, signed char var_6, unsigned int var_7, unsigned int var_8, short var_9, unsigned long long int var_10, unsigned char var_11, unsigned char var_12, int zero, unsigned int arr_3 [19] , unsigned long long int arr_4 [19] [19] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
