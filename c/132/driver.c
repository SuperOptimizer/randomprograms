#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
int var_2 = 499799970;
unsigned int var_3 = 1260989205U;
unsigned long long int var_4 = 17248710999066551967ULL;
unsigned int var_5 = 1695664778U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_8 = (short)7731;
unsigned int var_9 = 1262637630U;
long long int var_10 = -8394887295613905681LL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-24269;
unsigned int var_14 = 738718199U;
signed char var_15 = (signed char)-2;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)7438;
unsigned long long int var_18 = 7004118313388740408ULL;
_Bool var_19 = (_Bool)1;
int var_20 = 740252569;
unsigned char var_21 = (unsigned char)64;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 984717565U;
short var_24 = (short)10747;
unsigned int var_25 = 1395446282U;
unsigned int var_26 = 3739040952U;
unsigned long long int var_27 = 8702008203742724192ULL;
long long int var_28 = 3578658205712454259LL;
short arr_0 [10] ;
unsigned short arr_1 [10] ;
short arr_5 [10] [10] [10] [10] ;
_Bool arr_7 [10] ;
unsigned int arr_9 [10] [10] [10] [10] [10] [10] ;
long long int arr_19 [10] [10] [10] [10] [10] ;
unsigned long long int arr_20 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-32406;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)25610;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-2998;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 2249427231U : 243446231U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 4023946713512824217LL : -1628054236714745798LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 13112968285625709646ULL : 8793026023211455407ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test(_Bool var_0, _Bool var_1, int var_2, unsigned int var_3, unsigned long long int var_4, unsigned int var_5, _Bool var_6, _Bool var_7, short var_8, unsigned int var_9, long long int var_10, _Bool var_11, short var_12, unsigned int var_14, signed char var_15, int zero, short arr_0 [10] , unsigned short arr_1 [10] , short arr_5 [10] [10] [10] [10] , _Bool arr_7 [10] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_14, var_15, zero, arr_0 , arr_1 , arr_5 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
