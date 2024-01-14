#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned char var_1 = (unsigned char)143;
unsigned char var_3 = (unsigned char)229;
unsigned int var_4 = 1605654465U;
_Bool var_5 = (_Bool)0;
short var_8 = (short)10445;
signed char var_9 = (signed char)-98;
signed char var_10 = (signed char)-24;
unsigned long long int var_11 = 16979669835329424326ULL;
long long int var_12 = 8058383679706074682LL;
unsigned int var_13 = 969666971U;
int var_14 = -1315701399;
int zero = 0;
short var_15 = (short)-26644;
int var_16 = -159592100;
signed char var_17 = (signed char)9;
long long int var_18 = 7605483533169151480LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4334138383361595285LL;
unsigned long long int var_21 = 15568507648445239569ULL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-41;
int var_24 = 826815648;
signed char var_25 = (signed char)-36;
unsigned char var_26 = (unsigned char)100;
unsigned int var_27 = 1550838245U;
signed char var_28 = (signed char)30;
unsigned long long int var_29 = 13304099656238224057ULL;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)19720;
unsigned short var_32 = (unsigned short)18060;
short var_33 = (short)-11710;
unsigned char var_34 = (unsigned char)154;
int var_35 = -1164731789;
short var_36 = (short)-5976;
unsigned int var_37 = 488442658U;
short var_38 = (short)17786;
signed char var_39 = (signed char)-66;
unsigned int arr_0 [10] ;
long long int arr_2 [10] ;
signed char arr_3 [10] ;
short arr_5 [10] ;
unsigned char arr_7 [10] [10] ;
long long int arr_9 [18] ;
unsigned long long int arr_10 [18] ;
long long int arr_11 [18] ;
signed char arr_12 [18] [18] ;
short arr_13 [18] ;
unsigned int arr_14 [18] ;
int arr_16 [18] [18] [18] [18] ;
unsigned long long int arr_17 [18] [18] [18] ;
unsigned short arr_18 [18] [18] [18] [18] ;
int arr_19 [18] [18] ;
long long int arr_20 [18] [18] [18] [18] ;
unsigned int arr_22 [18] [18] ;
_Bool arr_23 [18] ;
long long int arr_25 [18] ;
_Bool arr_26 [18] [18] [18] ;
int arr_30 [18] [18] [18] ;
unsigned short arr_8 [10] [10] ;
unsigned int arr_15 [18] ;
long long int arr_21 [18] ;
_Bool arr_28 [18] [18] [18] ;
int arr_37 [18] [18] [18] [18] ;
short arr_38 [18] [18] [18] [18] ;
int arr_41 [18] [18] [18] ;
unsigned int arr_42 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3861625808U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -5344620982228215442LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)18461;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 2299392257298228669LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 8579448823282183005ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = -4916176255210343196LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (short)28447;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 3385622959U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 966664931;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 7385055735078893285ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)1572 : (unsigned short)57953;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? -1056512956 : -344592146;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -8977318083232185128LL : -4710969028824867026LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = 1077368282U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = -6726131306547740253LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 686578611 : -1616630002;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)12797;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 2794339078U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 352792221700797038LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -752081506 : 2066747838;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)23854 : (short)-13863;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1812465383 : -1117215609;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2135082801U : 2414926288U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
}
void test(unsigned char var_0, unsigned char var_1, unsigned char var_3, unsigned int var_4, _Bool var_5, short var_8, signed char var_9, signed char var_10, unsigned long long int var_11, long long int var_12, unsigned int var_13, int var_14, int zero, unsigned int arr_0 [10] , long long int arr_2 [10] , signed char arr_3 [10] , short arr_5 [10] , unsigned char arr_7 [10] [10] , long long int arr_9 [18] , unsigned long long int arr_10 [18] , long long int arr_11 [18] , signed char arr_12 [18] [18] , short arr_13 [18] , unsigned int arr_14 [18] , int arr_16 [18] [18] [18] [18] , unsigned long long int arr_17 [18] [18] [18] , unsigned short arr_18 [18] [18] [18] [18] , int arr_19 [18] [18] , long long int arr_20 [18] [18] [18] [18] , unsigned int arr_22 [18] [18] , _Bool arr_23 [18] , long long int arr_25 [18] , _Bool arr_26 [18] [18] [18] , int arr_30 [18] [18] [18] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_2 , arr_3 , arr_5 , arr_7 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_16 , arr_17 , arr_18 , arr_19 , arr_20 , arr_22 , arr_23 , arr_25 , arr_26 , arr_30 );
    checksum();
    printf("%llu\n", seed);
}
