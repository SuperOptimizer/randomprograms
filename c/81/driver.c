#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2427481140030248789LL;
unsigned long long int var_3 = 15614257678210047423ULL;
signed char var_5 = (signed char)66;
int var_6 = 1221080123;
int var_8 = -1835237260;
long long int var_9 = 683162994042663993LL;
unsigned char var_13 = (unsigned char)251;
unsigned int var_14 = 1378432135U;
signed char var_16 = (signed char)-72;
signed char var_17 = (signed char)122;
int zero = 0;
unsigned int var_18 = 3112405739U;
signed char var_19 = (signed char)-76;
signed char var_20 = (signed char)-70;
int var_21 = 368503201;
unsigned short var_22 = (unsigned short)25017;
unsigned long long int var_23 = 18240726379823735779ULL;
unsigned char arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
unsigned int arr_3 [11] [11] [11] ;
unsigned char arr_4 [11] [11] [11] ;
unsigned long long int arr_6 [11] [11] [11] ;
unsigned char arr_2 [11] [11] ;
signed char arr_9 [11] [11] [11] [11] ;
unsigned short arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 9607682801202535531ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3194938163U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2915775684284513556ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned short)15022;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test(long long int var_1, unsigned long long int var_3, signed char var_5, int var_6, int var_8, long long int var_9, unsigned char var_13, unsigned int var_14, signed char var_16, signed char var_17, int zero, unsigned char arr_0 [11] [11] , unsigned long long int arr_1 [11] , unsigned int arr_3 [11] [11] [11] , unsigned char arr_4 [11] [11] [11] , unsigned long long int arr_6 [11] [11] [11] );

int main() {
    init();
    test(var_1, var_3, var_5, var_6, var_8, var_9, var_13, var_14, var_16, var_17, zero, arr_0 , arr_1 , arr_3 , arr_4 , arr_6 );
    checksum();
    printf("%llu\n", seed);
}
