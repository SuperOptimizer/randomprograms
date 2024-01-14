#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3033650473U;
short var_1 = (short)-20489;
int var_5 = 698441757;
signed char var_6 = (signed char)63;
signed char var_8 = (signed char)-67;
_Bool var_9 = (_Bool)0;
short var_11 = (short)347;
int zero = 0;
unsigned int var_13 = 4257582874U;
signed char var_14 = (signed char)-106;
unsigned char var_15 = (unsigned char)237;
unsigned short var_16 = (unsigned short)46940;
unsigned int arr_0 [17] ;
unsigned char arr_2 [17] [17] [17] ;
unsigned int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2780096863U : 4124428044U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1739768342U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned int var_0, short var_1, int var_5, signed char var_6, signed char var_8, _Bool var_9, short var_11, int zero, unsigned int arr_0 [17] , unsigned char arr_2 [17] [17] [17] , unsigned int arr_3 [17] );

int main() {
    init();
    test(var_0, var_1, var_5, var_6, var_8, var_9, var_11, zero, arr_0 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
