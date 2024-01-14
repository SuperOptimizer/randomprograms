#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1431529839;
unsigned int var_1 = 646375033U;
unsigned int var_2 = 2996919106U;
unsigned int var_3 = 2807951639U;
long long int var_4 = 2781657945285733916LL;
int var_5 = -1067796148;
signed char var_6 = (signed char)96;
unsigned int var_7 = 1016046022U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)34998;
unsigned char var_10 = (unsigned char)70;
unsigned short var_11 = (unsigned short)217;
unsigned char var_12 = (unsigned char)184;
_Bool var_13 = (_Bool)0;
int var_14 = -1648843636;
_Bool var_15 = (_Bool)0;
short var_17 = (short)9390;
int zero = 0;
unsigned char var_18 = (unsigned char)189;
short var_19 = (short)24632;
signed char var_20 = (signed char)87;
signed char var_21 = (signed char)-75;
unsigned int var_22 = 1177271598U;
signed char var_23 = (signed char)35;
unsigned short var_24 = (unsigned short)42415;
short var_25 = (short)11961;
int var_26 = -1941085611;
unsigned short var_27 = (unsigned short)60197;
short var_28 = (short)-18785;
unsigned short var_29 = (unsigned short)55435;
long long int var_30 = 8840110415686967281LL;
unsigned short var_31 = (unsigned short)8653;
unsigned char var_32 = (unsigned char)105;
unsigned char var_33 = (unsigned char)55;
unsigned int var_34 = 3722003936U;
int var_35 = 919810269;
short var_36 = (short)23984;
unsigned char var_37 = (unsigned char)145;
unsigned char var_38 = (unsigned char)63;
signed char var_39 = (signed char)-2;
int var_40 = 1420355911;
unsigned short var_41 = (unsigned short)33616;
short var_42 = (short)-11401;
short var_43 = (short)15601;
int var_44 = -837711840;
int var_45 = -1358365898;
unsigned short var_46 = (unsigned short)26420;
long long int var_47 = 1088550390048938379LL;
short arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned short arr_2 [16] ;
int arr_3 [16] ;
unsigned int arr_4 [16] [16] ;
signed char arr_5 [16] ;
int arr_6 [16] ;
unsigned short arr_7 [16] [16] ;
unsigned char arr_8 [16] [16] [16] ;
_Bool arr_9 [16] [16] [16] ;
unsigned char arr_11 [16] [16] ;
unsigned int arr_13 [16] [16] [16] [16] [16] ;
unsigned int arr_14 [16] [16] [16] [16] [16] ;
unsigned int arr_16 [13] [13] ;
unsigned short arr_17 [13] ;
unsigned int arr_20 [13] [13] [13] ;
short arr_25 [13] [13] [13] [13] [13] ;
unsigned int arr_29 [13] ;
unsigned int arr_32 [13] [13] [13] [13] ;
_Bool arr_33 [13] [13] ;
signed char arr_39 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)21734;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1746074571U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)56666;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -559980792;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 3329694164U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 898612039;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)14558;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 4161156587U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 1775226650U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = 444848623U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (unsigned short)26268;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 20665723U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)791;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = 1686028668U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 16403477U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_39 [i_0] [i_1] = (signed char)-25;
}

void checksum() {
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
}
void test(int var_0, unsigned int var_1, unsigned int var_2, unsigned int var_3, long long int var_4, int var_5, signed char var_6, unsigned int var_7, _Bool var_8, unsigned short var_9, unsigned char var_10, unsigned short var_11, unsigned char var_12, _Bool var_13, int var_14, _Bool var_15, short var_17, int zero, short arr_0 [16] , unsigned int arr_1 [16] , unsigned short arr_2 [16] , int arr_3 [16] , unsigned int arr_4 [16] [16] , signed char arr_5 [16] , int arr_6 [16] , unsigned short arr_7 [16] [16] , unsigned char arr_8 [16] [16] [16] , _Bool arr_9 [16] [16] [16] , unsigned char arr_11 [16] [16] , unsigned int arr_13 [16] [16] [16] [16] [16] , unsigned int arr_14 [16] [16] [16] [16] [16] , unsigned int arr_16 [13] [13] , unsigned short arr_17 [13] , unsigned int arr_20 [13] [13] [13] , short arr_25 [13] [13] [13] [13] [13] , unsigned int arr_29 [13] , unsigned int arr_32 [13] [13] [13] [13] , _Bool arr_33 [13] [13] , signed char arr_39 [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_17, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_11 , arr_13 , arr_14 , arr_16 , arr_17 , arr_20 , arr_25 , arr_29 , arr_32 , arr_33 , arr_39 );
    checksum();
    printf("%llu\n", seed);
}
