#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
signed char var_1 = (signed char)-99;
unsigned short var_2 = (unsigned short)44255;
unsigned short var_3 = (unsigned short)53025;
unsigned short var_4 = (unsigned short)16108;
long long int var_5 = 4245407251248812240LL;
short var_6 = (short)-5062;
unsigned int var_7 = 3910754635U;
unsigned short var_8 = (unsigned short)10682;
int var_9 = -1268595472;
unsigned int var_10 = 2196721283U;
signed char var_11 = (signed char)74;
int var_12 = 411035284;
long long int var_13 = -4298688314254712877LL;
short var_14 = (short)16503;
unsigned char var_15 = (unsigned char)30;
int zero = 0;
unsigned int var_16 = 2280907093U;
short var_17 = (short)-16608;
signed char var_18 = (signed char)-93;
long long int var_19 = 6732513405274395350LL;
signed char var_20 = (signed char)-55;
unsigned int var_21 = 1973568087U;
short var_22 = (short)13079;
short var_23 = (short)6150;
unsigned short var_24 = (unsigned short)11039;
unsigned char var_25 = (unsigned char)10;
int var_26 = 1954016794;
long long int var_27 = 8058490361531179061LL;
unsigned short var_28 = (unsigned short)50174;
signed char var_29 = (signed char)98;
unsigned char var_30 = (unsigned char)179;
signed char var_31 = (signed char)76;
int var_32 = -247748845;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)39203;
int var_35 = -210878149;
long long int var_36 = -5252642362966886866LL;
int var_37 = 489868223;
_Bool arr_0 [14] ;
signed char arr_1 [14] [14] ;
long long int arr_4 [14] ;
_Bool arr_6 [16] ;
int arr_7 [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned char arr_9 [16] [16] ;
long long int arr_10 [16] ;
int arr_11 [16] ;
long long int arr_13 [12] ;
int arr_14 [12] ;
short arr_19 [22] ;
short arr_20 [22] [22] ;
unsigned int arr_23 [15] [15] ;
_Bool arr_24 [15] ;
long long int arr_25 [15] ;
unsigned long long int arr_26 [15] ;
signed char arr_28 [15] ;
long long int arr_29 [15] [15] ;
long long int arr_30 [15] ;
long long int arr_31 [15] [15] [15] [15] ;
unsigned short arr_5 [14] [14] [14] ;
short arr_12 [16] ;
short arr_17 [12] ;
short arr_21 [22] ;
signed char arr_22 [22] [22] ;
int arr_27 [15] ;
unsigned char arr_33 [15] [15] ;
signed char arr_34 [15] ;
unsigned int arr_35 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -5014293135601344400LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 1802071174;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 11548111319568411258ULL : 18412991964890872161ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -2117448851788500645LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1219466723 : -1693735315;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = -5766760736033781142LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = -1082366955;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (short)29057;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (short)6112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = 565823895U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = -7694341616113908401LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = 13361997575673070431ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = -6120886865912374129LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = -2243180928644093733LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = -50411201802505695LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)47719;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-25631 : (short)5215;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (short)26536;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (short)5899;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = 591157011;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_34 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = 942871421U;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test(unsigned char var_0, signed char var_1, unsigned short var_2, unsigned short var_3, unsigned short var_4, long long int var_5, short var_6, unsigned int var_7, unsigned short var_8, int var_9, unsigned int var_10, signed char var_11, int var_12, long long int var_13, short var_14, unsigned char var_15, int zero, _Bool arr_0 [14] , signed char arr_1 [14] [14] , long long int arr_4 [14] , _Bool arr_6 [16] , int arr_7 [16] , unsigned long long int arr_8 [16] [16] , unsigned char arr_9 [16] [16] , long long int arr_10 [16] , int arr_11 [16] , long long int arr_13 [12] , int arr_14 [12] , short arr_19 [22] , short arr_20 [22] [22] , unsigned int arr_23 [15] [15] , _Bool arr_24 [15] , long long int arr_25 [15] , unsigned long long int arr_26 [15] , signed char arr_28 [15] , long long int arr_29 [15] [15] , long long int arr_30 [15] , long long int arr_31 [15] [15] [15] [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_4 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_13 , arr_14 , arr_19 , arr_20 , arr_23 , arr_24 , arr_25 , arr_26 , arr_28 , arr_29 , arr_30 , arr_31 );
    checksum();
    printf("%llu\n", seed);
}
