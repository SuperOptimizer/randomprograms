#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
unsigned long long int var_1 = 14430872316122734970ULL;
unsigned long long int var_2 = 3214909861914524413ULL;
int var_3 = 759978336;
signed char var_4 = (signed char)-18;
unsigned char var_5 = (unsigned char)136;
short var_6 = (short)-12163;
short var_7 = (short)24970;
long long int var_8 = -4126929844924006113LL;
int var_9 = -53224176;
int var_10 = 1973778316;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 1971439608;
signed char var_13 = (signed char)-41;
int var_14 = 1545209077;
int var_15 = 873035906;
unsigned long long int var_16 = 379291189725928888ULL;
unsigned long long int var_17 = 16296655224487823784ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)49190;
_Bool var_20 = (_Bool)1;
int var_21 = 502700935;
short var_22 = (short)-2806;
unsigned char var_23 = (unsigned char)191;
unsigned short var_24 = (unsigned short)63687;
unsigned char var_25 = (unsigned char)184;
int var_26 = 305980109;
short var_27 = (short)32150;
long long int var_28 = -1994109516001860893LL;
unsigned long long int var_29 = 9430293591309975167ULL;
_Bool var_30 = (_Bool)0;
int var_31 = -1713776763;
signed char var_32 = (signed char)92;
signed char var_33 = (signed char)-65;
short var_34 = (short)13772;
signed char var_35 = (signed char)47;
short var_36 = (short)21790;
int var_37 = -901387334;
unsigned short var_38 = (unsigned short)48076;
int var_39 = -1563794857;
unsigned long long int var_40 = 12681109672241035121ULL;
unsigned char var_41 = (unsigned char)146;
unsigned long long int var_42 = 14312035559888111205ULL;
unsigned long long int var_43 = 15195085826364010343ULL;
signed char var_44 = (signed char)-53;
int var_45 = 2127978648;
int var_46 = 1988298691;
signed char var_47 = (signed char)-92;
unsigned long long int var_48 = 11284073183852800225ULL;
unsigned char var_49 = (unsigned char)183;
short var_50 = (short)21565;
unsigned int var_51 = 3933966446U;
short var_52 = (short)-18219;
signed char var_53 = (signed char)-45;
unsigned int var_54 = 2979816110U;
signed char var_55 = (signed char)112;
unsigned short var_56 = (unsigned short)25251;
short var_57 = (short)22063;
long long int var_58 = 5415972232397787893LL;
unsigned char var_59 = (unsigned char)42;
int var_60 = -112716236;
short var_61 = (short)10382;
signed char var_62 = (signed char)-117;
unsigned long long int arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
signed char arr_2 [14] ;
int arr_3 [14] [14] ;
unsigned short arr_4 [14] [14] ;
unsigned int arr_5 [14] ;
unsigned short arr_6 [14] ;
int arr_7 [14] ;
unsigned short arr_8 [14] ;
unsigned char arr_9 [14] [14] [14] ;
long long int arr_10 [14] [14] [14] ;
unsigned short arr_11 [14] [14] [14] ;
short arr_12 [14] [14] [14] [14] ;
unsigned char arr_15 [14] [14] [14] [14] [14] ;
signed char arr_16 [14] [14] [14] [14] [14] [14] ;
signed char arr_17 [14] [14] [14] [14] [14] [14] ;
int arr_18 [14] [14] [14] [14] ;
_Bool arr_19 [14] [14] ;
unsigned int arr_20 [14] [14] [14] [14] [14] ;
short arr_23 [14] [14] [14] [14] [14] [14] [14] ;
unsigned short arr_36 [17] ;
unsigned char arr_37 [17] ;
long long int arr_38 [17] [17] ;
int arr_39 [17] [17] ;
unsigned short arr_40 [17] [17] ;
unsigned char arr_43 [17] [17] [17] ;
signed char arr_44 [17] [17] [17] [17] [17] [17] ;
signed char arr_45 [17] [17] [17] [17] ;
unsigned char arr_46 [17] [17] ;
unsigned short arr_47 [17] [17] [17] [17] [17] ;
unsigned long long int arr_49 [17] [17] ;
int arr_53 [17] ;
unsigned char arr_54 [23] ;
_Bool arr_55 [23] [23] ;
unsigned long long int arr_56 [23] [23] [23] ;
short arr_57 [23] ;
unsigned long long int arr_58 [23] [23] ;
unsigned short arr_59 [23] [23] ;
unsigned long long int arr_60 [23] ;
signed char arr_63 [23] ;
short arr_65 [23] [23] ;
_Bool arr_68 [23] [23] [23] ;
unsigned short arr_70 [23] [23] ;
unsigned short arr_14 [14] [14] [14] [14] ;
int arr_24 [14] [14] [14] [14] [14] [14] [14] ;
long long int arr_28 [14] [14] [14] ;
unsigned long long int arr_33 [14] ;
signed char arr_34 [14] [14] [14] ;
short arr_35 [14] ;
short arr_41 [17] [17] [17] ;
unsigned int arr_48 [17] [17] [17] [17] [17] ;
int arr_51 [17] ;
short arr_62 [23] ;
unsigned long long int arr_66 [23] [23] [23] ;
int arr_74 [23] ;
signed char arr_75 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 17799375628896242237ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1435780572U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 495033994;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)53486;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 816529844U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)922;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -1634737194;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)31592;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 7919411176437463012LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)24275;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-3961 : (short)-119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)127 : (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1981776941;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 3917544346U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-13113;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_36 [i_0] = (unsigned short)31734;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_37 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_38 [i_0] [i_1] = 336324944830755631LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_39 [i_0] [i_1] = -1345400936;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)8794;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)62257;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_49 [i_0] [i_1] = 14896676224939126604ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_53 [i_0] = 746590227;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_54 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_55 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = 3505765381865625692ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_57 [i_0] = (short)870;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_58 [i_0] [i_1] = 1066859620595910632ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_59 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)19215 : (unsigned short)11733;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_60 [i_0] = 15894505410699171954ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_63 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_65 [i_0] [i_1] = (short)-28081;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_70 [i_0] [i_1] = (unsigned short)6395;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)5938 : (unsigned short)11614;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 1032167131 : -917860373;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 7454237398781514019LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = 2665632852115301941ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = (short)19734;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (short)7138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = 2588397881U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_51 [i_0] = -15454668;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_62 [i_0] = (i_0 % 2 == 0) ? (short)442 : (short)-30520;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = 3684414864852062077ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_74 [i_0] = 772087216;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_75 [i_0] [i_1] = (signed char)111;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_66 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_75 [i_0] [i_1] );
}
void test(unsigned char var_0, unsigned long long int var_1, unsigned long long int var_2, int var_3, signed char var_4, unsigned char var_5, short var_6, short var_7, long long int var_8, int var_9, int var_10, _Bool var_11, int zero, unsigned long long int arr_0 [14] [14] , unsigned int arr_1 [14] , signed char arr_2 [14] , int arr_3 [14] [14] , unsigned short arr_4 [14] [14] , unsigned int arr_5 [14] , unsigned short arr_6 [14] , int arr_7 [14] , unsigned short arr_8 [14] , unsigned char arr_9 [14] [14] [14] , long long int arr_10 [14] [14] [14] , unsigned short arr_11 [14] [14] [14] , short arr_12 [14] [14] [14] [14] , unsigned char arr_15 [14] [14] [14] [14] [14] , signed char arr_16 [14] [14] [14] [14] [14] [14] , signed char arr_17 [14] [14] [14] [14] [14] [14] , int arr_18 [14] [14] [14] [14] , _Bool arr_19 [14] [14] , unsigned int arr_20 [14] [14] [14] [14] [14] , short arr_23 [14] [14] [14] [14] [14] [14] [14] , unsigned short arr_36 [17] , unsigned char arr_37 [17] , long long int arr_38 [17] [17] , int arr_39 [17] [17] , unsigned short arr_40 [17] [17] , unsigned char arr_43 [17] [17] [17] , signed char arr_44 [17] [17] [17] [17] [17] [17] , signed char arr_45 [17] [17] [17] [17] , unsigned char arr_46 [17] [17] , unsigned short arr_47 [17] [17] [17] [17] [17] , unsigned long long int arr_49 [17] [17] , int arr_53 [17] , unsigned char arr_54 [23] , _Bool arr_55 [23] [23] , unsigned long long int arr_56 [23] [23] [23] , short arr_57 [23] , unsigned long long int arr_58 [23] [23] , unsigned short arr_59 [23] [23] , unsigned long long int arr_60 [23] , signed char arr_63 [23] , short arr_65 [23] [23] , _Bool arr_68 [23] [23] [23] , unsigned short arr_70 [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_15 , arr_16 , arr_17 , arr_18 , arr_19 , arr_20 , arr_23 , arr_36 , arr_37 , arr_38 , arr_39 , arr_40 , arr_43 , arr_44 , arr_45 , arr_46 , arr_47 , arr_49 , arr_53 , arr_54 , arr_55 , arr_56 , arr_57 , arr_58 , arr_59 , arr_60 , arr_63 , arr_65 , arr_68 , arr_70 );
    checksum();
    printf("%llu\n", seed);
}
