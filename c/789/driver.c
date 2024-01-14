#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1727481128;
short var_1 = (short)5743;
unsigned char var_2 = (unsigned char)183;
unsigned int var_3 = 2998871728U;
unsigned short var_4 = (unsigned short)20422;
unsigned short var_5 = (unsigned short)56041;
int var_6 = -766051578;
_Bool var_7 = (_Bool)0;
short var_8 = (short)18766;
unsigned int var_9 = 3922062883U;
int zero = 0;
unsigned long long int var_10 = 18179058163071277528ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)11300;
unsigned char var_13 = (unsigned char)88;
unsigned short var_14 = (unsigned short)37435;
unsigned char var_15 = (unsigned char)159;
int var_16 = -1725737492;
short var_17 = (short)-20674;
short var_18 = (short)-9134;
signed char var_19 = (signed char)42;
unsigned short var_20 = (unsigned short)3646;
int var_21 = 143311005;
unsigned long long int var_22 = 17588831604881588696ULL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-46;
_Bool var_25 = (_Bool)0;
short var_26 = (short)-7855;
unsigned int var_27 = 2889217488U;
unsigned int var_28 = 396403590U;
unsigned int var_29 = 680639384U;
int var_30 = -1581443282;
int var_31 = -1279594744;
unsigned long long int arr_2 [17] ;
int arr_6 [17] [17] ;
unsigned short arr_7 [17] [17] [17] ;
_Bool arr_8 [17] [17] [17] ;
long long int arr_9 [17] [17] [17] [17] [17] [17] ;
long long int arr_10 [17] [17] [17] [17] ;
unsigned long long int arr_11 [18] ;
short arr_14 [18] ;
unsigned long long int arr_15 [18] ;
unsigned long long int arr_20 [18] ;
unsigned short arr_22 [18] [18] [18] ;
short arr_23 [18] [18] [18] [18] ;
long long int arr_27 [18] [18] [18] [18] [18] ;
int arr_28 [18] [18] [18] [18] [18] ;
unsigned int arr_31 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5166998045520453307ULL : 1030764787625359948ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1860471267 : 77081255;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)7653 : (unsigned short)55046;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? -2273174014090626289LL : -3507139666940870657LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1366830787894653695LL : 6692284998407074077LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 323409341304605376ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (short)14493;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 7089453710368149828ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 17930021634217130789ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)11899;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (short)-16946;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 2994665921605656096LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 355572229;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? 2904809103U : 3837548381U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test(int var_0, short var_1, unsigned char var_2, unsigned int var_3, unsigned short var_4, unsigned short var_5, int var_6, _Bool var_7, short var_8, unsigned int var_9, int zero, unsigned long long int arr_2 [17] , int arr_6 [17] [17] , unsigned short arr_7 [17] [17] [17] , _Bool arr_8 [17] [17] [17] , long long int arr_9 [17] [17] [17] [17] [17] [17] , long long int arr_10 [17] [17] [17] [17] , unsigned long long int arr_11 [18] , short arr_14 [18] , unsigned long long int arr_15 [18] , unsigned long long int arr_20 [18] , unsigned short arr_22 [18] [18] [18] , short arr_23 [18] [18] [18] [18] , long long int arr_27 [18] [18] [18] [18] [18] , int arr_28 [18] [18] [18] [18] [18] , unsigned int arr_31 [18] [18] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_2 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_14 , arr_15 , arr_20 , arr_22 , arr_23 , arr_27 , arr_28 , arr_31 );
    checksum();
    printf("%llu\n", seed);
}
