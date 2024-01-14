#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)84;
unsigned int var_2 = 3397912443U;
unsigned long long int var_3 = 14333837144533070418ULL;
long long int var_4 = 7517536541638815959LL;
unsigned long long int var_5 = 8196792785176695681ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 7692361667172738068LL;
unsigned char var_8 = (unsigned char)152;
short var_9 = (short)-6041;
int zero = 0;
unsigned char var_10 = (unsigned char)207;
int var_11 = 1640527175;
unsigned int var_12 = 554136961U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)251;
unsigned char var_15 = (unsigned char)111;
short var_16 = (short)31506;
_Bool var_17 = (_Bool)1;
int var_18 = 423164478;
signed char var_19 = (signed char)125;
int var_20 = 854452310;
long long int var_21 = -6980978330381116676LL;
unsigned int var_22 = 1138249832U;
int var_23 = 849905810;
signed char var_24 = (signed char)95;
short var_25 = (short)17108;
unsigned long long int var_26 = 9636771739677988614ULL;
unsigned int var_27 = 969752483U;
_Bool var_28 = (_Bool)0;
short var_29 = (short)-22481;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 8318045108935473440ULL;
signed char var_33 = (signed char)-54;
long long int var_34 = 1780536625837276559LL;
unsigned long long int var_35 = 17017066648306628547ULL;
short var_36 = (short)12140;
unsigned long long int arr_1 [11] ;
unsigned int arr_3 [11] [11] [11] ;
unsigned long long int arr_4 [11] ;
signed char arr_5 [11] ;
unsigned short arr_6 [11] [11] ;
_Bool arr_8 [11] ;
unsigned int arr_9 [11] [11] ;
unsigned int arr_10 [11] [11] [11] ;
_Bool arr_11 [11] [11] ;
unsigned long long int arr_12 [11] [11] ;
unsigned char arr_13 [11] [11] [11] [11] ;
_Bool arr_15 [11] [11] ;
unsigned char arr_18 [11] [11] ;
int arr_19 [11] [11] [11] [11] ;
unsigned char arr_20 [11] ;
_Bool arr_24 [11] [11] [11] [11] [11] ;
unsigned int arr_25 [11] [11] [11] [11] [11] [11] [11] ;
unsigned char arr_26 [11] [11] [11] [11] [11] ;
_Bool arr_29 [11] [11] [11] [11] ;
unsigned int arr_30 [11] [11] [11] [11] ;
unsigned int arr_31 [11] [11] [11] [11] ;
unsigned char arr_36 [11] ;
signed char arr_40 [11] ;
int arr_45 [11] [11] [11] [11] [11] [11] ;
signed char arr_49 [18] [18] ;
unsigned short arr_50 [18] ;
unsigned long long int arr_51 [18] [18] ;
unsigned long long int arr_2 [11] ;
unsigned char arr_7 [11] [11] [11] ;
long long int arr_16 [11] [11] [11] ;
_Bool arr_27 [11] [11] [11] [11] [11] ;
signed char arr_35 [11] [11] [11] ;
unsigned char arr_38 [11] ;
short arr_48 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_53 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 17877923247864313017ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3764231077U : 1220928911U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1429971885141769513ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-29 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)5045;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1058738292U : 1132335041U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2616232482U : 2355659891U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 7272766704432189602ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)176 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = -472011269;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 485574185U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 3537936040U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 2892891688U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_40 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1701703964;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_50 [i_0] = (unsigned short)21508;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_51 [i_0] [i_1] = (i_0 % 2 == 0) ? 15016810700779116177ULL : 3828318010064212921ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1034041294655463733ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)24 : (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3833463160656974202LL : 6092312094761801575LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)124 : (signed char)103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)11156 : (short)15321;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6253834465249693228ULL : 3049688988360470709ULL;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_53 [i_0] [i_1] [i_2] );
}
void test(_Bool var_0, signed char var_1, unsigned int var_2, unsigned long long int var_3, long long int var_4, unsigned long long int var_5, _Bool var_6, long long int var_7, unsigned char var_8, short var_9, int zero, unsigned long long int arr_1 [11] , unsigned int arr_3 [11] [11] [11] , unsigned long long int arr_4 [11] , signed char arr_5 [11] , unsigned short arr_6 [11] [11] , _Bool arr_8 [11] , unsigned int arr_9 [11] [11] , unsigned int arr_10 [11] [11] [11] , _Bool arr_11 [11] [11] , unsigned long long int arr_12 [11] [11] , unsigned char arr_13 [11] [11] [11] [11] , _Bool arr_15 [11] [11] , unsigned char arr_18 [11] [11] , int arr_19 [11] [11] [11] [11] , unsigned char arr_20 [11] , _Bool arr_24 [11] [11] [11] [11] [11] , unsigned int arr_25 [11] [11] [11] [11] [11] [11] [11] , unsigned char arr_26 [11] [11] [11] [11] [11] , _Bool arr_29 [11] [11] [11] [11] , unsigned int arr_30 [11] [11] [11] [11] , unsigned int arr_31 [11] [11] [11] [11] , unsigned char arr_36 [11] , signed char arr_40 [11] , int arr_45 [11] [11] [11] [11] [11] [11] , signed char arr_49 [18] [18] , unsigned short arr_50 [18] , unsigned long long int arr_51 [18] [18] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_1 , arr_3 , arr_4 , arr_5 , arr_6 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_15 , arr_18 , arr_19 , arr_20 , arr_24 , arr_25 , arr_26 , arr_29 , arr_30 , arr_31 , arr_36 , arr_40 , arr_45 , arr_49 , arr_50 , arr_51 );
    checksum();
    printf("%llu\n", seed);
}
