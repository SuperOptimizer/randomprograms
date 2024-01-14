#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1739049786;
long long int var_1 = 6297996317586266901LL;
unsigned long long int var_2 = 14713710822103290347ULL;
int var_3 = -219102606;
int var_4 = 385608881;
unsigned int var_5 = 1919596891U;
unsigned char var_6 = (unsigned char)55;
signed char var_7 = (signed char)-102;
unsigned int var_8 = 3356041065U;
unsigned char var_9 = (unsigned char)192;
unsigned char var_10 = (unsigned char)63;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)30;
unsigned char var_13 = (unsigned char)162;
unsigned char var_14 = (unsigned char)220;
unsigned char var_15 = (unsigned char)191;
long long int var_16 = 5973308166961107064LL;
short var_17 = (short)23484;
int var_18 = 1380285226;
long long int var_19 = -6465653595928508526LL;
int zero = 0;
int var_20 = 1916497602;
short var_21 = (short)18893;
short var_22 = (short)2529;
short var_23 = (short)28417;
long long int var_24 = -6538015917940036333LL;
_Bool var_25 = (_Bool)0;
short var_26 = (short)-15819;
long long int var_27 = -1071678278475459647LL;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 3183922351872677774ULL;
int arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
_Bool arr_6 [16] ;
unsigned char arr_7 [16] [16] ;
unsigned long long int arr_10 [16] [16] ;
long long int arr_13 [16] [16] [16] [16] ;
long long int arr_19 [16] [16] ;
int arr_2 [17] ;
unsigned int arr_3 [17] [17] ;
int arr_11 [16] ;
long long int arr_12 [16] ;
unsigned long long int arr_15 [16] [16] [16] ;
_Bool arr_16 [16] [16] [16] [16] ;
unsigned int arr_20 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -813015771;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1461460693U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 12111895337679307218ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2545564940834981708LL : 6251090840346717737LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = -2112977799402077842LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -243682784;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 3580534454U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1809181110 : 1018006234;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1821579895076792908LL : 8752164031425651620LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3670857202785951120ULL : 9086476133691126915ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 2560768254U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test(int var_0, long long int var_1, unsigned long long int var_2, int var_3, int var_4, unsigned int var_5, unsigned char var_6, signed char var_7, unsigned int var_8, unsigned char var_9, unsigned char var_10, _Bool var_11, unsigned char var_12, unsigned char var_13, unsigned char var_14, unsigned char var_15, long long int var_16, short var_17, int var_18, long long int var_19, int zero, int arr_0 [17] [17] , unsigned int arr_1 [17] , _Bool arr_6 [16] , unsigned char arr_7 [16] [16] , unsigned long long int arr_10 [16] [16] , long long int arr_13 [16] [16] [16] [16] , long long int arr_19 [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, var_19, zero, arr_0 , arr_1 , arr_6 , arr_7 , arr_10 , arr_13 , arr_19 );
    checksum();
    printf("%llu\n", seed);
}
