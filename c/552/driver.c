#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8581;
signed char var_2 = (signed char)-81;
unsigned short var_3 = (unsigned short)38045;
unsigned char var_4 = (unsigned char)5;
long long int var_5 = 7227174608836079396LL;
unsigned char var_6 = (unsigned char)241;
signed char var_7 = (signed char)-113;
signed char var_9 = (signed char)-114;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)58198;
int zero = 0;
short var_13 = (short)-15795;
unsigned long long int var_14 = 16164260025229036919ULL;
int var_15 = -224980081;
unsigned char var_16 = (unsigned char)185;
long long int var_17 = -3508315314862137190LL;
long long int var_18 = -8562181683875242141LL;
signed char var_19 = (signed char)26;
unsigned char var_20 = (unsigned char)50;
int arr_1 [19] ;
unsigned int arr_2 [19] ;
unsigned char arr_4 [19] [19] ;
short arr_6 [19] ;
signed char arr_8 [19] [19] ;
int arr_9 [19] [19] ;
unsigned char arr_10 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1580368715 : -962720103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 3914334845U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)9 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)9767;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-53 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -1786807566 : 716421473;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)245 : (unsigned char)231;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test(short var_1, signed char var_2, unsigned short var_3, unsigned char var_4, long long int var_5, unsigned char var_6, signed char var_7, signed char var_9, _Bool var_10, _Bool var_11, unsigned short var_12, int zero, int arr_1 [19] , unsigned int arr_2 [19] , unsigned char arr_4 [19] [19] , short arr_6 [19] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_12, zero, arr_1 , arr_2 , arr_4 , arr_6 );
    checksum();
    printf("%llu\n", seed);
}
