#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)5661;
unsigned int var_6 = 2789687111U;
short var_8 = (short)18904;
unsigned char var_9 = (unsigned char)26;
unsigned int var_10 = 1627226230U;
unsigned char var_12 = (unsigned char)27;
unsigned short var_14 = (unsigned short)57349;
long long int var_15 = -5963063863961663117LL;
short var_18 = (short)-4871;
int zero = 0;
unsigned char var_19 = (unsigned char)101;
unsigned char var_20 = (unsigned char)129;
short var_21 = (short)-16464;
int var_22 = -1082339407;
long long int var_23 = -8636117809317489782LL;
int var_24 = 374818836;
unsigned long long int var_25 = 15692139982909811695ULL;
long long int var_26 = 2480489675491163151LL;
unsigned long long int var_27 = 9782353582140385857ULL;
unsigned char var_28 = (unsigned char)18;
unsigned char var_29 = (unsigned char)68;
unsigned short var_30 = (unsigned short)61681;
unsigned int arr_0 [13] ;
int arr_1 [13] ;
short arr_4 [23] [23] ;
long long int arr_2 [13] ;
_Bool arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 359402771U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1151489414;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-21090;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -6252069639286461257LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(_Bool var_1, _Bool var_2, unsigned short var_5, unsigned int var_6, short var_8, unsigned char var_9, unsigned int var_10, unsigned char var_12, unsigned short var_14, long long int var_15, short var_18, int zero, unsigned int arr_0 [13] , int arr_1 [13] , short arr_4 [23] [23] );

int main() {
    init();
    test(var_1, var_2, var_5, var_6, var_8, var_9, var_10, var_12, var_14, var_15, var_18, zero, arr_0 , arr_1 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
