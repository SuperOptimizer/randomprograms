#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3786928717240051229LL;
short var_1 = (short)-29067;
unsigned char var_3 = (unsigned char)16;
short var_5 = (short)-15207;
int var_7 = 1467616108;
unsigned char var_8 = (unsigned char)225;
short var_10 = (short)14599;
unsigned short var_11 = (unsigned short)36562;
unsigned int var_13 = 125973954U;
unsigned char var_14 = (unsigned char)204;
unsigned short var_15 = (unsigned short)45477;
unsigned short var_16 = (unsigned short)4254;
unsigned int var_18 = 1536408468U;
int zero = 0;
unsigned int var_19 = 2030443864U;
short var_20 = (short)-31954;
unsigned long long int var_21 = 2102867141163575717ULL;
int var_22 = 1425019580;
unsigned short var_23 = (unsigned short)13769;
unsigned short var_24 = (unsigned short)41640;
short var_25 = (short)18764;
long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned char arr_2 [13] ;
unsigned int arr_3 [13] [13] [13] ;
long long int arr_4 [13] [13] [13] ;
unsigned long long int arr_5 [13] [13] [13] ;
int arr_8 [13] [13] [13] [13] ;
short arr_9 [13] [13] [13] [13] [13] ;
unsigned int arr_11 [13] [13] [13] [13] [13] ;
short arr_12 [13] [13] [13] [13] [13] ;
int arr_13 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1292662539339811308LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)237 : (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 697980297U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 438514425270178366LL : 1251390132618332402LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 18124337041654272099ULL : 4044864535168244966ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 842566885 : -1867589791;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)11649;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 450299024U : 2906072880U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)22460 : (short)-2861;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1393050430 : -1916742992;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test(long long int var_0, short var_1, unsigned char var_3, short var_5, int var_7, unsigned char var_8, short var_10, unsigned short var_11, unsigned int var_13, unsigned char var_14, unsigned short var_15, unsigned short var_16, unsigned int var_18, int zero, long long int arr_0 [13] , unsigned char arr_1 [13] , unsigned char arr_2 [13] , unsigned int arr_3 [13] [13] [13] , long long int arr_4 [13] [13] [13] , unsigned long long int arr_5 [13] [13] [13] , int arr_8 [13] [13] [13] [13] , short arr_9 [13] [13] [13] [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_7, var_8, var_10, var_11, var_13, var_14, var_15, var_16, var_18, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_8 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
