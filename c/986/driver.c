#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1966673758U;
unsigned int var_1 = 3168132843U;
unsigned short var_3 = (unsigned short)18019;
unsigned long long int var_5 = 27149604845094368ULL;
signed char var_8 = (signed char)78;
short var_9 = (short)22653;
unsigned int var_10 = 3324374362U;
short var_11 = (short)7936;
int var_12 = -1250534077;
int zero = 0;
int var_13 = -278728225;
signed char var_14 = (signed char)94;
unsigned int var_15 = 1717725153U;
unsigned short var_16 = (unsigned short)59003;
unsigned int var_17 = 3427636449U;
unsigned short var_18 = (unsigned short)8559;
_Bool var_19 = (_Bool)0;
signed char arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
unsigned int arr_3 [17] [17] [17] ;
unsigned long long int arr_5 [17] [17] [17] [17] ;
unsigned int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 12478995368337146013ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1844659797U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 16278624007800935288ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 3085928528U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test(unsigned int var_0, unsigned int var_1, unsigned short var_3, unsigned long long int var_5, signed char var_8, short var_9, unsigned int var_10, short var_11, int var_12, int zero, signed char arr_0 [17] [17] , unsigned long long int arr_1 [17] , unsigned int arr_3 [17] [17] [17] , unsigned long long int arr_5 [17] [17] [17] [17] );

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_8, var_9, var_10, var_11, var_12, zero, arr_0 , arr_1 , arr_3 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
