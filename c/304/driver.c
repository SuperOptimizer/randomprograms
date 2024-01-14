#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2138462992U;
long long int var_1 = 56855269999569679LL;
signed char var_7 = (signed char)-27;
long long int var_8 = -8751348440252189818LL;
unsigned char var_9 = (unsigned char)133;
int var_13 = 229284209;
unsigned long long int var_16 = 5382155594426849225ULL;
unsigned short var_17 = (unsigned short)62694;
unsigned short var_19 = (unsigned short)43345;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)99;
signed char var_22 = (signed char)-16;
unsigned long long int var_23 = 17415573903682683167ULL;
unsigned long long int arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned short arr_3 [16] [16] ;
_Bool arr_4 [16] ;
long long int arr_7 [16] [16] [16] [16] ;
long long int arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 10073754677977658135ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 16803990338076646914ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)4114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4102443361084521892LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1108698975851625291LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test(unsigned int var_0, long long int var_1, signed char var_7, long long int var_8, unsigned char var_9, int var_13, unsigned long long int var_16, unsigned short var_17, unsigned short var_19, int zero, unsigned long long int arr_0 [16] [16] , unsigned long long int arr_1 [16] , unsigned char arr_2 [16] [16] , unsigned short arr_3 [16] [16] , _Bool arr_4 [16] );

int main() {
    init();
    test(var_0, var_1, var_7, var_8, var_9, var_13, var_16, var_17, var_19, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
