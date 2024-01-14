#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)150;
short var_2 = (short)-26037;
short var_3 = (short)8152;
short var_4 = (short)20330;
unsigned char var_5 = (unsigned char)91;
short var_6 = (short)-7566;
unsigned short var_7 = (unsigned short)4536;
long long int var_8 = 4103700249268770940LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)51620;
unsigned short var_11 = (unsigned short)56981;
signed char var_12 = (signed char)76;
short var_13 = (short)9944;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
signed char var_16 = (signed char)88;
signed char var_17 = (signed char)-28;
unsigned short var_18 = (unsigned short)13102;
short var_19 = (short)-22955;
signed char var_20 = (signed char)42;
short var_21 = (short)30373;
long long int var_22 = -4704115305782965215LL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)27;
signed char var_25 = (signed char)10;
unsigned char var_26 = (unsigned char)101;
unsigned short var_27 = (unsigned short)39813;
_Bool var_28 = (_Bool)1;
long long int var_29 = 8606574907309960583LL;
int var_30 = -1177724847;
long long int arr_0 [15] ;
_Bool arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned short arr_3 [15] ;
unsigned char arr_4 [15] [15] [15] ;
unsigned char arr_5 [15] [15] [15] ;
signed char arr_6 [15] [15] ;
unsigned short arr_7 [15] ;
unsigned short arr_9 [15] [15] ;
long long int arr_10 [15] [15] [15] ;
unsigned long long int arr_12 [15] ;
_Bool arr_13 [15] [15] ;
_Bool arr_15 [15] [15] [15] [15] ;
short arr_16 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 8020310792968251950LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)12495;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)31798;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)8856;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1473108759715174149LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 12534806250310278206ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-22100 : (short)-8062;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test(_Bool var_0, unsigned char var_1, short var_2, short var_3, short var_4, unsigned char var_5, short var_6, unsigned short var_7, long long int var_8, _Bool var_9, unsigned short var_10, unsigned short var_11, signed char var_12, short var_13, int zero, long long int arr_0 [15] , _Bool arr_1 [15] , _Bool arr_2 [15] , unsigned short arr_3 [15] , unsigned char arr_4 [15] [15] [15] , unsigned char arr_5 [15] [15] [15] , signed char arr_6 [15] [15] , unsigned short arr_7 [15] , unsigned short arr_9 [15] [15] , long long int arr_10 [15] [15] [15] , unsigned long long int arr_12 [15] , _Bool arr_13 [15] [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_9 , arr_10 , arr_12 , arr_13 );
    checksum();
    printf("%llu\n", seed);
}
