#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26052;
unsigned short var_1 = (unsigned short)46229;
signed char var_2 = (signed char)7;
long long int var_3 = -2158303673444605371LL;
unsigned short var_4 = (unsigned short)7054;
unsigned char var_5 = (unsigned char)37;
long long int var_6 = -8364262458270408785LL;
int var_7 = 1648385792;
unsigned short var_8 = (unsigned short)57547;
unsigned long long int var_9 = 18295203154708489722ULL;
unsigned long long int var_10 = 5918425847439141322ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = 1807340516;
unsigned long long int var_14 = 10375961679028660469ULL;
signed char var_15 = (signed char)76;
unsigned char var_16 = (unsigned char)168;
signed char var_17 = (signed char)-8;
unsigned long long int var_18 = 4673372304730587999ULL;
int zero = 0;
int var_19 = 58846074;
short var_20 = (short)-1410;
signed char var_21 = (signed char)-107;
unsigned short var_22 = (unsigned short)5445;
unsigned long long int var_23 = 6651709860961310129ULL;
unsigned long long int var_24 = 3705631953055233514ULL;
int var_25 = -1834553543;
int var_26 = 931678396;
unsigned short var_27 = (unsigned short)56002;
int var_28 = -85539444;
short var_29 = (short)-10522;
unsigned char var_30 = (unsigned char)60;
long long int var_31 = -1666436925826210042LL;
unsigned short var_32 = (unsigned short)52618;
unsigned short var_33 = (unsigned short)53705;
int var_34 = -1800825031;
signed char var_35 = (signed char)56;
int var_36 = 1786399456;
signed char var_37 = (signed char)1;
unsigned char var_38 = (unsigned char)243;
signed char var_39 = (signed char)-82;
long long int var_40 = -5713179443024293480LL;
long long int var_41 = -6678210516555762658LL;
short var_42 = (short)-11419;
long long int var_43 = -6863337234584257024LL;
signed char var_44 = (signed char)-16;
short var_45 = (short)24310;
long long int var_46 = 1406081791893883548LL;
int var_47 = -155335883;
_Bool var_48 = (_Bool)0;
_Bool var_49 = (_Bool)0;
unsigned long long int var_50 = 14153757814444305652ULL;
unsigned long long int var_51 = 7719794439154199689ULL;
_Bool var_52 = (_Bool)0;
unsigned long long int var_53 = 13143568237143711052ULL;
int var_54 = 394028916;
unsigned char var_55 = (unsigned char)85;
unsigned long long int var_56 = 9772612372689860561ULL;
unsigned char var_57 = (unsigned char)54;
_Bool var_58 = (_Bool)0;
unsigned long long int var_59 = 16349213185072175004ULL;
unsigned long long int var_60 = 16934646666194582126ULL;
short var_61 = (short)-27237;
short var_62 = (short)-26110;
unsigned short var_63 = (unsigned short)57556;
int var_64 = 282531939;
int var_65 = -1286493894;
unsigned char arr_0 [23] ;
int arr_1 [23] ;
int arr_2 [23] ;
signed char arr_3 [23] ;
int arr_4 [23] [23] [23] ;
signed char arr_5 [23] ;
short arr_6 [23] ;
long long int arr_7 [23] ;
long long int arr_8 [23] [23] [23] [23] ;
unsigned long long int arr_11 [23] [23] [23] [23] ;
int arr_12 [23] [23] [23] [23] ;
int arr_15 [23] [23] [23] [23] [23] ;
int arr_16 [23] [23] [23] [23] [23] [23] ;
short arr_20 [23] ;
int arr_21 [23] [23] [23] [23] ;
signed char arr_23 [23] [23] [23] [23] ;
unsigned int arr_25 [23] ;
long long int arr_26 [23] [23] [23] ;
int arr_27 [23] [23] [23] [23] ;
short arr_28 [23] [23] [23] [23] ;
short arr_30 [23] ;
int arr_31 [23] [23] [23] ;
int arr_32 [23] [23] [23] ;
unsigned char arr_33 [23] [23] ;
_Bool arr_35 [23] [23] [23] [23] ;
int arr_38 [23] ;
signed char arr_39 [23] [23] [23] [23] [23] ;
short arr_40 [23] ;
int arr_42 [23] ;
unsigned short arr_49 [23] [23] [23] ;
unsigned int arr_52 [23] ;
signed char arr_54 [23] [23] [23] [23] ;
signed char arr_60 [23] [23] [23] [23] [23] ;
int arr_61 [23] [23] [23] [23] [23] [23] [23] ;
long long int arr_64 [23] ;
unsigned long long int arr_67 [23] [23] [23] [23] [23] ;
unsigned short arr_71 [22] [22] ;
unsigned long long int arr_75 [19] ;
int arr_78 [19] [19] [19] [19] ;
unsigned char arr_17 [23] [23] [23] [23] ;
signed char arr_18 [23] ;
short arr_29 [23] ;
int arr_43 [23] [23] ;
signed char arr_62 [23] [23] ;
int arr_69 [23] [23] [23] [23] [23] ;
long long int arr_70 [23] [23] [23] [23] [23] [23] ;
int arr_81 [19] [19] [19] [19] ;
unsigned long long int arr_82 [19] ;
unsigned char arr_89 [19] [19] ;
int arr_95 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -416301352;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1531009689;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -431642343;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)25654 : (short)-9667;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 5642151633617644087LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -6626736306642532920LL : 9050913243548390026LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2139704723028647526ULL : 15021489506017205342ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 875977274 : -1550308737;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = -1748386614;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 2020889620 : 1316893402;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)-14121 : (short)-27999;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 544795200 : 1093959440;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = 2503016278U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 2866684124351418509LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = -977540470;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-6587 : (short)6807;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (short)1685 : (short)21619;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 1946834685;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 126032427;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = 1585562754;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_40 [i_0] = (short)11571;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = 1671270189;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (unsigned short)45028;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? 306110618U : 4147610003U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)85 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 280156255 : 391917417;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_64 [i_0] = (i_0 % 2 == 0) ? -451648413718623717LL : 6320067880496758971LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 17667066944151795403ULL : 10248403515284519661ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_71 [i_0] [i_1] = (unsigned short)24119;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_75 [i_0] = 16901338778991950800ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = -79920863;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)26 : (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-16 : (signed char)78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (short)14833 : (short)24554;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? -573192960 : -921731847;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_62 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)123 : (signed char)-79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1468686980 : 1538867208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 8381160941463494009LL : 3445334057545210876LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_81 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 308266399 : 1855459090;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_82 [i_0] = 9681236291835810842ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_89 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)213 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_95 [i_0] = (i_0 % 2 == 0) ? 640702013 : 1034693067;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_81 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_82 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_89 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_95 [i_0] );
}
void test(short var_0, unsigned short var_1, signed char var_2, long long int var_3, unsigned short var_4, unsigned char var_5, long long int var_6, int var_7, unsigned short var_8, unsigned long long int var_9, unsigned long long int var_10, _Bool var_11, _Bool var_12, int var_13, unsigned long long int var_14, signed char var_15, unsigned char var_16, signed char var_17, unsigned long long int var_18, int zero, unsigned char arr_0 [23] , int arr_1 [23] , int arr_2 [23] , signed char arr_3 [23] , int arr_4 [23] [23] [23] , signed char arr_5 [23] , short arr_6 [23] , long long int arr_7 [23] , long long int arr_8 [23] [23] [23] [23] , unsigned long long int arr_11 [23] [23] [23] [23] , int arr_12 [23] [23] [23] [23] , int arr_15 [23] [23] [23] [23] [23] , int arr_16 [23] [23] [23] [23] [23] [23] , short arr_20 [23] , int arr_21 [23] [23] [23] [23] , signed char arr_23 [23] [23] [23] [23] , unsigned int arr_25 [23] , long long int arr_26 [23] [23] [23] , int arr_27 [23] [23] [23] [23] , short arr_28 [23] [23] [23] [23] , short arr_30 [23] , int arr_31 [23] [23] [23] , int arr_32 [23] [23] [23] , unsigned char arr_33 [23] [23] , _Bool arr_35 [23] [23] [23] [23] , int arr_38 [23] , signed char arr_39 [23] [23] [23] [23] [23] , short arr_40 [23] , int arr_42 [23] , unsigned short arr_49 [23] [23] [23] , unsigned int arr_52 [23] , signed char arr_54 [23] [23] [23] [23] , signed char arr_60 [23] [23] [23] [23] [23] , int arr_61 [23] [23] [23] [23] [23] [23] [23] , long long int arr_64 [23] , unsigned long long int arr_67 [23] [23] [23] [23] [23] , unsigned short arr_71 [22] [22] , unsigned long long int arr_75 [19] , int arr_78 [19] [19] [19] [19] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_11 , arr_12 , arr_15 , arr_16 , arr_20 , arr_21 , arr_23 , arr_25 , arr_26 , arr_27 , arr_28 , arr_30 , arr_31 , arr_32 , arr_33 , arr_35 , arr_38 , arr_39 , arr_40 , arr_42 , arr_49 , arr_52 , arr_54 , arr_60 , arr_61 , arr_64 , arr_67 , arr_71 , arr_75 , arr_78 );
    checksum();
    printf("%llu\n", seed);
}
