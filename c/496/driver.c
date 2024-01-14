#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11402;
long long int var_1 = -5622671809013627014LL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-2997;
unsigned long long int var_4 = 5902030602052174665ULL;
long long int var_5 = -4891074994086837183LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = 2649776056358564643LL;
short var_8 = (short)14929;
unsigned short var_9 = (unsigned short)3699;
long long int var_10 = -3700664515128684649LL;
unsigned int var_11 = 3109005041U;
unsigned short var_12 = (unsigned short)4187;
unsigned long long int var_13 = 17450370259336583593ULL;
short var_14 = (short)-489;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3060474316430377631LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 7338362967780174030LL;
unsigned long long int var_19 = 11509065123252712977ULL;
unsigned char var_20 = (unsigned char)241;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-26647;
long long int var_23 = 7355401322442609340LL;
int var_24 = -208759609;
unsigned short var_25 = (unsigned short)21591;
int var_26 = 822359269;
unsigned short var_27 = (unsigned short)20841;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)49911;
long long int var_30 = 4602484014504851847LL;
long long int var_31 = 3924446729515957513LL;
unsigned char var_32 = (unsigned char)154;
long long int var_33 = 56316354847429027LL;
unsigned short var_34 = (unsigned short)35721;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)52929;
short var_37 = (short)-3029;
unsigned int var_38 = 1036835283U;
unsigned short var_39 = (unsigned short)50363;
unsigned short var_40 = (unsigned short)21669;
short var_41 = (short)3633;
int var_42 = -84084348;
unsigned long long int arr_0 [21] ;
int arr_1 [21] [21] ;
unsigned short arr_3 [21] ;
short arr_9 [21] [21] ;
unsigned long long int arr_13 [21] [21] [21] [21] ;
_Bool arr_14 [21] [21] [21] [21] [21] ;
short arr_17 [23] [23] ;
_Bool arr_4 [21] [21] ;
short arr_5 [21] ;
signed char arr_15 [21] [21] [21] [21] [21] ;
int arr_24 [23] [23] [23] ;
_Bool arr_25 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 10612106207449446636ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1248216968;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50995 : (unsigned short)33025;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-2971;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6770071414989277250ULL : 5067811214570866116ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-24235;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-9362 : (short)-10683;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 258086917;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test(short var_0, long long int var_1, _Bool var_2, short var_3, unsigned long long int var_4, long long int var_5, _Bool var_6, long long int var_7, short var_8, unsigned short var_9, long long int var_10, unsigned int var_11, unsigned short var_12, unsigned long long int var_13, short var_14, int zero, unsigned long long int arr_0 [21] , int arr_1 [21] [21] , unsigned short arr_3 [21] , short arr_9 [21] [21] , unsigned long long int arr_13 [21] [21] [21] [21] , _Bool arr_14 [21] [21] [21] [21] [21] , short arr_17 [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_3 , arr_9 , arr_13 , arr_14 , arr_17 );
    checksum();
    printf("%llu\n", seed);
}
