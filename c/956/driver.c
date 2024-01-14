#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12584;
long long int var_1 = 753030012922846268LL;
unsigned int var_2 = 838797181U;
short var_3 = (short)6584;
unsigned int var_4 = 335637440U;
int var_5 = -16780022;
unsigned long long int var_6 = 818864882333696258ULL;
unsigned char var_7 = (unsigned char)59;
unsigned long long int var_8 = 13726937334218411666ULL;
int var_9 = 1126058254;
long long int var_10 = 2601926048934051168LL;
signed char var_11 = (signed char)-70;
unsigned short var_12 = (unsigned short)26896;
int zero = 0;
unsigned int var_13 = 259038100U;
short var_14 = (short)6689;
unsigned long long int var_15 = 17206833611496461380ULL;
unsigned char var_16 = (unsigned char)147;
signed char var_17 = (signed char)52;
int var_18 = 1144387960;
short var_19 = (short)25902;
unsigned short var_20 = (unsigned short)17022;
long long int var_21 = -4808929876845441857LL;
unsigned long long int var_22 = 7090981768873458814ULL;
int var_23 = 893318047;
signed char var_24 = (signed char)93;
unsigned int var_25 = 3060357116U;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)73;
unsigned char var_29 = (unsigned char)237;
unsigned char var_30 = (unsigned char)72;
int var_31 = 660645411;
unsigned char var_32 = (unsigned char)140;
unsigned char var_33 = (unsigned char)87;
unsigned long long int var_34 = 10180484041000265891ULL;
unsigned char var_35 = (unsigned char)212;
_Bool var_36 = (_Bool)1;
signed char var_37 = (signed char)42;
unsigned short var_38 = (unsigned short)48626;
long long int var_39 = 5646543867590695342LL;
signed char var_40 = (signed char)121;
_Bool var_41 = (_Bool)1;
unsigned int var_42 = 732841821U;
unsigned int var_43 = 706555143U;
short var_44 = (short)15352;
unsigned long long int var_45 = 18126809221386363669ULL;
int var_46 = 1775201497;
int var_47 = -1815606641;
short var_48 = (short)31280;
unsigned long long int var_49 = 5638332017730514965ULL;
int var_50 = 1022829160;
unsigned char var_51 = (unsigned char)64;
int var_52 = 287171378;
unsigned short arr_0 [19] ;
unsigned long long int arr_1 [19] [19] ;
unsigned char arr_2 [19] [19] ;
_Bool arr_3 [19] [19] ;
signed char arr_6 [19] [19] [19] ;
unsigned short arr_7 [19] [19] [19] ;
signed char arr_10 [16] [16] ;
unsigned short arr_11 [16] [16] ;
int arr_12 [16] [16] ;
unsigned char arr_13 [16] ;
signed char arr_14 [16] ;
unsigned char arr_15 [16] [16] [16] ;
_Bool arr_17 [16] [16] [16] [16] ;
signed char arr_19 [16] [16] [16] [16] [16] ;
unsigned long long int arr_20 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_23 [12] [12] ;
unsigned int arr_24 [12] ;
signed char arr_30 [22] [22] ;
_Bool arr_31 [22] [22] ;
unsigned short arr_33 [22] ;
unsigned int arr_35 [14] ;
unsigned short arr_36 [14] ;
unsigned short arr_41 [14] [14] ;
_Bool arr_43 [14] [14] [14] [14] ;
unsigned long long int arr_44 [14] [14] [14] ;
long long int arr_4 [19] [19] ;
unsigned char arr_8 [19] [19] [19] ;
unsigned char arr_21 [16] [16] [16] [16] [16] [16] [16] ;
_Bool arr_22 [16] [16] ;
int arr_25 [12] ;
unsigned short arr_34 [22] [22] ;
signed char arr_48 [14] [14] [14] [14] [14] ;
unsigned long long int arr_49 [14] [14] [14] [14] [14] ;
unsigned short arr_50 [14] [14] [14] [14] [14] ;
unsigned int arr_53 [14] [14] [14] [14] [14] [14] ;
long long int arr_54 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)31368;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 806982650914523419ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)52589;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)3489;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 1988130902;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6215842288001880262ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = 49490363U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = 840006699U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (unsigned short)28804;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = 1217874519U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_36 [i_0] = (unsigned short)39759;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_41 [i_0] [i_1] = (unsigned short)36393;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 5510525933320161542ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 98132302529724658LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? (unsigned char)6 : (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = -163178765;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned short)51451;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = 2140593114687395502ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)56584;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 1506605475U : 454801572U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_54 [i_0] [i_1] = -5214808187649085220LL;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_54 [i_0] [i_1] );
}
void test(short var_0, long long int var_1, unsigned int var_2, short var_3, unsigned int var_4, int var_5, unsigned long long int var_6, unsigned char var_7, unsigned long long int var_8, int var_9, long long int var_10, signed char var_11, unsigned short var_12, int zero, unsigned short arr_0 [19] , unsigned long long int arr_1 [19] [19] , unsigned char arr_2 [19] [19] , _Bool arr_3 [19] [19] , signed char arr_6 [19] [19] [19] , unsigned short arr_7 [19] [19] [19] , signed char arr_10 [16] [16] , unsigned short arr_11 [16] [16] , int arr_12 [16] [16] , unsigned char arr_13 [16] , signed char arr_14 [16] , unsigned char arr_15 [16] [16] [16] , _Bool arr_17 [16] [16] [16] [16] , signed char arr_19 [16] [16] [16] [16] [16] , unsigned long long int arr_20 [16] [16] [16] [16] [16] [16] , unsigned int arr_23 [12] [12] , unsigned int arr_24 [12] , signed char arr_30 [22] [22] , _Bool arr_31 [22] [22] , unsigned short arr_33 [22] , unsigned int arr_35 [14] , unsigned short arr_36 [14] , unsigned short arr_41 [14] [14] , _Bool arr_43 [14] [14] [14] [14] , unsigned long long int arr_44 [14] [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_6 , arr_7 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_17 , arr_19 , arr_20 , arr_23 , arr_24 , arr_30 , arr_31 , arr_33 , arr_35 , arr_36 , arr_41 , arr_43 , arr_44 );
    checksum();
    printf("%llu\n", seed);
}
