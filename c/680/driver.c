#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8283579227928172533LL;
long long int var_1 = 560949966513047772LL;
long long int var_2 = 180327639793985594LL;
unsigned short var_3 = (unsigned short)55612;
long long int var_4 = -6255549353386017603LL;
long long int var_5 = -6165975897143583826LL;
signed char var_6 = (signed char)78;
long long int var_7 = 6958115756312529862LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)32;
int zero = 0;
int var_12 = -421446031;
int var_13 = -1911298231;
long long int var_14 = 2495755604903151227LL;
unsigned long long int var_15 = 4544701998888939564ULL;
int var_16 = 640487198;
unsigned char var_17 = (unsigned char)254;
int var_18 = -1785906419;
unsigned short var_19 = (unsigned short)48215;
unsigned int var_20 = 2241939915U;
unsigned short var_21 = (unsigned short)38101;
int var_22 = 374816293;
long long int var_23 = 5086725095493474721LL;
unsigned int arr_0 [24] ;
_Bool arr_1 [24] ;
long long int arr_2 [24] [24] ;
unsigned int arr_4 [24] [24] [24] ;
unsigned int arr_5 [24] [24] ;
int arr_6 [24] [24] [24] ;
signed char arr_7 [24] [24] ;
unsigned int arr_12 [24] ;
_Bool arr_15 [24] [24] [24] ;
long long int arr_16 [24] [24] [24] ;
int arr_22 [12] [12] ;
long long int arr_3 [24] ;
unsigned short arr_8 [24] ;
unsigned short arr_9 [24] [24] ;
unsigned short arr_10 [24] ;
_Bool arr_11 [24] ;
short arr_14 [24] [24] ;
unsigned long long int arr_20 [24] [24] [24] ;
int arr_21 [24] [24] ;
int arr_25 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 591974045U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 824011928148006239LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 893176713U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 2990343396U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 384188076;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 3755185432U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 4530614068883434999LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = -147678527;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 5080834875657183321LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)52120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)10138;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)13915;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (short)11623;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 923868506881259201ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = -1680828614;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = 1204067267;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test(long long int var_0, long long int var_1, long long int var_2, unsigned short var_3, long long int var_4, long long int var_5, signed char var_6, long long int var_7, _Bool var_8, unsigned char var_9, int zero, unsigned int arr_0 [24] , _Bool arr_1 [24] , long long int arr_2 [24] [24] , unsigned int arr_4 [24] [24] [24] , unsigned int arr_5 [24] [24] , int arr_6 [24] [24] [24] , signed char arr_7 [24] [24] , unsigned int arr_12 [24] , _Bool arr_15 [24] [24] [24] , long long int arr_16 [24] [24] [24] , int arr_22 [12] [12] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_6 , arr_7 , arr_12 , arr_15 , arr_16 , arr_22 );
    checksum();
    printf("%llu\n", seed);
}
