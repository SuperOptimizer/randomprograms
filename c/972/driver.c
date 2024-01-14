#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4284510278502283636LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-13;
signed char var_3 = (signed char)-95;
unsigned long long int var_5 = 13931126810833307736ULL;
unsigned long long int var_6 = 4191779675158290156ULL;
signed char var_7 = (signed char)-25;
unsigned short var_8 = (unsigned short)22486;
unsigned char var_9 = (unsigned char)164;
short var_10 = (short)-19895;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 10661728941724066432ULL;
signed char var_13 = (signed char)-30;
int zero = 0;
short var_14 = (short)26832;
short var_15 = (short)155;
unsigned char var_16 = (unsigned char)47;
int var_17 = 1399411681;
signed char var_18 = (signed char)119;
unsigned char var_19 = (unsigned char)1;
signed char var_20 = (signed char)-49;
unsigned long long int arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
_Bool arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
_Bool arr_4 [14] [14] [14] ;
_Bool arr_5 [14] ;
signed char arr_6 [14] ;
unsigned short arr_7 [14] ;
unsigned char arr_8 [14] [14] [14] [14] [14] ;
unsigned short arr_9 [14] ;
unsigned long long int arr_10 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_11 [14] [14] [14] ;
short arr_12 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 8987548328507340536ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2550685085U : 2835759111U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)6379;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5679 : (unsigned short)32579;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 13816461739420639962ULL : 4681491106603165071ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)228 : (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-6140 : (short)12068;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test(long long int var_0, _Bool var_1, signed char var_2, signed char var_3, unsigned long long int var_5, unsigned long long int var_6, signed char var_7, unsigned short var_8, unsigned char var_9, short var_10, _Bool var_11, unsigned long long int var_12, signed char var_13, int zero, unsigned long long int arr_0 [14] [14] , unsigned char arr_1 [14] , _Bool arr_2 [14] , unsigned int arr_3 [14] [14] , _Bool arr_4 [14] [14] [14] , _Bool arr_5 [14] , signed char arr_6 [14] , unsigned short arr_7 [14] , unsigned char arr_8 [14] [14] [14] [14] [14] , unsigned short arr_9 [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
