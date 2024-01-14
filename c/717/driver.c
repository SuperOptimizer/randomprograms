#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10106275587226512669ULL;
unsigned int var_1 = 3041949203U;
unsigned long long int var_3 = 517834711503020104ULL;
unsigned int var_4 = 3861435396U;
unsigned long long int var_5 = 13303255456787016273ULL;
unsigned long long int var_6 = 12740063388013918028ULL;
unsigned short var_9 = (unsigned short)49238;
unsigned short var_10 = (unsigned short)33795;
unsigned int var_11 = 4159907975U;
int var_12 = 935097096;
unsigned long long int var_13 = 16755737341116576059ULL;
int var_14 = 1403100798;
unsigned short var_15 = (unsigned short)2417;
long long int var_16 = 6317615439151410183LL;
long long int var_18 = 5000135393445236797LL;
signed char var_19 = (signed char)107;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
int var_22 = -247910202;
unsigned long long int var_23 = 3374634620500259715ULL;
unsigned long long int var_24 = 12495790133788015240ULL;
int var_25 = 389829665;
int var_26 = -1906492662;
long long int var_27 = -2833229735976417842LL;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)9036;
int var_30 = 179485112;
int var_31 = 107288288;
int var_32 = 441595397;
int var_33 = 1032625126;
int var_34 = 1501538488;
unsigned long long int var_35 = 14283222652449862301ULL;
int var_36 = -577958343;
unsigned short var_37 = (unsigned short)7958;
int var_38 = 428819591;
_Bool var_39 = (_Bool)1;
long long int var_40 = 8584086059311328058LL;
int var_41 = 1289879821;
unsigned int var_42 = 1849007055U;
int var_43 = -205089592;
long long int var_44 = -4817919224729184922LL;
unsigned long long int var_45 = 10484335576626327969ULL;
_Bool var_46 = (_Bool)0;
long long int var_47 = 3201324257928594608LL;
_Bool var_48 = (_Bool)1;
int arr_0 [19] ;
int arr_1 [19] [19] ;
unsigned short arr_3 [19] [19] ;
unsigned int arr_4 [19] [19] ;
int arr_6 [19] [19] ;
unsigned short arr_7 [19] [19] [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] [19] ;
unsigned short arr_10 [19] ;
unsigned short arr_13 [19] [19] [19] [19] [19] [19] ;
long long int arr_15 [18] [18] ;
unsigned int arr_16 [18] [18] ;
unsigned int arr_19 [18] [18] ;
unsigned int arr_23 [18] [18] [18] [18] ;
unsigned long long int arr_26 [18] [18] ;
signed char arr_27 [18] [18] ;
unsigned int arr_28 [18] ;
int arr_30 [15] ;
signed char arr_38 [15] ;
int arr_41 [15] [15] [15] [15] ;
int arr_42 [15] [15] [15] [15] ;
unsigned int arr_43 [15] [15] [15] [15] [15] [15] ;
long long int arr_46 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1143776956;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -909574316;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)39190;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 2308713582U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = -1939311296;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)19183 : (unsigned short)59485;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 5796191490148401971ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)39326;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)37652 : (unsigned short)34076;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = 7102917139391980871LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 1472837330U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = 2111888740U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 1443633947U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = 6065693280543809581ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-34 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = 2207642447U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = 58682871;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_38 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -714509824 : -1822190922;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 966660218 : 900093363;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1922244648U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = -8213411345763773626LL;
}

void checksum() {
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
    hash(&seed, var_48);
}
void test(unsigned long long int var_0, unsigned int var_1, unsigned long long int var_3, unsigned int var_4, unsigned long long int var_5, unsigned long long int var_6, unsigned short var_9, unsigned short var_10, unsigned int var_11, int var_12, unsigned long long int var_13, int var_14, unsigned short var_15, long long int var_16, long long int var_18, signed char var_19, int zero, int arr_0 [19] , int arr_1 [19] [19] , unsigned short arr_3 [19] [19] , unsigned int arr_4 [19] [19] , int arr_6 [19] [19] , unsigned short arr_7 [19] [19] [19] [19] , unsigned long long int arr_9 [19] [19] [19] [19] , unsigned short arr_10 [19] , unsigned short arr_13 [19] [19] [19] [19] [19] [19] , long long int arr_15 [18] [18] , unsigned int arr_16 [18] [18] , unsigned int arr_19 [18] [18] , unsigned int arr_23 [18] [18] [18] [18] , unsigned long long int arr_26 [18] [18] , signed char arr_27 [18] [18] , unsigned int arr_28 [18] , int arr_30 [15] , signed char arr_38 [15] , int arr_41 [15] [15] [15] [15] , int arr_42 [15] [15] [15] [15] , unsigned int arr_43 [15] [15] [15] [15] [15] [15] , long long int arr_46 [15] [15] [15] [15] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_18, var_19, zero, arr_0 , arr_1 , arr_3 , arr_4 , arr_6 , arr_7 , arr_9 , arr_10 , arr_13 , arr_15 , arr_16 , arr_19 , arr_23 , arr_26 , arr_27 , arr_28 , arr_30 , arr_38 , arr_41 , arr_42 , arr_43 , arr_46 );
    checksum();
    printf("%llu\n", seed);
}
