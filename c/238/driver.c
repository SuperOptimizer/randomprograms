#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5182549826894349034ULL;
unsigned long long int var_1 = 17077889982158775020ULL;
signed char var_2 = (signed char)-50;
unsigned int var_3 = 3671885023U;
_Bool var_4 = (_Bool)0;
long long int var_7 = -9127325426199176723LL;
long long int var_8 = -3589637293751171734LL;
short var_9 = (short)26725;
long long int var_10 = 4165330032715695201LL;
unsigned int var_11 = 2445301691U;
unsigned long long int var_12 = 13808610088499478723ULL;
short var_13 = (short)19936;
unsigned char var_14 = (unsigned char)204;
unsigned int var_15 = 1696953220U;
long long int var_16 = 5359263601916902392LL;
int var_18 = -373388357;
int zero = 0;
unsigned short var_19 = (unsigned short)48667;
unsigned long long int var_20 = 4787428580006840107ULL;
_Bool var_21 = (_Bool)0;
int var_22 = 40262165;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)38756;
unsigned long long int var_25 = 9481501252081833042ULL;
signed char var_26 = (signed char)-120;
unsigned long long int var_27 = 5028961558698789506ULL;
short var_28 = (short)-21713;
unsigned char var_29 = (unsigned char)62;
int var_30 = -1487819605;
short arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned int arr_2 [14] ;
_Bool arr_6 [14] [14] [14] ;
unsigned short arr_7 [14] [14] [14] [14] ;
_Bool arr_8 [14] ;
short arr_9 [14] [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] [14] [14] [14] ;
short arr_11 [14] [14] ;
signed char arr_16 [14] [14] [14] [14] ;
unsigned char arr_4 [14] [14] [14] ;
long long int arr_17 [14] [14] [14] ;
unsigned long long int arr_24 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-25292;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 12111420296475867595ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3672867546U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)492;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-6018;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 281398369U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-30438;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -9181613683246247026LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 113518042499993540ULL : 14167728125435826010ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test(unsigned long long int var_0, unsigned long long int var_1, signed char var_2, unsigned int var_3, _Bool var_4, long long int var_7, long long int var_8, short var_9, long long int var_10, unsigned int var_11, unsigned long long int var_12, short var_13, unsigned char var_14, unsigned int var_15, long long int var_16, int var_18, int zero, short arr_0 [14] , unsigned long long int arr_1 [14] , unsigned int arr_2 [14] , _Bool arr_6 [14] [14] [14] , unsigned short arr_7 [14] [14] [14] [14] , _Bool arr_8 [14] , short arr_9 [14] [14] [14] [14] , unsigned int arr_10 [14] [14] [14] [14] [14] [14] , short arr_11 [14] [14] , signed char arr_16 [14] [14] [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_18, zero, arr_0 , arr_1 , arr_2 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_16 );
    checksum();
    printf("%llu\n", seed);
}
