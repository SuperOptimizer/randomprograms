#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2928804313U;
unsigned char var_1 = (unsigned char)59;
unsigned short var_2 = (unsigned short)11305;
unsigned short var_3 = (unsigned short)54672;
long long int var_4 = 8639849101227331357LL;
short var_6 = (short)-12854;
signed char var_7 = (signed char)-123;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)33183;
int var_12 = 216743460;
unsigned long long int var_13 = 1132401474639391450ULL;
signed char var_14 = (signed char)125;
int zero = 0;
unsigned char var_15 = (unsigned char)106;
long long int var_16 = -8280383912974442659LL;
unsigned char var_17 = (unsigned char)138;
_Bool var_18 = (_Bool)0;
int var_19 = 252649586;
int var_20 = -1951722414;
unsigned char var_21 = (unsigned char)72;
int var_22 = -963376622;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)250;
unsigned long long int var_25 = 5831976390174321583ULL;
signed char arr_0 [15] ;
_Bool arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
_Bool arr_4 [15] ;
int arr_5 [15] [15] [15] ;
short arr_6 [15] ;
unsigned char arr_8 [15] [15] ;
int arr_9 [15] ;
_Bool arr_10 [15] [15] [15] [15] ;
_Bool arr_12 [15] [15] [15] [15] ;
long long int arr_17 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5412847613014290391ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1946550987;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)25009;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2118401158 : -149421695;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? -8814289257526976971LL : 1846065461763183351LL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test(unsigned int var_0, unsigned char var_1, unsigned short var_2, unsigned short var_3, long long int var_4, short var_6, signed char var_7, _Bool var_8, unsigned short var_9, int var_12, unsigned long long int var_13, signed char var_14, int zero, signed char arr_0 [15] , _Bool arr_1 [15] , _Bool arr_2 [15] , unsigned long long int arr_3 [15] [15] [15] , _Bool arr_4 [15] , int arr_5 [15] [15] [15] , short arr_6 [15] , unsigned char arr_8 [15] [15] , int arr_9 [15] , _Bool arr_10 [15] [15] [15] [15] , _Bool arr_12 [15] [15] [15] [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_8 , arr_9 , arr_10 , arr_12 );
    checksum();
    printf("%llu\n", seed);
}
