#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
unsigned char var_1 = (unsigned char)65;
int var_2 = 100636599;
unsigned long long int var_3 = 11597920731422742182ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 655543370U;
long long int var_6 = 2863045488089388197LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6094513169112748318LL;
unsigned char var_9 = (unsigned char)61;
short var_10 = (short)-31228;
int var_11 = -297465515;
long long int var_12 = -617620970963552343LL;
short var_13 = (short)-6854;
unsigned int var_14 = 1337700190U;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3884740269U;
unsigned int var_18 = 2285356279U;
int var_19 = -893252705;
unsigned char var_20 = (unsigned char)205;
unsigned int var_21 = 770712839U;
unsigned long long int var_22 = 16633270450235805495ULL;
long long int var_23 = 7520685835126828730LL;
unsigned int var_24 = 1984969632U;
long long int var_25 = -3837355598421446370LL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 4241715475259245209LL;
unsigned int var_28 = 1403588045U;
long long int var_29 = -1677151680974827067LL;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)25054;
int var_32 = 681778456;
long long int var_33 = 617977498687121820LL;
unsigned char var_34 = (unsigned char)212;
unsigned short var_35 = (unsigned short)16366;
unsigned short var_36 = (unsigned short)36663;
_Bool var_37 = (_Bool)0;
_Bool var_38 = (_Bool)0;
unsigned long long int var_39 = 5826843691633499391ULL;
short var_40 = (short)-6307;
unsigned long long int var_41 = 11079977082750934398ULL;
int var_42 = 384152975;
signed char var_43 = (signed char)-101;
long long int var_44 = -2346769604079799180LL;
int var_45 = 860258241;
int var_46 = -1398756935;
unsigned long long int var_47 = 14181877369941733341ULL;
signed char var_48 = (signed char)58;
_Bool var_49 = (_Bool)1;
_Bool var_50 = (_Bool)0;
long long int var_51 = -1411313816491975718LL;
long long int var_52 = -2056915518416152378LL;
unsigned short var_53 = (unsigned short)12279;
unsigned int var_54 = 904144619U;
int var_55 = 408808214;
_Bool var_56 = (_Bool)0;
int var_57 = -1472188615;
signed char var_58 = (signed char)37;
unsigned int var_59 = 4247382282U;
int var_60 = 1868625892;
signed char var_61 = (signed char)87;
unsigned int var_62 = 2409473767U;
short var_63 = (short)-28296;
signed char var_64 = (signed char)87;
signed char var_65 = (signed char)-93;
long long int var_66 = -5843255888513268758LL;
signed char var_67 = (signed char)53;
unsigned int var_68 = 3170537304U;
unsigned int var_69 = 2517803386U;
int var_70 = -166571343;
int var_71 = -2143990144;
signed char var_72 = (signed char)-49;
short var_73 = (short)-10249;
short var_74 = (short)-28107;
_Bool var_75 = (_Bool)1;
unsigned long long int arr_0 [13] ;
long long int arr_1 [13] [13] ;
long long int arr_2 [13] ;
signed char arr_3 [13] [13] ;
unsigned int arr_4 [13] ;
unsigned short arr_5 [13] ;
unsigned char arr_8 [13] [13] [13] ;
long long int arr_9 [13] [13] [13] ;
_Bool arr_10 [13] [13] [13] ;
_Bool arr_11 [13] [13] [13] [13] ;
unsigned char arr_13 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_14 [13] [13] ;
unsigned long long int arr_15 [13] [13] [13] ;
int arr_16 [13] [13] [13] [13] [13] [13] [13] ;
unsigned char arr_17 [13] [13] [13] [13] [13] ;
signed char arr_18 [13] [13] [13] [13] [13] [13] ;
_Bool arr_20 [13] [13] ;
unsigned short arr_21 [13] [13] [13] [13] ;
unsigned char arr_22 [13] [13] [13] [13] ;
unsigned short arr_23 [13] [13] [13] [13] ;
signed char arr_28 [13] [13] [13] [13] ;
unsigned int arr_29 [13] [13] ;
unsigned long long int arr_30 [13] [13] [13] [13] [13] ;
long long int arr_31 [13] [13] [13] [13] [13] ;
unsigned int arr_32 [13] [13] [13] ;
short arr_33 [13] ;
unsigned int arr_39 [13] [13] [13] ;
unsigned int arr_40 [13] [13] [13] [13] ;
short arr_41 [13] ;
unsigned int arr_42 [13] [13] [13] [13] [13] ;
unsigned char arr_47 [13] [13] [13] [13] [13] ;
unsigned short arr_48 [13] ;
long long int arr_50 [13] [13] [13] [13] ;
_Bool arr_51 [13] [13] [13] [13] ;
unsigned short arr_62 [22] ;
long long int arr_63 [22] [22] ;
unsigned long long int arr_64 [22] [22] [22] ;
unsigned int arr_65 [22] [22] [22] ;
long long int arr_66 [22] [22] [22] ;
unsigned long long int arr_68 [22] ;
unsigned long long int arr_69 [22] [22] [22] ;
unsigned int arr_70 [22] [22] ;
_Bool arr_73 [22] [22] [22] [22] [22] [22] ;
unsigned int arr_74 [22] [22] [22] [22] ;
long long int arr_75 [22] [22] [22] [22] [22] [22] [22] ;
long long int arr_76 [22] [22] [22] [22] [22] [22] [22] ;
unsigned char arr_82 [22] ;
_Bool arr_84 [22] [22] [22] [22] ;
unsigned int arr_85 [22] [22] [22] [22] ;
_Bool arr_88 [22] [22] [22] [22] [22] [22] [22] ;
signed char arr_91 [22] [22] [22] [22] ;
long long int arr_6 [13] [13] [13] ;
unsigned int arr_7 [13] ;
unsigned short arr_12 [13] ;
unsigned short arr_19 [13] [13] [13] ;
unsigned short arr_24 [13] [13] [13] [13] ;
int arr_25 [13] [13] [13] [13] [13] ;
long long int arr_26 [13] [13] ;
_Bool arr_27 [13] [13] [13] ;
signed char arr_34 [13] [13] [13] ;
unsigned short arr_35 [13] [13] [13] [13] ;
long long int arr_36 [13] [13] [13] [13] ;
unsigned char arr_37 [13] [13] [13] [13] ;
long long int arr_44 [13] [13] [13] [13] [13] ;
_Bool arr_45 [13] [13] ;
_Bool arr_46 [13] [13] [13] [13] ;
unsigned int arr_49 [13] ;
short arr_52 [13] ;
long long int arr_60 [13] [13] [13] [13] [13] ;
unsigned char arr_61 [13] ;
_Bool arr_67 [22] ;
int arr_77 [22] [22] [22] [22] [22] ;
unsigned int arr_78 [22] [22] ;
_Bool arr_79 [22] ;
unsigned short arr_80 [22] [22] ;
unsigned long long int arr_93 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 9712683058946535238ULL : 2020073979011961562ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -4491122587606449001LL : -8544454886195482181LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -7715844816081725878LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-47 : (signed char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 988968357U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)17619;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)90 : (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -5782220559330390438LL : -4390600616558232108LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned char)39 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 4212078806U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5548692606552916611ULL : 6043549601866278215ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -137820523;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)51199;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)36490;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? 4115188030U : 2593173543U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 11831355305213515302ULL : 10593992392107769260ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = -3565744820740696954LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 1600750873U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = (short)5721;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 656112994U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1964555398U : 1180633624U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_41 [i_0] = (short)9154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = 624494729U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_48 [i_0] = (unsigned short)49292;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = -1202607351826808211LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_62 [i_0] = (unsigned short)31190;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_63 [i_0] [i_1] = 2839507233304551861LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = 6699945846939417224ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = 2093309643U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = -5849444947194246035LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_68 [i_0] = 1881588699108622811ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_69 [i_0] [i_1] [i_2] = 18228725039829127194ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_70 [i_0] [i_1] = 1467316485U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = 282464128U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? -7524304310522967402LL : 1752195010876368655LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3315980556564001998LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_82 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_85 [i_0] [i_1] [i_2] [i_3] = 3712389401U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_88 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7046456704327996140LL : -1723796629854320241LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 4096112231U : 3612381851U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1979 : (unsigned short)27570;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)218 : (unsigned short)2914;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)46294 : (unsigned short)6054;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -1028902534 : -770833890;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? -8959960925920206092LL : 4404826423127171619LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)4 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)59150 : (unsigned short)62957;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1932825136544943757LL : 4926480773124522959LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)211 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 906687536418971863LL : -7219586365058107942LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? 1544099649U : 2578083173U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? (short)-15787 : (short)-9616;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -5021770263615591727LL : -1518670019160639227LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_61 [i_0] = (i_0 % 2 == 0) ? (unsigned char)230 : (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_67 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -420965397 : 2100772422;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_78 [i_0] [i_1] = 616072345U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_79 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_80 [i_0] [i_1] = (unsigned short)51706;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_93 [i_0] [i_1] [i_2] = 10375666920074647643ULL;
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
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_61 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_67 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_78 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_79 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_80 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_93 [i_0] [i_1] [i_2] );
}
void test(signed char var_0, unsigned char var_1, int var_2, unsigned long long int var_3, _Bool var_4, unsigned int var_5, long long int var_6, _Bool var_7, long long int var_8, unsigned char var_9, short var_10, int var_11, long long int var_12, short var_13, unsigned int var_14, int zero, unsigned long long int arr_0 [13] , long long int arr_1 [13] [13] , long long int arr_2 [13] , signed char arr_3 [13] [13] , unsigned int arr_4 [13] , unsigned short arr_5 [13] , unsigned char arr_8 [13] [13] [13] , long long int arr_9 [13] [13] [13] , _Bool arr_10 [13] [13] [13] , _Bool arr_11 [13] [13] [13] [13] , unsigned char arr_13 [13] [13] [13] [13] [13] [13] , unsigned int arr_14 [13] [13] , unsigned long long int arr_15 [13] [13] [13] , int arr_16 [13] [13] [13] [13] [13] [13] [13] , unsigned char arr_17 [13] [13] [13] [13] [13] , signed char arr_18 [13] [13] [13] [13] [13] [13] , _Bool arr_20 [13] [13] , unsigned short arr_21 [13] [13] [13] [13] , unsigned char arr_22 [13] [13] [13] [13] , unsigned short arr_23 [13] [13] [13] [13] , signed char arr_28 [13] [13] [13] [13] , unsigned int arr_29 [13] [13] , unsigned long long int arr_30 [13] [13] [13] [13] [13] , long long int arr_31 [13] [13] [13] [13] [13] , unsigned int arr_32 [13] [13] [13] , short arr_33 [13] , unsigned int arr_39 [13] [13] [13] , unsigned int arr_40 [13] [13] [13] [13] , short arr_41 [13] , unsigned int arr_42 [13] [13] [13] [13] [13] , unsigned char arr_47 [13] [13] [13] [13] [13] , unsigned short arr_48 [13] , long long int arr_50 [13] [13] [13] [13] , _Bool arr_51 [13] [13] [13] [13] , unsigned short arr_62 [22] , long long int arr_63 [22] [22] , unsigned long long int arr_64 [22] [22] [22] , unsigned int arr_65 [22] [22] [22] , long long int arr_66 [22] [22] [22] , unsigned long long int arr_68 [22] , unsigned long long int arr_69 [22] [22] [22] , unsigned int arr_70 [22] [22] , _Bool arr_73 [22] [22] [22] [22] [22] [22] , unsigned int arr_74 [22] [22] [22] [22] , long long int arr_75 [22] [22] [22] [22] [22] [22] [22] , long long int arr_76 [22] [22] [22] [22] [22] [22] [22] , unsigned char arr_82 [22] , _Bool arr_84 [22] [22] [22] [22] , unsigned int arr_85 [22] [22] [22] [22] , _Bool arr_88 [22] [22] [22] [22] [22] [22] [22] , signed char arr_91 [22] [22] [22] [22] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_8 , arr_9 , arr_10 , arr_11 , arr_13 , arr_14 , arr_15 , arr_16 , arr_17 , arr_18 , arr_20 , arr_21 , arr_22 , arr_23 , arr_28 , arr_29 , arr_30 , arr_31 , arr_32 , arr_33 , arr_39 , arr_40 , arr_41 , arr_42 , arr_47 , arr_48 , arr_50 , arr_51 , arr_62 , arr_63 , arr_64 , arr_65 , arr_66 , arr_68 , arr_69 , arr_70 , arr_73 , arr_74 , arr_75 , arr_76 , arr_82 , arr_84 , arr_85 , arr_88 , arr_91 );
    checksum();
    printf("%llu\n", seed);
}
