#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
signed char var_1 = (signed char)-95;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)46564;
short var_8 = (short)-19665;
unsigned char var_9 = (unsigned char)97;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)16825;
short var_13 = (short)-30429;
signed char var_14 = (signed char)34;
unsigned char var_15 = (unsigned char)129;
int zero = 0;
int var_16 = -512797429;
signed char var_17 = (signed char)-56;
unsigned short var_18 = (unsigned short)37995;
long long int var_19 = 4057193422861766409LL;
unsigned int var_20 = 2080919710U;
long long int var_21 = 2875618813521912191LL;
unsigned char var_22 = (unsigned char)32;
long long int var_23 = -5028163493124772788LL;
short var_24 = (short)-5185;
int var_25 = 1771927900;
unsigned char arr_0 [21] ;
unsigned int arr_1 [21] [21] ;
unsigned int arr_3 [23] [23] ;
long long int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1312404589U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 2727078934U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -3743594903788503113LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test(signed char var_0, signed char var_1, _Bool var_3, unsigned short var_6, short var_8, unsigned char var_9, _Bool var_10, unsigned short var_12, short var_13, signed char var_14, unsigned char var_15, int zero, unsigned char arr_0 [21] , unsigned int arr_1 [21] [21] , unsigned int arr_3 [23] [23] , long long int arr_4 [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_3, var_6, var_8, var_9, var_10, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
