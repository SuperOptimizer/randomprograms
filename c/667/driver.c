#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
short var_2 = (short)-23726;
unsigned short var_3 = (unsigned short)39950;
unsigned short var_5 = (unsigned short)32279;
signed char var_8 = (signed char)-17;
signed char var_9 = (signed char)-64;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)27870;
unsigned short var_14 = (unsigned short)7151;
signed char var_15 = (signed char)-73;
unsigned long long int arr_0 [16] [16] ;
signed char arr_3 [16] [16] [16] ;
_Bool arr_6 [16] [16] ;
unsigned char arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 4565145536779021150ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)67;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test(signed char var_1, short var_2, unsigned short var_3, unsigned short var_5, signed char var_8, signed char var_9, int zero, unsigned long long int arr_0 [16] [16] , signed char arr_3 [16] [16] [16] );

int main() {
    init();
    test(var_1, var_2, var_3, var_5, var_8, var_9, zero, arr_0 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
