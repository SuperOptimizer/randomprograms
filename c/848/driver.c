#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3996;
unsigned short var_3 = (unsigned short)64195;
short var_4 = (short)24147;
unsigned short var_5 = (unsigned short)31741;
int var_6 = 248691847;
unsigned int var_7 = 2715539349U;
short var_8 = (short)-9131;
unsigned short var_9 = (unsigned short)30675;
short var_10 = (short)25977;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 12920515642276506815ULL;
long long int var_13 = -4766811202139930654LL;
unsigned short var_14 = (unsigned short)1144;
unsigned short var_15 = (unsigned short)11889;
long long int var_16 = -723844665970642449LL;
unsigned int var_17 = 522691597U;
long long int var_18 = 6211727487672033889LL;
unsigned int arr_2 [10] [10] ;
unsigned short arr_5 [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 365459288U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)31752;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)40221;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(short var_2, unsigned short var_3, short var_4, unsigned short var_5, int var_6, unsigned int var_7, short var_8, unsigned short var_9, short var_10, _Bool var_11, int zero, unsigned int arr_2 [10] [10] );

int main() {
    init();
    test(var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, arr_2 );
    checksum();
    printf("%llu\n", seed);
}
