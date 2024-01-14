#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13040117760491734057ULL;
unsigned long long int var_3 = 10416155497649830834ULL;
unsigned long long int var_7 = 11177381858194304031ULL;
unsigned short var_10 = (unsigned short)5780;
unsigned long long int var_12 = 18062838520985305557ULL;
int var_15 = -1268900153;
short var_17 = (short)-28287;
int var_18 = -613252723;
int zero = 0;
unsigned short var_19 = (unsigned short)27894;
unsigned long long int var_20 = 1331111992932278346ULL;
unsigned short var_21 = (unsigned short)50047;
unsigned long long int var_22 = 2187535836998831046ULL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)34504;
_Bool arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
unsigned short arr_2 [20] [20] [20] ;
short arr_3 [20] ;
_Bool arr_4 [20] [20] ;
unsigned long long int arr_5 [20] [20] [20] [20] ;
unsigned char arr_6 [20] [20] [20] ;
unsigned short arr_7 [20] ;
unsigned long long int arr_8 [20] [20] ;
short arr_10 [20] [20] ;
long long int arr_11 [20] [20] [20] [20] [20] [20] ;
long long int arr_13 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)871;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)32023;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 17110735001420946628ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)57 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44039 : (unsigned short)35142;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 17608149549449078863ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-14688 : (short)688;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 6967013420845979534LL : -1171898400191870697LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5478017559272736733LL : 8003716039867444024LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned long long int var_0, unsigned long long int var_3, unsigned long long int var_7, unsigned short var_10, unsigned long long int var_12, int var_15, short var_17, int var_18, int zero, _Bool arr_0 [20] [20] , unsigned char arr_1 [20] , unsigned short arr_2 [20] [20] [20] , short arr_3 [20] , _Bool arr_4 [20] [20] , unsigned long long int arr_5 [20] [20] [20] [20] , unsigned char arr_6 [20] [20] [20] , unsigned short arr_7 [20] , unsigned long long int arr_8 [20] [20] , short arr_10 [20] [20] , long long int arr_11 [20] [20] [20] [20] [20] [20] );

int main() {
    init();
    test(var_0, var_3, var_7, var_10, var_12, var_15, var_17, var_18, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_10 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
