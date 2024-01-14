#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7455351121806631200ULL;
unsigned int var_1 = 208141933U;
int var_4 = 1625721287;
unsigned long long int var_5 = 3421519040442787086ULL;
unsigned int var_7 = 2935510020U;
long long int var_12 = 6874282674111241621LL;
int zero = 0;
unsigned char var_14 = (unsigned char)128;
short var_15 = (short)-13262;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 7705150896218194147ULL;
unsigned int var_19 = 816722557U;
int arr_1 [14] ;
_Bool arr_6 [14] [14] [14] ;
signed char arr_10 [14] [14] [14] ;
long long int arr_11 [14] ;
signed char arr_12 [14] ;
short arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -2078476645;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -8481676672267435947LL : -2301114796450020198LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-105 : (signed char)-116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-2399 : (short)-19645;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test(unsigned long long int var_0, unsigned int var_1, int var_4, unsigned long long int var_5, unsigned int var_7, long long int var_12, int zero, int arr_1 [14] , _Bool arr_6 [14] [14] [14] , signed char arr_10 [14] [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_4, var_5, var_7, var_12, zero, arr_1 , arr_6 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
