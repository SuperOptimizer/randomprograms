#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
signed char var_2 = (signed char)93;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)64838;
unsigned long long int var_5 = 15236069548164360062ULL;
int var_9 = 268549902;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)1796;
unsigned short var_13 = (unsigned short)44470;
signed char var_14 = (signed char)16;
signed char var_15 = (signed char)76;
int zero = 0;
long long int var_16 = -7961009096633918209LL;
unsigned long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
long long int arr_2 [19] ;
_Bool arr_3 [19] [19] [19] ;
_Bool arr_4 [19] [19] ;
_Bool arr_5 [19] [19] ;
unsigned char arr_9 [19] ;
unsigned int arr_10 [19] ;
short arr_15 [19] [19] [19] [19] [19] [19] ;
int arr_6 [19] [19] ;
unsigned long long int arr_7 [19] [19] [19] ;
int arr_16 [19] [19] [19] [19] [19] [19] ;
_Bool arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8114262550180050352ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)62246;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -8818499213511551317LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 1726641318U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (short)-7380 : (short)5934;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 348931790;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 10193678456421977199ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 97683901 : 415843060;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test(signed char var_0, signed char var_2, _Bool var_3, unsigned short var_4, unsigned long long int var_5, int var_9, _Bool var_11, unsigned short var_12, unsigned short var_13, signed char var_14, signed char var_15, int zero, unsigned long long int arr_0 [19] , unsigned short arr_1 [19] , long long int arr_2 [19] , _Bool arr_3 [19] [19] [19] , _Bool arr_4 [19] [19] , _Bool arr_5 [19] [19] , unsigned char arr_9 [19] , unsigned int arr_10 [19] , short arr_15 [19] [19] [19] [19] [19] [19] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_9, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_9 , arr_10 , arr_15 );
    checksum();
    printf("%llu\n", seed);
}
