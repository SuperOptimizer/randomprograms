#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-81;
unsigned short var_3 = (unsigned short)14420;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 293343276U;
short var_7 = (short)13274;
unsigned char var_9 = (unsigned char)69;
unsigned char var_10 = (unsigned char)151;
unsigned int var_11 = 2565319788U;
unsigned short var_12 = (unsigned short)25454;
unsigned char var_13 = (unsigned char)151;
_Bool var_14 = (_Bool)0;
short var_16 = (short)-37;
_Bool var_17 = (_Bool)0;
int var_18 = -2103972781;
int zero = 0;
unsigned int var_20 = 2455174391U;
short var_21 = (short)-16187;
unsigned short var_22 = (unsigned short)46909;
_Bool var_23 = (_Bool)1;
unsigned long long int arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned short arr_4 [24] [24] [24] [24] ;
_Bool arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] [24] ;
unsigned char arr_8 [24] [24] [24] [24] [24] ;
short arr_11 [24] ;
signed char arr_7 [24] [24] [24] [24] ;
unsigned short arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3834880123652283766ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47194;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36637 : (unsigned short)129;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)122 : (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)12409;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18752 : (unsigned short)2994;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test(signed char var_0, _Bool var_1, signed char var_2, unsigned short var_3, _Bool var_4, unsigned int var_6, short var_7, unsigned char var_9, unsigned char var_10, unsigned int var_11, unsigned short var_12, unsigned char var_13, _Bool var_14, short var_16, _Bool var_17, int var_18, int zero, unsigned long long int arr_0 [24] , unsigned char arr_1 [24] , unsigned short arr_4 [24] [24] [24] [24] , _Bool arr_5 [24] [24] [24] , unsigned short arr_6 [24] [24] , unsigned char arr_8 [24] [24] [24] [24] [24] , short arr_11 [24] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_9, var_10, var_11, var_12, var_13, var_14, var_16, var_17, var_18, zero, arr_0 , arr_1 , arr_4 , arr_5 , arr_6 , arr_8 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
