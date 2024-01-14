#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8303193639692109825LL;
int var_2 = 1683138824;
unsigned int var_4 = 204770479U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 345592403U;
int var_8 = 1451884202;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2181443858U;
int var_17 = -97524092;
unsigned int var_18 = 159589292U;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 863024586U;
unsigned int arr_0 [12] ;
int arr_2 [12] [12] ;
_Bool arr_4 [12] [12] [12] ;
long long int arr_5 [12] ;
_Bool arr_8 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2237531524U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -567774697;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3709294118188574754LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(long long int var_1, int var_2, unsigned int var_4, _Bool var_6, unsigned int var_7, int var_8, _Bool var_9, _Bool var_13, _Bool var_14, _Bool var_15, unsigned int var_16, int var_17, unsigned int var_18, int zero, unsigned int arr_0 [12] , int arr_2 [12] [12] , _Bool arr_4 [12] [12] [12] , long long int arr_5 [12] , _Bool arr_8 [12] [12] [12] [12] );

int main() {
    init();
    test(var_1, var_2, var_4, var_6, var_7, var_8, var_9, var_13, var_14, var_15, var_16, var_17, var_18, zero, arr_0 , arr_2 , arr_4 , arr_5 , arr_8 );
    checksum();
    printf("%llu\n", seed);
}
