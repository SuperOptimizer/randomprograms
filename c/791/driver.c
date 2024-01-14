#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17565075915919752162ULL;
unsigned int var_4 = 3470047991U;
_Bool var_6 = (_Bool)1;
long long int var_7 = -8436688298311053667LL;
signed char var_8 = (signed char)-108;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1721903975U;
long long int var_12 = 2624048637549925818LL;
unsigned long long int var_13 = 13468634530809884446ULL;
unsigned long long int var_14 = 957621274517500850ULL;
signed char var_15 = (signed char)-108;
_Bool var_17 = (_Bool)0;
long long int var_18 = -6312481067977308438LL;
signed char var_19 = (signed char)-54;
int zero = 0;
long long int var_20 = -7132784137251819614LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)66;
short var_25 = (short)-32326;
signed char var_26 = (signed char)-30;
unsigned int var_27 = 3435395192U;
short arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
_Bool arr_3 [14] [14] ;
unsigned int arr_4 [14] [14] [14] ;
_Bool arr_5 [14] [14] [14] ;
_Bool arr_7 [14] [14] [14] [14] ;
long long int arr_9 [14] [14] [14] [14] ;
_Bool arr_6 [14] [14] [14] ;
signed char arr_14 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)1033;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2205939121U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 7937228237743893975ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2361695744U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -3106193270766891335LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-12 : (signed char)-83;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test(unsigned long long int var_3, unsigned int var_4, _Bool var_6, long long int var_7, signed char var_8, _Bool var_10, unsigned int var_11, long long int var_12, unsigned long long int var_13, unsigned long long int var_14, signed char var_15, _Bool var_17, long long int var_18, signed char var_19, int zero, short arr_0 [14] [14] , unsigned int arr_1 [14] , unsigned long long int arr_2 [14] , _Bool arr_3 [14] [14] , unsigned int arr_4 [14] [14] [14] , _Bool arr_5 [14] [14] [14] , _Bool arr_7 [14] [14] [14] [14] , long long int arr_9 [14] [14] [14] [14] );

int main() {
    init();
    test(var_3, var_4, var_6, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_17, var_18, var_19, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_7 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
