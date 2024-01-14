#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1559904238U;
unsigned int var_2 = 3128659452U;
long long int var_3 = 6754128726977362182LL;
long long int var_4 = -6296448718621364246LL;
short var_5 = (short)-7437;
long long int var_6 = 4813054214208986216LL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1757225138U;
unsigned long long int var_12 = 1734041982614491262ULL;
int zero = 0;
unsigned int var_13 = 436081437U;
unsigned short var_14 = (unsigned short)63833;
short var_15 = (short)-14607;
unsigned char var_16 = (unsigned char)131;
short var_17 = (short)5286;
unsigned int var_18 = 2054731660U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1152606270U;
unsigned short arr_0 [14] [14] ;
short arr_1 [14] ;
unsigned int arr_2 [14] [14] [14] ;
signed char arr_4 [14] [14] [14] ;
unsigned long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)48885;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)21028;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4195659548U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 7912691832945090227ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(unsigned int var_0, unsigned int var_2, long long int var_3, long long int var_4, short var_5, long long int var_6, _Bool var_8, unsigned int var_10, unsigned long long int var_12, int zero, unsigned short arr_0 [14] [14] , short arr_1 [14] , unsigned int arr_2 [14] [14] [14] , signed char arr_4 [14] [14] [14] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_10, var_12, zero, arr_0 , arr_1 , arr_2 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
