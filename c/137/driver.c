#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)87;
signed char var_2 = (signed char)59;
unsigned char var_3 = (unsigned char)109;
signed char var_4 = (signed char)-101;
_Bool var_5 = (_Bool)0;
long long int var_6 = 8332906424224271923LL;
unsigned long long int var_7 = 15129724703375895158ULL;
int var_8 = 1682901362;
unsigned int var_9 = 966130842U;
unsigned int var_10 = 3482709256U;
int var_11 = -2012398802;
unsigned char var_12 = (unsigned char)139;
int zero = 0;
long long int var_13 = 1045184680819727705LL;
unsigned int var_14 = 3551664099U;
unsigned int var_15 = 4124882778U;
signed char var_16 = (signed char)-119;
long long int var_17 = -6429151105534301129LL;
int var_18 = 641715525;
long long int var_19 = -6107699597759905154LL;
unsigned int var_20 = 2034557824U;
int var_21 = -1680924354;
unsigned int var_22 = 841965716U;
unsigned char var_23 = (unsigned char)146;
long long int var_24 = -335850880066368792LL;
unsigned long long int var_25 = 12469736859876655232ULL;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 3048421427U;
unsigned char var_28 = (unsigned char)252;
long long int var_29 = -562699916329682214LL;
unsigned int var_30 = 2544021172U;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)-91;
signed char var_33 = (signed char)56;
_Bool var_34 = (_Bool)0;
signed char var_35 = (signed char)93;
int var_36 = 730254438;
unsigned int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned int arr_2 [20] ;
unsigned short arr_3 [20] ;
unsigned char arr_7 [12] ;
unsigned char arr_9 [12] [12] [12] ;
signed char arr_10 [12] ;
signed char arr_11 [12] [12] [12] ;
unsigned char arr_16 [12] ;
short arr_17 [12] [12] ;
unsigned char arr_18 [12] ;
unsigned int arr_19 [12] ;
short arr_23 [12] [12] [12] [12] ;
signed char arr_28 [12] [12] [12] ;
unsigned char arr_29 [12] ;
unsigned char arr_31 [12] [12] [12] ;
unsigned int arr_35 [12] ;
unsigned long long int arr_36 [12] ;
_Bool arr_4 [20] ;
unsigned short arr_8 [12] [12] ;
unsigned long long int arr_13 [12] ;
unsigned char arr_14 [12] [12] ;
unsigned char arr_15 [12] [12] ;
int arr_24 [12] [12] [12] [12] ;
unsigned int arr_25 [12] [12] [12] [12] ;
_Bool arr_26 [12] [12] ;
unsigned long long int arr_32 [12] [12] ;
unsigned int arr_33 [12] ;
long long int arr_37 [12] [12] ;
unsigned long long int arr_38 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1752577489U : 271320466U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1424721764474181113ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2443623742U : 560201998U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26892 : (unsigned short)11407;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (short)1357;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 331473377U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (short)21192;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned char)223 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_35 [i_0] = 1057130570U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 5630440177409532565ULL : 12190243911353735586ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)31370;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 3782172873025416104ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = -1074625227;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 2175177977U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_32 [i_0] [i_1] = 5503153051157370357ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_33 [i_0] = 74210862U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_37 [i_0] [i_1] = (i_0 % 2 == 0) ? -5561173859931385219LL : 2757770403491210269LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 7450529771162601796ULL : 13563995948432161843ULL;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test(_Bool var_0, signed char var_1, signed char var_2, unsigned char var_3, signed char var_4, _Bool var_5, long long int var_6, unsigned long long int var_7, int var_8, unsigned int var_9, unsigned int var_10, int var_11, unsigned char var_12, int zero, unsigned int arr_0 [20] [20] , unsigned long long int arr_1 [20] , unsigned int arr_2 [20] , unsigned short arr_3 [20] , unsigned char arr_7 [12] , unsigned char arr_9 [12] [12] [12] , signed char arr_10 [12] , signed char arr_11 [12] [12] [12] , unsigned char arr_16 [12] , short arr_17 [12] [12] , unsigned char arr_18 [12] , unsigned int arr_19 [12] , short arr_23 [12] [12] [12] [12] , signed char arr_28 [12] [12] [12] , unsigned char arr_29 [12] , unsigned char arr_31 [12] [12] [12] , unsigned int arr_35 [12] , unsigned long long int arr_36 [12] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_7 , arr_9 , arr_10 , arr_11 , arr_16 , arr_17 , arr_18 , arr_19 , arr_23 , arr_28 , arr_29 , arr_31 , arr_35 , arr_36 );
    checksum();
    printf("%llu\n", seed);
}
