#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25872;
short var_2 = (short)19440;
long long int var_5 = 4101197020581565587LL;
int var_8 = -1325676615;
unsigned long long int var_9 = 6674762891026452754ULL;
unsigned char var_10 = (unsigned char)133;
int zero = 0;
unsigned int var_12 = 100251273U;
signed char var_13 = (signed char)-26;
unsigned long long int var_14 = 8639324188746036673ULL;
unsigned long long int var_15 = 9959424029930174663ULL;
long long int var_16 = 8260121615558375421LL;
signed char var_17 = (signed char)-62;
unsigned int var_18 = 3597262598U;
signed char var_19 = (signed char)-51;
unsigned short var_20 = (unsigned short)12861;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)59;
unsigned long long int var_23 = 6049293627244523692ULL;
long long int var_24 = 4520893818896881511LL;
unsigned short var_25 = (unsigned short)23918;
unsigned char arr_0 [23] ;
signed char arr_1 [23] ;
unsigned int arr_5 [16] [16] ;
unsigned char arr_8 [16] ;
_Bool arr_9 [16] ;
long long int arr_10 [16] ;
unsigned int arr_14 [16] [16] ;
int arr_17 [16] [16] [16] [16] ;
unsigned char arr_18 [16] [16] [16] [16] [16] ;
signed char arr_2 [23] ;
long long int arr_3 [23] ;
unsigned char arr_4 [23] ;
long long int arr_11 [16] ;
unsigned int arr_19 [16] ;
unsigned char arr_20 [16] ;
unsigned int arr_21 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 93921824U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 5975922009362248938LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = 986103175U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -483750976;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-89 : (signed char)-119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1429282631662004310LL : 1545656625851985757LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)85 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -4425371787353405529LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 868625708U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1870820284U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned short var_0, short var_2, long long int var_5, int var_8, unsigned long long int var_9, unsigned char var_10, int zero, unsigned char arr_0 [23] , signed char arr_1 [23] , unsigned int arr_5 [16] [16] , unsigned char arr_8 [16] , _Bool arr_9 [16] , long long int arr_10 [16] , unsigned int arr_14 [16] [16] , int arr_17 [16] [16] [16] [16] , unsigned char arr_18 [16] [16] [16] [16] [16] );

int main() {
    init();
    test(var_0, var_2, var_5, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_5 , arr_8 , arr_9 , arr_10 , arr_14 , arr_17 , arr_18 );
    checksum();
    printf("%llu\n", seed);
}
