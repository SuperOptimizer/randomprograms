#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10913284518103259254ULL;
short var_1 = (short)-4584;
short var_2 = (short)5675;
unsigned int var_3 = 4289188378U;
int var_4 = -1485779457;
unsigned int var_5 = 1393231210U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)76;
signed char var_8 = (signed char)-100;
signed char var_9 = (signed char)-103;
long long int var_10 = -30596468574048485LL;
unsigned short var_11 = (unsigned short)19965;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)39781;
unsigned short var_16 = (unsigned short)60623;
unsigned long long int var_17 = 15003480719108295204ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)33263;
signed char var_20 = (signed char)56;
long long int var_21 = 1816760794050305302LL;
long long int arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
long long int arr_2 [16] [16] ;
long long int arr_3 [16] [16] ;
unsigned short arr_6 [16] ;
unsigned short arr_7 [16] [16] [16] [16] ;
_Bool arr_9 [16] [16] [16] [16] ;
unsigned int arr_10 [16] [16] [16] [16] [16] ;
long long int arr_11 [16] [16] [16] ;
int arr_12 [18] [18] ;
unsigned long long int arr_13 [18] ;
unsigned long long int arr_15 [18] [18] [18] ;
unsigned short arr_16 [18] [18] ;
long long int arr_17 [18] [18] ;
long long int arr_18 [18] [18] [18] ;
unsigned short arr_19 [18] [18] ;
_Bool arr_21 [18] [18] [18] [18] ;
unsigned long long int arr_4 [16] ;
short arr_14 [18] ;
_Bool arr_22 [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 4084998841605888675LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)46427;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 7360493051699425688LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2579908840591689357LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)9564;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43187;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 655806567U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -7724154196806968416LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = -882613984;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 14896428329269005878ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 5355686525419635922ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)11765;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = -2118626032808349163LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -841684404052109779LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)49225;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 15133622239815378582ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (short)5338;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test(unsigned long long int var_0, short var_1, short var_2, unsigned int var_3, int var_4, unsigned int var_5, _Bool var_6, unsigned char var_7, signed char var_8, signed char var_9, long long int var_10, unsigned short var_11, int zero, long long int arr_0 [16] [16] , unsigned short arr_1 [16] , long long int arr_2 [16] [16] , long long int arr_3 [16] [16] , unsigned short arr_6 [16] , unsigned short arr_7 [16] [16] [16] [16] , _Bool arr_9 [16] [16] [16] [16] , unsigned int arr_10 [16] [16] [16] [16] [16] , long long int arr_11 [16] [16] [16] , int arr_12 [18] [18] , unsigned long long int arr_13 [18] , unsigned long long int arr_15 [18] [18] [18] , unsigned short arr_16 [18] [18] , long long int arr_17 [18] [18] , long long int arr_18 [18] [18] [18] , unsigned short arr_19 [18] [18] , _Bool arr_21 [18] [18] [18] [18] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_6 , arr_7 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_15 , arr_16 , arr_17 , arr_18 , arr_19 , arr_21 );
    checksum();
    printf("%llu\n", seed);
}
