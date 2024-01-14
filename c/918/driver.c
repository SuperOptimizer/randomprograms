#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12512701339267295856ULL;
unsigned short var_4 = (unsigned short)5180;
unsigned long long int var_5 = 10677984326571724080ULL;
unsigned long long int var_6 = 15468527078156713445ULL;
unsigned int var_7 = 1570622726U;
unsigned long long int var_9 = 1662905379077587985ULL;
unsigned short var_10 = (unsigned short)27933;
int zero = 0;
unsigned char var_11 = (unsigned char)49;
unsigned long long int var_12 = 11804878275111445720ULL;
unsigned short var_13 = (unsigned short)53690;
unsigned long long int var_14 = 14486444676154522897ULL;
unsigned short var_15 = (unsigned short)45073;
unsigned int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned char arr_2 [12] ;
unsigned short arr_4 [12] ;
unsigned char arr_5 [12] ;
unsigned long long int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2617064253U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 11787136380853138499ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)57143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 1899084425913911823ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test(unsigned long long int var_2, unsigned short var_4, unsigned long long int var_5, unsigned long long int var_6, unsigned int var_7, unsigned long long int var_9, unsigned short var_10, int zero, unsigned int arr_0 [12] , unsigned long long int arr_1 [12] , unsigned char arr_2 [12] , unsigned short arr_4 [12] );

int main() {
    init();
    test(var_2, var_4, var_5, var_6, var_7, var_9, var_10, zero, arr_0 , arr_1 , arr_2 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
