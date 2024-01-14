#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-23108;
unsigned char var_2 = (unsigned char)233;
int var_3 = -1020639055;
short var_4 = (short)-9474;
short var_5 = (short)-17912;
signed char var_6 = (signed char)79;
unsigned int var_7 = 1390048523U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)41140;
unsigned char var_10 = (unsigned char)230;
unsigned int var_11 = 649169474U;
unsigned short var_12 = (unsigned short)19190;
unsigned char var_13 = (unsigned char)140;
unsigned int var_14 = 3241410386U;
int zero = 0;
signed char var_15 = (signed char)-84;
unsigned char var_16 = (unsigned char)251;
unsigned long long int var_17 = 17822483718007986657ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)221;
signed char var_20 = (signed char)-105;
unsigned short var_21 = (unsigned short)30217;
unsigned int var_22 = 2009047640U;
signed char var_23 = (signed char)-93;
unsigned int var_24 = 2132017150U;
long long int var_25 = -4072678203834528069LL;
unsigned long long int var_26 = 11873404793882948934ULL;
unsigned short var_27 = (unsigned short)14313;
long long int var_28 = -1645400432468425593LL;
int var_29 = -1665973147;
long long int var_30 = -3775316999200899313LL;
unsigned char var_31 = (unsigned char)71;
unsigned int var_32 = 3803525808U;
unsigned long long int var_33 = 18086646135828009705ULL;
unsigned char var_34 = (unsigned char)82;
unsigned int var_35 = 387448628U;
_Bool var_36 = (_Bool)0;
unsigned char var_37 = (unsigned char)45;
unsigned char var_38 = (unsigned char)94;
unsigned char var_39 = (unsigned char)78;
unsigned long long int var_40 = 10466563696076151922ULL;
short var_41 = (short)27782;
long long int var_42 = 4820908170249500423LL;
unsigned char var_43 = (unsigned char)41;
unsigned char var_44 = (unsigned char)173;
long long int var_45 = -6081833149643232837LL;
unsigned int var_46 = 2694201467U;
int var_47 = -640387831;
unsigned int var_48 = 2387482074U;
unsigned long long int var_49 = 7541161235906658231ULL;
unsigned char var_50 = (unsigned char)42;
short var_51 = (short)-15755;
unsigned char var_52 = (unsigned char)67;
signed char var_53 = (signed char)-87;
unsigned char var_54 = (unsigned char)164;
unsigned int var_55 = 1080700036U;
unsigned short var_56 = (unsigned short)4367;
signed char var_57 = (signed char)-43;
short var_58 = (short)8639;
unsigned long long int var_59 = 6222824165595354776ULL;
signed char var_60 = (signed char)-71;
signed char var_61 = (signed char)73;
long long int var_62 = -359858413348673117LL;
signed char var_63 = (signed char)-72;
_Bool var_64 = (_Bool)0;
_Bool var_65 = (_Bool)1;
_Bool var_66 = (_Bool)1;
long long int arr_0 [15] ;
long long int arr_1 [15] ;
unsigned int arr_2 [15] [15] ;
unsigned short arr_3 [15] [15] ;
unsigned int arr_4 [15] [15] ;
unsigned long long int arr_5 [15] ;
unsigned short arr_6 [15] [15] ;
int arr_7 [15] [15] [15] [15] [15] [15] ;
short arr_8 [15] [15] [15] [15] ;
unsigned short arr_9 [15] [15] [15] [15] [15] [15] ;
signed char arr_10 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_11 [15] [15] [15] [15] ;
unsigned int arr_12 [13] ;
unsigned long long int arr_14 [15] [15] ;
_Bool arr_15 [15] ;
_Bool arr_16 [15] ;
signed char arr_17 [15] ;
unsigned char arr_18 [15] [15] [15] ;
unsigned int arr_19 [15] [15] [15] ;
unsigned short arr_20 [15] [15] [15] [15] ;
short arr_21 [15] [15] [15] [15] ;
int arr_22 [15] ;
_Bool arr_23 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_26 [15] [15] [15] ;
unsigned long long int arr_27 [15] [15] [15] [15] ;
unsigned long long int arr_28 [15] [15] [15] [15] ;
int arr_29 [15] [15] [15] [15] [15] ;
unsigned short arr_30 [15] [15] [15] [15] [15] [15] ;
signed char arr_31 [15] [15] [15] [15] [15] ;
unsigned short arr_32 [15] [15] [15] [15] ;
unsigned char arr_33 [15] [15] [15] [15] [15] [15] ;
signed char arr_34 [15] [15] [15] ;
unsigned int arr_35 [15] [15] [15] [15] [15] [15] ;
unsigned char arr_38 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_39 [15] [15] ;
unsigned int arr_40 [15] [15] ;
short arr_42 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2435286536074658082LL : -8941103008746130884LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -3486518145675453525LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 3024427107U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)41589 : (unsigned short)14493;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 608856055U : 2802576119U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 12577495395727335916ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)10702;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1124908599;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-692;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)10547 : (unsigned short)6919;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 309712486719140265ULL : 10153609061537290314ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 124038188U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 5573734528414726216ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-38 : (signed char)72;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)96 : (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1913514772U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7753;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (short)-13476;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = -1848957669;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)47030 : (unsigned short)52646;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 13092162103664670198ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 16173156069243216623ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = -936631650;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)7779;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-88 : (signed char)78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43633;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3753423022U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_39 [i_0] [i_1] = 6185233U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? 3827519098U : 282936220U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)6846 : (short)12178;
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
}
void test(_Bool var_0, short var_1, unsigned char var_2, int var_3, short var_4, short var_5, signed char var_6, unsigned int var_7, _Bool var_8, unsigned short var_9, unsigned char var_10, unsigned int var_11, unsigned short var_12, unsigned char var_13, unsigned int var_14, int zero, long long int arr_0 [15] , long long int arr_1 [15] , unsigned int arr_2 [15] [15] , unsigned short arr_3 [15] [15] , unsigned int arr_4 [15] [15] , unsigned long long int arr_5 [15] , unsigned short arr_6 [15] [15] , int arr_7 [15] [15] [15] [15] [15] [15] , short arr_8 [15] [15] [15] [15] , unsigned short arr_9 [15] [15] [15] [15] [15] [15] , signed char arr_10 [15] [15] [15] [15] [15] [15] , unsigned long long int arr_11 [15] [15] [15] [15] , unsigned int arr_12 [13] , unsigned long long int arr_14 [15] [15] , _Bool arr_15 [15] , _Bool arr_16 [15] , signed char arr_17 [15] , unsigned char arr_18 [15] [15] [15] , unsigned int arr_19 [15] [15] [15] , unsigned short arr_20 [15] [15] [15] [15] , short arr_21 [15] [15] [15] [15] , int arr_22 [15] , _Bool arr_23 [15] [15] [15] [15] [15] [15] , unsigned short arr_26 [15] [15] [15] , unsigned long long int arr_27 [15] [15] [15] [15] , unsigned long long int arr_28 [15] [15] [15] [15] , int arr_29 [15] [15] [15] [15] [15] , unsigned short arr_30 [15] [15] [15] [15] [15] [15] , signed char arr_31 [15] [15] [15] [15] [15] , unsigned short arr_32 [15] [15] [15] [15] , unsigned char arr_33 [15] [15] [15] [15] [15] [15] , signed char arr_34 [15] [15] [15] , unsigned int arr_35 [15] [15] [15] [15] [15] [15] , unsigned char arr_38 [15] [15] [15] [15] [15] [15] , unsigned int arr_39 [15] [15] , unsigned int arr_40 [15] [15] , short arr_42 [15] [15] [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_14 , arr_15 , arr_16 , arr_17 , arr_18 , arr_19 , arr_20 , arr_21 , arr_22 , arr_23 , arr_26 , arr_27 , arr_28 , arr_29 , arr_30 , arr_31 , arr_32 , arr_33 , arr_34 , arr_35 , arr_38 , arr_39 , arr_40 , arr_42 );
    checksum();
    printf("%llu\n", seed);
}
