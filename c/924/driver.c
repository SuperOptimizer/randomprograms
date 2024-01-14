#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)28;
unsigned short var_2 = (unsigned short)58598;
unsigned long long int var_3 = 3845207579705957760ULL;
unsigned int var_4 = 1580124542U;
short var_5 = (short)17566;
int var_6 = -428749921;
long long int var_7 = 8725047890658150577LL;
signed char var_8 = (signed char)-125;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2594551305U;
signed char var_11 = (signed char)-25;
unsigned short var_12 = (unsigned short)45347;
long long int var_13 = -6385211180375250378LL;
short var_14 = (short)4844;
unsigned int var_15 = 1590795061U;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)85;
short var_18 = (short)-13274;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 572331966U;
unsigned char var_21 = (unsigned char)235;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
short var_24 = (short)27871;
long long int var_25 = 8775194088368339936LL;
unsigned long long int var_26 = 3327030582738614870ULL;
int var_27 = -1091593290;
unsigned char var_28 = (unsigned char)18;
long long int var_29 = -4250023251292943791LL;
short var_30 = (short)32373;
long long int var_31 = -3383851603626239660LL;
short var_32 = (short)-26028;
unsigned int var_33 = 4152268849U;
short var_34 = (short)18373;
unsigned short var_35 = (unsigned short)30584;
_Bool var_36 = (_Bool)0;
unsigned short var_37 = (unsigned short)45200;
short var_38 = (short)359;
unsigned long long int var_39 = 17318468870884077081ULL;
int var_40 = 2134370754;
signed char var_41 = (signed char)-97;
unsigned short var_42 = (unsigned short)46410;
unsigned short var_43 = (unsigned short)35072;
unsigned int var_44 = 1191738089U;
short var_45 = (short)-5923;
unsigned char var_46 = (unsigned char)166;
unsigned short var_47 = (unsigned short)63611;
signed char var_48 = (signed char)-48;
signed char var_49 = (signed char)43;
short var_50 = (short)-12156;
unsigned int arr_0 [24] [24] ;
long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
short arr_3 [24] ;
unsigned long long int arr_4 [24] ;
short arr_8 [17] ;
unsigned int arr_9 [17] [17] ;
long long int arr_10 [20] ;
unsigned long long int arr_11 [20] ;
long long int arr_12 [20] [20] ;
int arr_14 [20] [20] [20] ;
_Bool arr_17 [20] [20] ;
short arr_20 [24] [24] ;
long long int arr_21 [24] [24] ;
short arr_22 [24] ;
unsigned short arr_24 [24] [24] [24] ;
unsigned long long int arr_26 [24] ;
short arr_27 [24] [24] [24] ;
short arr_28 [24] [24] [24] [24] ;
long long int arr_30 [24] [24] [24] [24] ;
unsigned long long int arr_31 [24] [24] [24] [24] [24] ;
signed char arr_32 [24] [24] [24] [24] [24] ;
unsigned long long int arr_34 [24] [24] ;
long long int arr_35 [24] [24] [24] ;
long long int arr_5 [24] [24] [24] ;
unsigned int arr_6 [24] ;
signed char arr_7 [24] ;
long long int arr_15 [20] [20] [20] ;
long long int arr_18 [20] [20] ;
long long int arr_19 [20] ;
signed char arr_38 [24] [24] [24] [24] ;
long long int arr_44 [24] [24] [24] ;
unsigned long long int arr_45 [24] [24] [24] [24] ;
signed char arr_46 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1921399115U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1505236535004496656LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 14836667975839855566ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-23211 : (short)-7457;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 9016092093209962402ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)30902;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 405633547U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -6546185535050349875LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 15003989887645126176ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = -6187288893961775754LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 385971596;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-6541;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = 5674316351288815707LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (short)-4641;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)12751;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 2030376454997717265ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)-6568;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (short)20628;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2164965924233537850LL : 1103071768390034041LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = 2808110738033584941ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)17 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = 18027898406696839051ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = -809217984121474709LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -4973362621291773181LL : -6408815440603669821LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1415702145U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 6974663359827047876LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = 7357372462970210632LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = 7134599760852552561LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)106 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -6235649999291648105LL : -2188372310163018681LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 5864299542044374438ULL : 6277539576309904638ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_46 [i_0] [i_1] = (signed char)61;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
}
void test(_Bool var_0, signed char var_1, unsigned short var_2, unsigned long long int var_3, unsigned int var_4, short var_5, int var_6, long long int var_7, signed char var_8, _Bool var_9, unsigned int var_10, signed char var_11, unsigned short var_12, long long int var_13, short var_14, unsigned int var_15, _Bool var_16, int zero, unsigned int arr_0 [24] [24] , long long int arr_1 [24] , unsigned long long int arr_2 [24] , short arr_3 [24] , unsigned long long int arr_4 [24] , short arr_8 [17] , unsigned int arr_9 [17] [17] , long long int arr_10 [20] , unsigned long long int arr_11 [20] , long long int arr_12 [20] [20] , int arr_14 [20] [20] [20] , _Bool arr_17 [20] [20] , short arr_20 [24] [24] , long long int arr_21 [24] [24] , short arr_22 [24] , unsigned short arr_24 [24] [24] [24] , unsigned long long int arr_26 [24] , short arr_27 [24] [24] [24] , short arr_28 [24] [24] [24] [24] , long long int arr_30 [24] [24] [24] [24] , unsigned long long int arr_31 [24] [24] [24] [24] [24] , signed char arr_32 [24] [24] [24] [24] [24] , unsigned long long int arr_34 [24] [24] , long long int arr_35 [24] [24] [24] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_14 , arr_17 , arr_20 , arr_21 , arr_22 , arr_24 , arr_26 , arr_27 , arr_28 , arr_30 , arr_31 , arr_32 , arr_34 , arr_35 );
    checksum();
    printf("%llu\n", seed);
}
