#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6625;
long long int var_1 = -2400102996149215049LL;
short var_2 = (short)-28330;
long long int var_3 = -5913097610869852139LL;
short var_4 = (short)-9022;
unsigned short var_5 = (unsigned short)1969;
long long int var_6 = -2358066452092489644LL;
signed char var_7 = (signed char)14;
unsigned short var_8 = (unsigned short)22600;
unsigned short var_9 = (unsigned short)61248;
long long int var_10 = 219942886582425332LL;
int var_11 = 37207327;
unsigned long long int var_12 = 2156307555831501916ULL;
int var_13 = -1623955895;
short var_14 = (short)-32065;
unsigned short var_15 = (unsigned short)32544;
unsigned long long int var_16 = 3112180658189950049ULL;
signed char var_17 = (signed char)-70;
short var_18 = (short)11023;
long long int var_19 = 8469891216343756129LL;
int zero = 0;
unsigned long long int var_20 = 8731225415104972138ULL;
unsigned short var_21 = (unsigned short)54935;
long long int var_22 = 6203937101534474429LL;
unsigned long long int var_23 = 11287268863580110337ULL;
long long int var_24 = -3263520270106401708LL;
unsigned int var_25 = 2663002111U;
long long int var_26 = -1357449576860770695LL;
short var_27 = (short)-27440;
unsigned long long int var_28 = 2300905924511388942ULL;
signed char var_29 = (signed char)91;
unsigned short var_30 = (unsigned short)10871;
short var_31 = (short)9146;
long long int var_32 = 4647659138505628311LL;
unsigned long long int var_33 = 12557588668086051304ULL;
unsigned long long int var_34 = 9114324053893133924ULL;
long long int var_35 = -2542327778291845180LL;
unsigned short var_36 = (unsigned short)57823;
signed char var_37 = (signed char)105;
unsigned long long int var_38 = 1106262678337589561ULL;
long long int var_39 = -5041993232814122324LL;
unsigned long long int var_40 = 3423802626660496122ULL;
unsigned char var_41 = (unsigned char)72;
short var_42 = (short)20810;
short var_43 = (short)-16628;
short var_44 = (short)11451;
signed char var_45 = (signed char)14;
unsigned short var_46 = (unsigned short)4996;
long long int var_47 = -6200507303410856244LL;
unsigned short var_48 = (unsigned short)36356;
_Bool arr_0 [12] ;
long long int arr_1 [12] ;
unsigned char arr_5 [12] [12] ;
long long int arr_7 [12] [12] [12] ;
int arr_10 [12] ;
_Bool arr_11 [12] [12] [12] [12] [12] ;
short arr_25 [12] [12] [12] ;
unsigned short arr_30 [18] ;
signed char arr_31 [18] ;
short arr_32 [18] ;
unsigned short arr_35 [14] ;
unsigned int arr_37 [14] ;
unsigned int arr_41 [14] [14] ;
long long int arr_42 [14] [14] [14] [14] [14] ;
signed char arr_43 [14] [14] [14] [14] ;
int arr_44 [14] [14] [14] [14] [14] [14] [14] ;
long long int arr_2 [12] ;
short arr_3 [12] [12] ;
signed char arr_6 [12] ;
unsigned short arr_13 [12] [12] [12] [12] ;
signed char arr_14 [12] [12] [12] [12] ;
signed char arr_15 [12] ;
short arr_27 [12] [12] [12] ;
long long int arr_28 [12] ;
short arr_29 [12] [12] ;
unsigned long long int arr_33 [18] [18] ;
long long int arr_38 [14] [14] ;
short arr_46 [14] [14] [14] [14] [14] [14] ;
short arr_47 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -5721488941188719879LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)103 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -4038850853897924118LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -967185341;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)30233 : (short)31401;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = (unsigned short)5199;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (short)27852;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = (unsigned short)15865;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 2516567656U : 2675975657U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_41 [i_0] [i_1] = 2883166523U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -3866678807572981659LL : 6388891382129564032LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-65 : (signed char)-121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 788409559;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1418578163707166849LL : -4958961394246488063LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-488 : (short)28235;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)49267 : (unsigned short)43134;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)39 : (signed char)-94;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-14840 : (short)17332;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 7370508403782689671LL : -4554521883625261997LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-16251 : (short)-27785;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_33 [i_0] [i_1] = 15112019720989813370ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_38 [i_0] [i_1] = (i_0 % 2 == 0) ? -5669443482755621918LL : 6979742301315941135LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)5703 : (short)-6735;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-509 : (short)16110;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
}
void test(short var_0, long long int var_1, short var_2, long long int var_3, short var_4, unsigned short var_5, long long int var_6, signed char var_7, unsigned short var_8, unsigned short var_9, long long int var_10, int var_11, unsigned long long int var_12, int var_13, short var_14, unsigned short var_15, unsigned long long int var_16, signed char var_17, short var_18, long long int var_19, int zero, _Bool arr_0 [12] , long long int arr_1 [12] , unsigned char arr_5 [12] [12] , long long int arr_7 [12] [12] [12] , int arr_10 [12] , _Bool arr_11 [12] [12] [12] [12] [12] , short arr_25 [12] [12] [12] , unsigned short arr_30 [18] , signed char arr_31 [18] , short arr_32 [18] , unsigned short arr_35 [14] , unsigned int arr_37 [14] , unsigned int arr_41 [14] [14] , long long int arr_42 [14] [14] [14] [14] [14] , signed char arr_43 [14] [14] [14] [14] , int arr_44 [14] [14] [14] [14] [14] [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, var_19, zero, arr_0 , arr_1 , arr_5 , arr_7 , arr_10 , arr_11 , arr_25 , arr_30 , arr_31 , arr_32 , arr_35 , arr_37 , arr_41 , arr_42 , arr_43 , arr_44 );
    checksum();
    printf("%llu\n", seed);
}
