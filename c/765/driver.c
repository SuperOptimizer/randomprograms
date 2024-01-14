#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1499369954;
signed char var_4 = (signed char)51;
int var_5 = -571958897;
unsigned int var_7 = 4149053163U;
int var_8 = 796110042;
int var_11 = 1723838830;
short var_16 = (short)-13195;
short var_17 = (short)1818;
int zero = 0;
short var_19 = (short)25452;
unsigned short var_20 = (unsigned short)56388;
unsigned short var_21 = (unsigned short)41843;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 337071524U;
int arr_0 [12] ;
long long int arr_2 [12] ;
unsigned char arr_4 [12] [12] [12] ;
_Bool arr_5 [12] [12] ;
signed char arr_6 [12] [12] [12] [12] ;
_Bool arr_7 [12] [12] [12] [12] ;
unsigned char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1937642501;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 8207642727110321896LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)251;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test(int var_0, signed char var_4, int var_5, unsigned int var_7, int var_8, int var_11, short var_16, short var_17, int zero, int arr_0 [12] , long long int arr_2 [12] , unsigned char arr_4 [12] [12] [12] , _Bool arr_5 [12] [12] , signed char arr_6 [12] [12] [12] [12] , _Bool arr_7 [12] [12] [12] [12] );

int main() {
    init();
    test(var_0, var_4, var_5, var_7, var_8, var_11, var_16, var_17, zero, arr_0 , arr_2 , arr_4 , arr_5 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
