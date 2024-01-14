#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -180028483;
int var_1 = -722407387;
unsigned short var_2 = (unsigned short)9482;
short var_3 = (short)-6169;
short var_4 = (short)-22281;
int var_5 = 1576872403;
signed char var_6 = (signed char)-38;
long long int var_7 = -7499003432530875737LL;
signed char var_8 = (signed char)89;
unsigned long long int var_9 = 2884942339619738173ULL;
unsigned char var_10 = (unsigned char)210;
unsigned long long int var_11 = 15250436273046151988ULL;
_Bool var_12 = (_Bool)0;
long long int var_14 = -8628260114041850436LL;
unsigned char var_15 = (unsigned char)75;
int zero = 0;
signed char var_16 = (signed char)-63;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)6766;
int var_19 = 1368028498;
unsigned long long int var_20 = 3913104774825393967ULL;
long long int var_21 = 2043170450089245132LL;
int var_22 = 1601115960;
unsigned long long int var_23 = 13130473016197665240ULL;
unsigned short var_24 = (unsigned short)10259;
unsigned char var_25 = (unsigned char)19;
unsigned short var_26 = (unsigned short)61272;
unsigned int var_27 = 1705539494U;
unsigned short var_28 = (unsigned short)5416;
short var_29 = (short)-18397;
unsigned short var_30 = (unsigned short)8792;
short var_31 = (short)27166;
unsigned short var_32 = (unsigned short)39987;
unsigned long long int var_33 = 7696737327997460016ULL;
unsigned short arr_0 [12] ;
signed char arr_1 [12] [12] ;
unsigned short arr_2 [12] [12] ;
unsigned char arr_3 [12] ;
_Bool arr_4 [12] [12] ;
unsigned char arr_5 [12] [12] ;
unsigned int arr_6 [12] [12] [12] ;
_Bool arr_7 [12] [12] ;
unsigned long long int arr_8 [12] [12] [12] [12] ;
int arr_9 [12] [12] [12] [12] ;
unsigned short arr_10 [10] ;
_Bool arr_15 [10] [10] ;
long long int arr_20 [21] ;
unsigned long long int arr_18 [10] [10] [10] ;
short arr_19 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7024 : (unsigned short)14814;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)68 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)55258;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 862705693U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 185377372888585293ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -131630062;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)61347;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = -5318975465619927991LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 341882913615227878ULL : 15648297281835313932ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-6419 : (short)-2793;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test(int var_0, int var_1, unsigned short var_2, short var_3, short var_4, int var_5, signed char var_6, long long int var_7, signed char var_8, unsigned long long int var_9, unsigned char var_10, unsigned long long int var_11, _Bool var_12, long long int var_14, unsigned char var_15, int zero, unsigned short arr_0 [12] , signed char arr_1 [12] [12] , unsigned short arr_2 [12] [12] , unsigned char arr_3 [12] , _Bool arr_4 [12] [12] , unsigned char arr_5 [12] [12] , unsigned int arr_6 [12] [12] [12] , _Bool arr_7 [12] [12] , unsigned long long int arr_8 [12] [12] [12] [12] , int arr_9 [12] [12] [12] [12] , unsigned short arr_10 [10] , _Bool arr_15 [10] [10] , long long int arr_20 [21] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_15 , arr_20 );
    checksum();
    printf("%llu\n", seed);
}
