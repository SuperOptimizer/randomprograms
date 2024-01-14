#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
long long int var_1 = -4407416121962800355LL;
long long int var_2 = -7377216516269955041LL;
short var_3 = (short)6725;
short var_4 = (short)7982;
unsigned long long int var_5 = 7532085856009372306ULL;
unsigned char var_6 = (unsigned char)135;
signed char var_7 = (signed char)65;
unsigned char var_8 = (unsigned char)96;
short var_10 = (short)-16441;
unsigned char var_11 = (unsigned char)118;
short var_12 = (short)-27692;
long long int var_13 = 2991997625475886800LL;
unsigned char var_14 = (unsigned char)28;
int zero = 0;
unsigned long long int var_15 = 2025601913932813244ULL;
unsigned char var_16 = (unsigned char)245;
unsigned char var_17 = (unsigned char)35;
unsigned char var_18 = (unsigned char)150;
signed char var_19 = (signed char)69;
unsigned long long int var_20 = 12353729831814148311ULL;
long long int var_21 = 2074043013853906300LL;
unsigned long long int var_22 = 11884229923855914997ULL;
signed char arr_0 [16] [16] ;
signed char arr_1 [16] ;
unsigned char arr_2 [16] ;
unsigned char arr_5 [16] ;
short arr_6 [16] [16] ;
long long int arr_7 [16] [16] ;
unsigned char arr_9 [16] [16] ;
unsigned char arr_10 [16] [16] ;
long long int arr_11 [16] [16] ;
short arr_13 [16] ;
long long int arr_14 [16] [16] [16] ;
unsigned char arr_3 [16] ;
short arr_4 [16] ;
signed char arr_15 [16] [16] [16] [16] ;
unsigned long long int arr_16 [16] ;
signed char arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-24739;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = -5585799299096341510LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = -5929506676602587640LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (short)21432;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 8938908099030207239LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)1058;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 3959885290642659298ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (signed char)-66;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test(signed char var_0, long long int var_1, long long int var_2, short var_3, short var_4, unsigned long long int var_5, unsigned char var_6, signed char var_7, unsigned char var_8, short var_10, unsigned char var_11, short var_12, long long int var_13, unsigned char var_14, int zero, signed char arr_0 [16] [16] , signed char arr_1 [16] , unsigned char arr_2 [16] , unsigned char arr_5 [16] , short arr_6 [16] [16] , long long int arr_7 [16] [16] , unsigned char arr_9 [16] [16] , unsigned char arr_10 [16] [16] , long long int arr_11 [16] [16] , short arr_13 [16] , long long int arr_14 [16] [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_5 , arr_6 , arr_7 , arr_9 , arr_10 , arr_11 , arr_13 , arr_14 );
    checksum();
    printf("%llu\n", seed);
}
