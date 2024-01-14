#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4239574873U;
_Bool var_2 = (_Bool)0;
int var_3 = -79993269;
long long int var_4 = -7712004548646060560LL;
signed char var_5 = (signed char)-74;
int var_6 = -789567955;
_Bool var_7 = (_Bool)1;
int var_8 = -444104466;
int var_10 = -1956635531;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)42485;
unsigned char var_15 = (unsigned char)222;
unsigned long long int var_16 = 17479323606218670047ULL;
unsigned char var_17 = (unsigned char)216;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 622496768U;
int var_20 = -561522209;
short var_21 = (short)-27874;
unsigned char var_22 = (unsigned char)86;
unsigned short var_23 = (unsigned short)46178;
int var_24 = -101806267;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-32035;
signed char var_27 = (signed char)46;
unsigned char arr_3 [11] ;
signed char arr_4 [11] ;
_Bool arr_7 [13] [13] ;
short arr_5 [11] ;
short arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)31783;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (short)-14898;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test(_Bool var_0, unsigned int var_1, _Bool var_2, int var_3, long long int var_4, signed char var_5, int var_6, _Bool var_7, int var_8, int var_10, _Bool var_13, unsigned short var_14, unsigned char var_15, unsigned long long int var_16, unsigned char var_17, int zero, unsigned char arr_3 [11] , signed char arr_4 [11] , _Bool arr_7 [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_13, var_14, var_15, var_16, var_17, zero, arr_3 , arr_4 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
