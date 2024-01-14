#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2036842962U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 8568256840930557759ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)41802;
int zero = 0;
unsigned long long int var_18 = 7629741611040472796ULL;
unsigned short var_19 = (unsigned short)62726;
long long int var_20 = 5922962855112952186LL;
signed char var_21 = (signed char)-71;
unsigned short arr_0 [16] ;
_Bool arr_2 [16] ;
int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)13753;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 569909107;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test(unsigned int var_0, _Bool var_7, _Bool var_9, _Bool var_10, unsigned long long int var_12, _Bool var_16, unsigned short var_17, int zero, unsigned short arr_0 [16] , _Bool arr_2 [16] );

int main() {
    init();
    test(var_0, var_7, var_9, var_10, var_12, var_16, var_17, zero, arr_0 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
