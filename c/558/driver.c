#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-109;
unsigned short var_3 = (unsigned short)11711;
unsigned int var_8 = 3612749267U;
unsigned int var_10 = 1670073303U;
signed char var_11 = (signed char)-27;
long long int var_13 = -292568341555924123LL;
unsigned short var_15 = (unsigned short)8439;
long long int var_16 = 8096192149009432492LL;
int zero = 0;
unsigned int var_19 = 1694393083U;
long long int var_20 = 745367514920745828LL;
int var_21 = -807384106;
long long int var_22 = 6989190974043874837LL;
unsigned long long int var_23 = 1302652917597966514ULL;
_Bool var_24 = (_Bool)0;
long long int arr_0 [15] ;
unsigned short arr_1 [15] [15] ;
unsigned int arr_2 [15] [15] ;
_Bool arr_3 [15] ;
unsigned int arr_4 [15] ;
signed char arr_9 [15] [15] [15] ;
signed char arr_11 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_12 [15] [15] [15] [15] ;
int arr_13 [15] ;
_Bool arr_20 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -3620916033625520910LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)19239;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 799253944U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 445451076U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4765647785570753627ULL : 13175908715543571623ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -434536160 : -299787192;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test(signed char var_2, unsigned short var_3, unsigned int var_8, unsigned int var_10, signed char var_11, long long int var_13, unsigned short var_15, long long int var_16, int zero, long long int arr_0 [15] , unsigned short arr_1 [15] [15] , unsigned int arr_2 [15] [15] , _Bool arr_3 [15] , unsigned int arr_4 [15] , signed char arr_9 [15] [15] [15] , signed char arr_11 [15] [15] [15] [15] [15] [15] );

int main() {
    init();
    test(var_2, var_3, var_8, var_10, var_11, var_13, var_15, var_16, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_9 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
