#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14660;
unsigned char var_2 = (unsigned char)143;
long long int var_3 = -2512088215432061488LL;
_Bool var_5 = (_Bool)0;
int var_7 = 907009282;
short var_8 = (short)-962;
unsigned char var_9 = (unsigned char)241;
int var_10 = 491499685;
unsigned int var_12 = 1539062381U;
unsigned char var_15 = (unsigned char)144;
int var_17 = 1337183589;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7760192019992142091ULL;
short var_22 = (short)27459;
_Bool var_23 = (_Bool)0;
int var_24 = 423222599;
short var_25 = (short)-14908;
unsigned short var_26 = (unsigned short)29713;
int arr_0 [24] ;
unsigned char arr_1 [24] ;
short arr_2 [24] [24] ;
_Bool arr_3 [24] [24] ;
int arr_4 [24] [24] [24] [24] ;
unsigned long long int arr_5 [24] [24] ;
long long int arr_9 [16] ;
_Bool arr_10 [16] [16] ;
unsigned char arr_14 [16] [16] [16] ;
unsigned char arr_6 [24] ;
short arr_11 [16] [16] ;
short arr_12 [16] [16] ;
_Bool arr_13 [16] [16] ;
unsigned char arr_18 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1368051682;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-26338;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 288810770;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 16219765056970351138ULL : 14847249158368245841ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 728951182706442640LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-26882;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (short)18280;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)144 : (unsigned char)238;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test(short var_0, unsigned char var_2, long long int var_3, _Bool var_5, int var_7, short var_8, unsigned char var_9, int var_10, unsigned int var_12, unsigned char var_15, int var_17, int zero, int arr_0 [24] , unsigned char arr_1 [24] , short arr_2 [24] [24] , _Bool arr_3 [24] [24] , int arr_4 [24] [24] [24] [24] , unsigned long long int arr_5 [24] [24] , long long int arr_9 [16] , _Bool arr_10 [16] [16] , unsigned char arr_14 [16] [16] [16] );

int main() {
    init();
    test(var_0, var_2, var_3, var_5, var_7, var_8, var_9, var_10, var_12, var_15, var_17, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_9 , arr_10 , arr_14 );
    checksum();
    printf("%llu\n", seed);
}
