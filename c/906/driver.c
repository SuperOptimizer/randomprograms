#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)480;
unsigned short var_1 = (unsigned short)38556;
long long int var_2 = 3082592043122894456LL;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 627144043U;
unsigned int var_7 = 4021602303U;
unsigned char var_8 = (unsigned char)51;
int var_12 = 1267716281;
unsigned char var_13 = (unsigned char)143;
unsigned char var_14 = (unsigned char)206;
unsigned long long int var_15 = 11000488173189371880ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1962975721;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)171;
short var_20 = (short)29370;
unsigned long long int arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned int arr_2 [14] ;
unsigned char arr_6 [14] ;
int arr_7 [14] [14] [14] ;
unsigned short arr_10 [14] [14] [14] ;
unsigned int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 17557775594206670649ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2601453542U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -769295394;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)15240;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 2074148949U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test(short var_0, unsigned short var_1, long long int var_2, _Bool var_3, unsigned int var_5, unsigned int var_7, unsigned char var_8, int var_12, unsigned char var_13, unsigned char var_14, unsigned long long int var_15, int zero, unsigned long long int arr_0 [14] , unsigned char arr_1 [14] , unsigned int arr_2 [14] , unsigned char arr_6 [14] , int arr_7 [14] [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
