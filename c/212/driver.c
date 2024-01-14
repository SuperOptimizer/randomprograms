#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
unsigned short var_1 = (unsigned short)4033;
unsigned long long int var_2 = 10989963363211635930ULL;
long long int var_3 = -7965212944298243802LL;
signed char var_4 = (signed char)52;
unsigned char var_5 = (unsigned char)77;
int var_6 = 548658220;
unsigned long long int var_8 = 10142019807173964789ULL;
signed char var_9 = (signed char)-120;
int var_10 = -660895228;
int var_11 = -360383710;
unsigned char var_12 = (unsigned char)2;
unsigned short var_13 = (unsigned short)4803;
unsigned long long int var_15 = 15329227392445526821ULL;
int var_16 = -1079201277;
unsigned short var_17 = (unsigned short)8967;
int var_18 = -800186793;
int zero = 0;
unsigned long long int var_20 = 2948803992430467876ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)39;
signed char var_23 = (signed char)-23;
int var_24 = 873911879;
unsigned short var_25 = (unsigned short)31019;
unsigned short var_26 = (unsigned short)63031;
signed char var_27 = (signed char)68;
long long int var_28 = -3204247244564320706LL;
signed char var_29 = (signed char)-66;
signed char var_30 = (signed char)-59;
signed char var_31 = (signed char)-16;
long long int var_32 = 6162925393891395567LL;
_Bool var_33 = (_Bool)0;
unsigned char var_34 = (unsigned char)253;
signed char var_35 = (signed char)-3;
unsigned short var_36 = (unsigned short)17172;
long long int var_37 = -2918215714619882234LL;
long long int var_38 = -5174718043759108412LL;
unsigned long long int var_39 = 7545958465658931998ULL;
unsigned short var_40 = (unsigned short)58990;
int var_41 = 455746182;
int var_42 = -558139067;
signed char var_43 = (signed char)3;
signed char var_44 = (signed char)-19;
signed char var_45 = (signed char)124;
unsigned long long int var_46 = 7224902682282666716ULL;
unsigned short var_47 = (unsigned short)31912;
unsigned short var_48 = (unsigned short)3231;
int var_49 = -1531045978;
unsigned char var_50 = (unsigned char)228;
int var_51 = 2041796604;
signed char var_52 = (signed char)9;
signed char var_53 = (signed char)48;
unsigned long long int var_54 = 3022427257308288292ULL;
_Bool var_55 = (_Bool)1;
unsigned short var_56 = (unsigned short)51722;
unsigned short arr_1 [14] ;
unsigned short arr_3 [14] [14] ;
unsigned short arr_5 [16] ;
unsigned short arr_6 [16] ;
int arr_8 [16] ;
unsigned short arr_12 [13] [13] ;
unsigned long long int arr_13 [13] [13] ;
int arr_14 [13] [13] ;
signed char arr_15 [13] [13] [13] ;
unsigned short arr_16 [13] [13] [13] [13] ;
signed char arr_17 [13] ;
int arr_20 [13] [13] [13] [13] [13] ;
int arr_21 [13] [13] [13] ;
unsigned short arr_23 [13] ;
int arr_24 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_25 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_26 [13] [13] [13] [13] [13] [13] ;
int arr_27 [13] [13] [13] [13] [13] [13] [13] ;
_Bool arr_31 [13] [13] [13] [13] [13] [13] [13] ;
signed char arr_32 [13] ;
signed char arr_33 [13] [13] [13] [13] [13] [13] [13] ;
int arr_35 [13] [13] [13] [13] [13] ;
int arr_41 [13] [13] ;
unsigned char arr_49 [25] ;
long long int arr_50 [25] ;
unsigned short arr_51 [25] ;
unsigned long long int arr_54 [25] [25] [25] [25] ;
int arr_55 [25] [25] [25] [25] ;
int arr_57 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_4 [14] [14] ;
unsigned short arr_9 [16] ;
unsigned short arr_18 [13] [13] [13] [13] ;
long long int arr_19 [13] [13] [13] ;
unsigned long long int arr_29 [13] [13] [13] [13] ;
signed char arr_34 [13] [13] ;
signed char arr_58 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_61 [23] [23] ;
signed char arr_62 [23] [23] ;
int arr_63 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)22564;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)44739 : (unsigned short)3441;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)781;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)59924;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -33327445;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)46825;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 15595835460659903674ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = -999271949;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)56101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = -19460139;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 70417789;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40239 : (unsigned short)19136;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -1976551642 : 344965981;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)9130 : (unsigned short)40406;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)26879;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2096194508;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -511213583 : 1970304663;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_41 [i_0] [i_1] = 837897657;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_49 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_50 [i_0] = 956100150439561592LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_51 [i_0] = (unsigned short)38951;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 5458644087755675378ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1978649492 : -800333161;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 1084974259 : -778760566;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 13789983424856930702ULL : 17881662620915768741ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)23350;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)4498 : (unsigned short)28503;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4185658278234026516LL : -2590685209613692340LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8342903330697977836ULL : 7519903964083684294ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)40 : (signed char)-46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)28 : (signed char)19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_61 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_62 [i_0] [i_1] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_63 [i_0] = -962120767;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_61 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_63 [i_0] );
}
void test(unsigned char var_0, unsigned short var_1, unsigned long long int var_2, long long int var_3, signed char var_4, unsigned char var_5, int var_6, unsigned long long int var_8, signed char var_9, int var_10, int var_11, unsigned char var_12, unsigned short var_13, unsigned long long int var_15, int var_16, unsigned short var_17, int var_18, int zero, unsigned short arr_1 [14] , unsigned short arr_3 [14] [14] , unsigned short arr_5 [16] , unsigned short arr_6 [16] , int arr_8 [16] , unsigned short arr_12 [13] [13] , unsigned long long int arr_13 [13] [13] , int arr_14 [13] [13] , signed char arr_15 [13] [13] [13] , unsigned short arr_16 [13] [13] [13] [13] , signed char arr_17 [13] , int arr_20 [13] [13] [13] [13] [13] , int arr_21 [13] [13] [13] , unsigned short arr_23 [13] , int arr_24 [13] [13] [13] [13] [13] [13] , unsigned short arr_25 [13] [13] [13] [13] [13] [13] , unsigned short arr_26 [13] [13] [13] [13] [13] [13] , int arr_27 [13] [13] [13] [13] [13] [13] [13] , _Bool arr_31 [13] [13] [13] [13] [13] [13] [13] , signed char arr_32 [13] , signed char arr_33 [13] [13] [13] [13] [13] [13] [13] , int arr_35 [13] [13] [13] [13] [13] , int arr_41 [13] [13] , unsigned char arr_49 [25] , long long int arr_50 [25] , unsigned short arr_51 [25] , unsigned long long int arr_54 [25] [25] [25] [25] , int arr_55 [25] [25] [25] [25] , int arr_57 [25] [25] [25] [25] [25] [25] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_16, var_17, var_18, zero, arr_1 , arr_3 , arr_5 , arr_6 , arr_8 , arr_12 , arr_13 , arr_14 , arr_15 , arr_16 , arr_17 , arr_20 , arr_21 , arr_23 , arr_24 , arr_25 , arr_26 , arr_27 , arr_31 , arr_32 , arr_33 , arr_35 , arr_41 , arr_49 , arr_50 , arr_51 , arr_54 , arr_55 , arr_57 );
    checksum();
    printf("%llu\n", seed);
}
