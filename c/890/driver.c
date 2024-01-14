#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40587;
long long int var_1 = -4729236404149332928LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)215;
unsigned int var_4 = 1654009176U;
signed char var_5 = (signed char)-54;
short var_6 = (short)25682;
unsigned short var_7 = (unsigned short)7813;
unsigned int var_8 = 2818823707U;
signed char var_9 = (signed char)13;
short var_10 = (short)-1025;
unsigned int var_11 = 54738903U;
int var_12 = -61629438;
long long int var_13 = -1494782619456160012LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 371991844U;
long long int var_16 = 2719651875113130938LL;
signed char var_17 = (signed char)-90;
short var_18 = (short)-1586;
signed char var_19 = (signed char)-116;
_Bool var_20 = (_Bool)1;
long long int var_21 = -9177025478104178956LL;
int var_22 = -320902462;
long long int var_23 = 4012225524387948720LL;
short var_24 = (short)25305;
_Bool var_25 = (_Bool)0;
_Bool arr_0 [19] ;
_Bool arr_1 [19] [19] ;
_Bool arr_2 [17] ;
long long int arr_3 [17] ;
short arr_4 [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned short arr_6 [17] [17] ;
unsigned short arr_7 [17] [17] ;
long long int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 6714644342434256274LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-30463;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 9430836215291437073ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)38072;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)32256;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -9210936228687848528LL;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test(unsigned short var_0, long long int var_1, _Bool var_2, unsigned char var_3, unsigned int var_4, signed char var_5, short var_6, unsigned short var_7, unsigned int var_8, signed char var_9, short var_10, unsigned int var_11, int var_12, long long int var_13, int zero, _Bool arr_0 [19] , _Bool arr_1 [19] [19] , _Bool arr_2 [17] , long long int arr_3 [17] , short arr_4 [17] , unsigned long long int arr_5 [17] [17] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
