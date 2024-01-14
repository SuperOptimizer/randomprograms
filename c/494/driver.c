#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
int var_2 = -1669664641;
unsigned char var_3 = (unsigned char)126;
unsigned char var_4 = (unsigned char)172;
unsigned char var_6 = (unsigned char)76;
unsigned long long int var_7 = 18065342207942422470ULL;
unsigned short var_9 = (unsigned short)29684;
long long int var_10 = 8924230500931223191LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 909531838U;
long long int var_13 = -4904628115640858133LL;
int zero = 0;
unsigned char var_15 = (unsigned char)251;
short var_16 = (short)-20427;
unsigned char var_17 = (unsigned char)95;
short var_18 = (short)11656;
unsigned int var_19 = 4265205621U;
unsigned long long int var_20 = 4798269085998175865ULL;
unsigned long long int var_21 = 2841852525163551864ULL;
unsigned long long int var_22 = 10143719636472868380ULL;
unsigned short var_23 = (unsigned short)25076;
unsigned long long int var_24 = 8623780199680288689ULL;
unsigned short var_25 = (unsigned short)7825;
signed char var_26 = (signed char)123;
int var_27 = -327673710;
unsigned int var_28 = 2617578863U;
signed char var_29 = (signed char)25;
short var_30 = (short)29638;
long long int var_31 = -2994949174421937066LL;
signed char var_32 = (signed char)76;
short var_33 = (short)-16121;
short arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned char arr_2 [22] [22] [22] ;
signed char arr_4 [22] [22] ;
unsigned char arr_5 [22] [22] [22] [22] ;
unsigned long long int arr_6 [22] [22] ;
unsigned long long int arr_7 [22] [22] [22] [22] ;
unsigned long long int arr_9 [22] ;
_Bool arr_11 [22] [22] [22] ;
unsigned char arr_15 [22] [22] [22] ;
long long int arr_18 [22] ;
long long int arr_8 [22] [22] [22] [22] ;
long long int arr_12 [22] [22] [22] [22] [22] [22] [22] ;
_Bool arr_19 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)30631;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3768416790715898372ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 12734312736077467544ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 5340497433799906507ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 6325475480993597546ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 6882909444322117684LL : 8354634268831725236LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 5031740195634214738LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -4930108890857803989LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test(_Bool var_0, _Bool var_1, int var_2, unsigned char var_3, unsigned char var_4, unsigned char var_6, unsigned long long int var_7, unsigned short var_9, long long int var_10, _Bool var_11, unsigned int var_12, long long int var_13, int zero, short arr_0 [22] , unsigned long long int arr_1 [22] , unsigned char arr_2 [22] [22] [22] , signed char arr_4 [22] [22] , unsigned char arr_5 [22] [22] [22] [22] , unsigned long long int arr_6 [22] [22] , unsigned long long int arr_7 [22] [22] [22] [22] , unsigned long long int arr_9 [22] , _Bool arr_11 [22] [22] [22] , unsigned char arr_15 [22] [22] [22] , long long int arr_18 [22] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_6 , arr_7 , arr_9 , arr_11 , arr_15 , arr_18 );
    checksum();
    printf("%llu\n", seed);
}
