#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1312237345;
unsigned int var_1 = 3349862721U;
int var_2 = -640637626;
unsigned char var_3 = (unsigned char)73;
unsigned int var_4 = 2067887390U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 292433372U;
short var_7 = (short)-19208;
long long int var_8 = -4945585160743016478LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)66;
unsigned short var_11 = (unsigned short)6933;
signed char var_13 = (signed char)112;
int zero = 0;
unsigned long long int var_15 = 16724042056147727883ULL;
short var_16 = (short)2508;
long long int var_17 = -1159359149410054739LL;
signed char var_18 = (signed char)-81;
unsigned char var_19 = (unsigned char)199;
long long int var_20 = 843301021000025082LL;
unsigned char var_21 = (unsigned char)141;
unsigned char var_22 = (unsigned char)94;
long long int var_23 = -3726378120824880570LL;
unsigned short var_24 = (unsigned short)6825;
unsigned long long int var_25 = 1589458835662496165ULL;
unsigned char var_26 = (unsigned char)68;
unsigned char arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
unsigned char arr_2 [23] ;
_Bool arr_3 [23] [23] [23] ;
unsigned int arr_4 [23] ;
long long int arr_5 [23] [23] [23] [23] ;
unsigned long long int arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] [23] [23] ;
unsigned short arr_12 [23] ;
unsigned short arr_14 [23] [23] [23] [23] ;
unsigned int arr_13 [23] ;
unsigned char arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)35396;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1334289518U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -1012493115659957714LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 990770079689167049ULL : 17005018882098436786ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)115 : (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)57834;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)20924 : (unsigned short)46262;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 2671937871U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)163;
}

void checksum() {
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test(int var_0, unsigned int var_1, int var_2, unsigned char var_3, unsigned int var_4, _Bool var_5, unsigned int var_6, short var_7, long long int var_8, _Bool var_9, signed char var_10, unsigned short var_11, signed char var_13, int zero, unsigned char arr_0 [23] [23] , unsigned short arr_1 [23] , unsigned char arr_2 [23] , _Bool arr_3 [23] [23] [23] , unsigned int arr_4 [23] , long long int arr_5 [23] [23] [23] [23] , unsigned long long int arr_6 [23] [23] [23] , unsigned char arr_7 [23] [23] [23] , unsigned short arr_12 [23] , unsigned short arr_14 [23] [23] [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_13, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_12 , arr_14 );
    checksum();
    printf("%llu\n", seed);
}
