#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 566279243U;
unsigned int var_1 = 239461562U;
int var_2 = -949505009;
unsigned long long int var_3 = 10236791145384975750ULL;
long long int var_4 = 8504177327702278921LL;
long long int var_6 = 7217371620777673761LL;
unsigned int var_7 = 3411680404U;
unsigned long long int var_8 = 3039106908306017774ULL;
unsigned long long int var_9 = 15340614612723448014ULL;
signed char var_10 = (signed char)66;
int var_11 = -1983457761;
unsigned char var_12 = (unsigned char)96;
unsigned char var_13 = (unsigned char)92;
signed char var_16 = (signed char)-11;
unsigned int var_17 = 2316320532U;
short var_18 = (short)-4208;
unsigned long long int var_19 = 10530814997617733276ULL;
int zero = 0;
unsigned long long int var_20 = 10189760214166452829ULL;
unsigned int var_21 = 688224045U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 8832882260889358924ULL;
long long int var_24 = 7464679834396527358LL;
signed char var_25 = (signed char)-46;
unsigned char arr_0 [23] ;
unsigned long long int arr_1 [23] ;
unsigned char arr_2 [23] ;
_Bool arr_3 [23] ;
long long int arr_4 [23] [23] [23] ;
unsigned int arr_5 [23] ;
unsigned int arr_7 [23] [23] [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3709819670590133184ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8188054277946337206LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1367603747U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2918770088U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 10164556593708916908ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test(unsigned int var_0, unsigned int var_1, int var_2, unsigned long long int var_3, long long int var_4, long long int var_6, unsigned int var_7, unsigned long long int var_8, unsigned long long int var_9, signed char var_10, int var_11, unsigned char var_12, unsigned char var_13, signed char var_16, unsigned int var_17, short var_18, unsigned long long int var_19, int zero, unsigned char arr_0 [23] , unsigned long long int arr_1 [23] , unsigned char arr_2 [23] , _Bool arr_3 [23] , long long int arr_4 [23] [23] [23] , unsigned int arr_5 [23] , unsigned int arr_7 [23] [23] [23] , unsigned long long int arr_9 [23] [23] [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_16, var_17, var_18, var_19, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_7 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
