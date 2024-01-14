#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11397525442959908157ULL;
unsigned short var_2 = (unsigned short)48932;
unsigned int var_3 = 1255866731U;
unsigned short var_4 = (unsigned short)49132;
unsigned long long int var_5 = 7370351956601615526ULL;
int var_6 = -1663602412;
unsigned long long int var_7 = 14364329069273317319ULL;
signed char var_8 = (signed char)-23;
unsigned short var_9 = (unsigned short)27498;
unsigned char var_10 = (unsigned char)234;
signed char var_11 = (signed char)-98;
unsigned long long int var_12 = 3435058999542219352ULL;
unsigned int var_13 = 418504814U;
int var_14 = 1446250537;
unsigned char var_15 = (unsigned char)16;
unsigned short var_17 = (unsigned short)13348;
int zero = 0;
short var_18 = (short)9253;
long long int var_19 = 6156634486554956610LL;
short var_20 = (short)5871;
unsigned short var_21 = (unsigned short)61709;
short var_22 = (short)-19035;
unsigned short var_23 = (unsigned short)1660;
unsigned short var_24 = (unsigned short)47134;
long long int var_25 = -6271957008136647197LL;
unsigned char var_26 = (unsigned char)210;
int var_27 = 1312280861;
int arr_1 [12] ;
unsigned int arr_8 [21] ;
unsigned int arr_9 [21] ;
signed char arr_10 [21] [21] ;
_Bool arr_11 [21] [21] ;
unsigned char arr_12 [21] [21] [21] [21] ;
short arr_13 [21] ;
unsigned char arr_14 [21] [21] [21] ;
unsigned int arr_15 [21] [21] [21] [21] ;
_Bool arr_18 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_20 [21] [21] [21] [21] [21] [21] ;
signed char arr_21 [21] [21] [21] [21] [21] [21] [21] ;
long long int arr_22 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_23 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1163199256;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 4079627512U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 2756361791U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)16029;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 764307880U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (signed char)22 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 612902661961209308LL : 305254328063227157LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)63524 : (unsigned short)18083;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test(unsigned long long int var_0, unsigned short var_2, unsigned int var_3, unsigned short var_4, unsigned long long int var_5, int var_6, unsigned long long int var_7, signed char var_8, unsigned short var_9, unsigned char var_10, signed char var_11, unsigned long long int var_12, unsigned int var_13, int var_14, unsigned char var_15, unsigned short var_17, int zero, int arr_1 [12] , unsigned int arr_8 [21] , unsigned int arr_9 [21] , signed char arr_10 [21] [21] , _Bool arr_11 [21] [21] , unsigned char arr_12 [21] [21] [21] [21] , short arr_13 [21] , unsigned char arr_14 [21] [21] [21] , unsigned int arr_15 [21] [21] [21] [21] , _Bool arr_18 [21] [21] [21] [21] [21] [21] , unsigned char arr_20 [21] [21] [21] [21] [21] [21] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_17, zero, arr_1 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_18 , arr_20 );
    checksum();
    printf("%llu\n", seed);
}
