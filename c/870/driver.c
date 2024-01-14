#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned int var_1 = 166529243U;
unsigned int var_2 = 2992890957U;
unsigned long long int var_5 = 16970234696254428825ULL;
long long int var_6 = -3397083912076349359LL;
unsigned int var_7 = 1506729699U;
signed char var_8 = (signed char)-47;
unsigned int var_10 = 4150552353U;
int zero = 0;
short var_11 = (short)-13464;
unsigned long long int var_12 = 12385775670822727658ULL;
unsigned char var_13 = (unsigned char)199;
unsigned char var_14 = (unsigned char)224;
int var_15 = 426273269;
short var_16 = (short)-26479;
unsigned short arr_0 [16] ;
_Bool arr_1 [16] ;
unsigned char arr_4 [16] ;
int arr_5 [16] ;
long long int arr_6 [16] [16] [16] ;
unsigned char arr_7 [16] [16] [16] ;
short arr_11 [16] [16] ;
short arr_2 [16] ;
int arr_8 [16] [16] [16] ;
unsigned long long int arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)6315;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 328352168;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 7025096331170679248LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (short)30495;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)9785;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -374629464;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 6146739384730727704ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test(unsigned char var_0, unsigned int var_1, unsigned int var_2, unsigned long long int var_5, long long int var_6, unsigned int var_7, signed char var_8, unsigned int var_10, int zero, unsigned short arr_0 [16] , _Bool arr_1 [16] , unsigned char arr_4 [16] , int arr_5 [16] , long long int arr_6 [16] [16] [16] , unsigned char arr_7 [16] [16] [16] , short arr_11 [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_6, var_7, var_8, var_10, zero, arr_0 , arr_1 , arr_4 , arr_5 , arr_6 , arr_7 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
