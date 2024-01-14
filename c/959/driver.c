#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 637339167;
unsigned int var_3 = 1357578506U;
unsigned short var_4 = (unsigned short)49244;
signed char var_5 = (signed char)-104;
unsigned long long int var_6 = 3162072530737708656ULL;
signed char var_7 = (signed char)4;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)81;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)46788;
int var_14 = -121335537;
int var_15 = 77036196;
unsigned short var_16 = (unsigned short)53299;
int var_17 = 190630044;
short arr_0 [22] [22] ;
short arr_1 [22] [22] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)23196;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-31908;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)68;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(int var_1, unsigned int var_3, unsigned short var_4, signed char var_5, unsigned long long int var_6, signed char var_7, _Bool var_9, signed char var_11, int zero, short arr_0 [22] [22] , short arr_1 [22] [22] , signed char arr_2 [22] );

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_6, var_7, var_9, var_11, zero, arr_0 , arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
