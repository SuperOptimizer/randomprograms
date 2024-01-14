#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17307629237390896184ULL;
unsigned short var_5 = (unsigned short)33360;
unsigned int var_12 = 3316307263U;
unsigned long long int var_14 = 16059095049232791087ULL;
int zero = 0;
unsigned int var_17 = 2063313499U;
unsigned long long int var_18 = 17940231408862084013ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)234;
short arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
unsigned char arr_2 [22] [22] ;
_Bool arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)12702;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)200 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned long long int var_3, unsigned short var_5, unsigned int var_12, unsigned long long int var_14, int zero, short arr_0 [22] , unsigned char arr_1 [22] [22] , unsigned char arr_2 [22] [22] , _Bool arr_3 [22] [22] [22] );

int main() {
    init();
    test(var_3, var_5, var_12, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
