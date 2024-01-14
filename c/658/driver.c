#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33438;
int var_1 = -2050598305;
int var_2 = 1223382337;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)40;
int var_8 = 2040926227;
signed char var_9 = (signed char)-13;
int var_10 = 968562768;
unsigned short var_11 = (unsigned short)59450;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15485934071549691330ULL;
int var_14 = -218209183;
unsigned long long int var_16 = 7391758660070398443ULL;
unsigned short var_17 = (unsigned short)36185;
int zero = 0;
long long int var_19 = 3903200039066102316LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-101;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)11661;
unsigned long long int var_24 = 15621080665075699021ULL;
unsigned char var_25 = (unsigned char)7;
signed char var_26 = (signed char)-72;
signed char var_27 = (signed char)-3;
short var_28 = (short)9989;
unsigned long long int var_29 = 15338357610147600055ULL;
short arr_2 [19] ;
_Bool arr_3 [19] ;
int arr_4 [19] [19] ;
int arr_5 [19] [19] [19] ;
unsigned short arr_9 [19] [19] [19] [19] ;
unsigned long long int arr_10 [19] [19] ;
unsigned long long int arr_13 [19] [19] [19] [19] [19] [19] [19] ;
short arr_16 [19] [19] [19] [19] [19] ;
_Bool arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)25950;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 265065607;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -957894340;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)57265;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 7643321183856693623ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2868055528877008911ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-12911 : (short)-7669;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test(unsigned short var_0, int var_1, int var_2, _Bool var_3, _Bool var_5, unsigned char var_7, int var_8, signed char var_9, int var_10, unsigned short var_11, _Bool var_12, unsigned long long int var_13, int var_14, unsigned long long int var_16, unsigned short var_17, int zero, short arr_2 [19] , _Bool arr_3 [19] , int arr_4 [19] [19] , int arr_5 [19] [19] [19] , unsigned short arr_9 [19] [19] [19] [19] , unsigned long long int arr_10 [19] [19] , unsigned long long int arr_13 [19] [19] [19] [19] [19] [19] [19] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_16, var_17, zero, arr_2 , arr_3 , arr_4 , arr_5 , arr_9 , arr_10 , arr_13 );
    checksum();
    printf("%llu\n", seed);
}
