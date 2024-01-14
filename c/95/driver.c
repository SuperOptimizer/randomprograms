#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned int var_1 = 328632915U;
long long int var_6 = -1780408781666577673LL;
unsigned long long int var_9 = 14505834085808401214ULL;
long long int var_10 = 94139542619540971LL;
signed char var_11 = (signed char)25;
unsigned short var_13 = (unsigned short)54900;
int zero = 0;
short var_18 = (short)-32088;
unsigned int var_19 = 2699109820U;
short var_20 = (short)-31451;
unsigned long long int var_21 = 5940475620488350582ULL;
unsigned short var_22 = (unsigned short)54268;
short arr_1 [13] [13] ;
_Bool arr_8 [13] [13] ;
short arr_10 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)23119 : (short)-13223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-30481 : (short)19681;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test(unsigned char var_0, unsigned int var_1, long long int var_6, unsigned long long int var_9, long long int var_10, signed char var_11, unsigned short var_13, int zero, short arr_1 [13] [13] , _Bool arr_8 [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_6, var_9, var_10, var_11, var_13, zero, arr_1 , arr_8 );
    checksum();
    printf("%llu\n", seed);
}
