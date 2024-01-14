#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5430375064799872341LL;
unsigned long long int var_1 = 10453124566233968833ULL;
short var_2 = (short)-22125;
unsigned char var_3 = (unsigned char)146;
short var_4 = (short)3077;
long long int var_6 = 7941324421521454794LL;
int var_7 = 45356986;
long long int var_8 = 1636999509576680612LL;
unsigned int var_9 = 182248233U;
int zero = 0;
unsigned short var_10 = (unsigned short)42063;
unsigned int var_11 = 3059467705U;
int var_12 = -700015154;
unsigned short var_13 = (unsigned short)22806;
unsigned char arr_2 [22] [22] ;
unsigned long long int arr_3 [22] [22] ;
short arr_4 [22] [22] ;
short arr_5 [22] [22] [22] ;
int arr_6 [22] [22] ;
signed char arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 16997031399153014938ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-5712 : (short)13934;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)20672 : (short)20491;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 722796296 : -952807445;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)-5;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test(long long int var_0, unsigned long long int var_1, short var_2, unsigned char var_3, short var_4, long long int var_6, int var_7, long long int var_8, unsigned int var_9, int zero, unsigned char arr_2 [22] [22] , unsigned long long int arr_3 [22] [22] , short arr_4 [22] [22] , short arr_5 [22] [22] [22] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, zero, arr_2 , arr_3 , arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
