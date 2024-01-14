#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -111162623;
_Bool var_1 = (_Bool)1;
short var_2 = (short)4567;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-36;
signed char var_7 = (signed char)-26;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-2153;
int var_10 = -708749285;
long long int var_11 = 3913589305910807937LL;
unsigned long long int var_12 = 16431378756021333293ULL;
int var_13 = -709498704;
unsigned int var_14 = 1345076779U;
int var_15 = -1124519066;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2903623973U;
int var_19 = 1060703322;
short var_20 = (short)32236;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)22028;
short var_24 = (short)-7390;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 2616013750U;
short var_27 = (short)-22594;
signed char var_28 = (signed char)33;
unsigned int var_29 = 355966961U;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1495142735U;
_Bool var_32 = (_Bool)0;
unsigned long long int arr_0 [13] ;
short arr_1 [13] [13] ;
short arr_2 [13] ;
short arr_3 [13] ;
unsigned long long int arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
int arr_6 [13] [13] ;
_Bool arr_7 [13] [13] [13] ;
signed char arr_8 [13] [13] [13] [13] ;
_Bool arr_9 [13] [13] [13] [13] ;
unsigned int arr_10 [13] [13] ;
long long int arr_11 [13] [13] ;
unsigned short arr_13 [13] [13] [13] [13] ;
_Bool arr_15 [13] [13] [13] [13] ;
unsigned int arr_17 [13] ;
short arr_18 [13] [13] [13] ;
short arr_21 [13] [13] [13] [13] [13] ;
short arr_22 [13] [13] [13] ;
short arr_25 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 15448604554781854060ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)15693;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-28970;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)12914;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 18271135937319841733ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 1529615026U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -1260335687;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 3774308691U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = -1755836084202088290LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24029;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 4225541082U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-25158;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-5966;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)-3665;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)26484;
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
}
void test(int var_0, _Bool var_1, short var_2, _Bool var_3, _Bool var_4, _Bool var_5, signed char var_6, signed char var_7, _Bool var_8, short var_9, int var_10, long long int var_11, unsigned long long int var_12, int var_13, unsigned int var_14, int var_15, int zero, unsigned long long int arr_0 [13] , short arr_1 [13] [13] , short arr_2 [13] , short arr_3 [13] , unsigned long long int arr_4 [13] , unsigned int arr_5 [13] [13] , int arr_6 [13] [13] , _Bool arr_7 [13] [13] [13] , signed char arr_8 [13] [13] [13] [13] , _Bool arr_9 [13] [13] [13] [13] , unsigned int arr_10 [13] [13] , long long int arr_11 [13] [13] , unsigned short arr_13 [13] [13] [13] [13] , _Bool arr_15 [13] [13] [13] [13] , unsigned int arr_17 [13] , short arr_18 [13] [13] [13] , short arr_21 [13] [13] [13] [13] [13] , short arr_22 [13] [13] [13] , short arr_25 [13] [13] [13] [13] [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_13 , arr_15 , arr_17 , arr_18 , arr_21 , arr_22 , arr_25 );
    checksum();
    printf("%llu\n", seed);
}
