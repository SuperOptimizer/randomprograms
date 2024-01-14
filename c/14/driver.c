#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 4826888908415875084ULL;
long long int var_2 = 2771960192389475034LL;
int var_3 = 53709173;
unsigned long long int var_4 = 2661190564564273626ULL;
long long int var_5 = -8747051641516438852LL;
signed char var_6 = (signed char)69;
short var_7 = (short)3618;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3188589889U;
long long int var_10 = 7050652544487941064LL;
unsigned int var_11 = 54746793U;
unsigned long long int var_12 = 13376825969566951652ULL;
int zero = 0;
unsigned int var_13 = 563663681U;
long long int var_14 = 7315325958362945353LL;
unsigned long long int var_15 = 15190171993544504343ULL;
unsigned char var_16 = (unsigned char)164;
unsigned long long int var_17 = 16414816622061664567ULL;
unsigned char var_18 = (unsigned char)75;
unsigned char arr_0 [19] ;
unsigned int arr_1 [19] ;
_Bool arr_2 [19] ;
_Bool arr_3 [19] [19] ;
long long int arr_5 [15] ;
unsigned char arr_4 [19] [19] [19] ;
int arr_7 [15] [15] ;
unsigned char arr_8 [15] ;
unsigned int arr_9 [15] ;
long long int arr_10 [15] ;
short arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 564118296U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 8722582048778550622LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)198 : (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1573431498 : -952711655;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)29 : (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3027526375U : 3151139092U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -5864691394826096479LL : 7635449726355639675LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-4629 : (short)-28983;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test(_Bool var_0, unsigned long long int var_1, long long int var_2, int var_3, unsigned long long int var_4, long long int var_5, signed char var_6, short var_7, _Bool var_8, unsigned int var_9, long long int var_10, unsigned int var_11, unsigned long long int var_12, int zero, unsigned char arr_0 [19] , unsigned int arr_1 [19] , _Bool arr_2 [19] , _Bool arr_3 [19] [19] , long long int arr_5 [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
