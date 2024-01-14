#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
long long int var_1 = -7038424583917662714LL;
unsigned char var_2 = (unsigned char)45;
signed char var_3 = (signed char)98;
signed char var_4 = (signed char)-35;
int var_5 = 814011535;
signed char var_6 = (signed char)76;
long long int var_7 = -3841882148614050024LL;
long long int var_8 = 7394488888506640133LL;
long long int var_9 = 7751761588709189412LL;
unsigned char var_11 = (unsigned char)34;
int var_12 = 41048948;
int zero = 0;
unsigned short var_13 = (unsigned short)5313;
short var_14 = (short)15759;
signed char var_15 = (signed char)96;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)3180;
unsigned short var_18 = (unsigned short)41734;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4251625844961863087LL;
unsigned long long int arr_0 [21] [21] ;
int arr_1 [21] ;
unsigned char arr_3 [21] ;
unsigned long long int arr_7 [13] [13] ;
int arr_8 [13] [13] ;
signed char arr_12 [18] ;
signed char arr_17 [18] [18] [18] ;
long long int arr_19 [18] [18] [18] [18] ;
short arr_20 [18] ;
short arr_4 [21] ;
unsigned short arr_5 [21] ;
unsigned int arr_6 [21] ;
long long int arr_13 [18] ;
signed char arr_18 [18] [18] [18] [18] ;
signed char arr_23 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 12158378667921477921ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -803813717;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 10261472809207131991ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 498963588 : -924759213;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-110 : (signed char)-28;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 4604624546961329874LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (short)24573;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-27566;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)54051;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1522439412U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -1120288226959013569LL : 3992565102506152172LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)85 : (signed char)-75;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-3 : (signed char)-51;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
}
void test(signed char var_0, long long int var_1, unsigned char var_2, signed char var_3, signed char var_4, int var_5, signed char var_6, long long int var_7, long long int var_8, long long int var_9, unsigned char var_11, int var_12, int zero, unsigned long long int arr_0 [21] [21] , int arr_1 [21] , unsigned char arr_3 [21] , unsigned long long int arr_7 [13] [13] , int arr_8 [13] [13] , signed char arr_12 [18] , signed char arr_17 [18] [18] [18] , long long int arr_19 [18] [18] [18] [18] , short arr_20 [18] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, zero, arr_0 , arr_1 , arr_3 , arr_7 , arr_8 , arr_12 , arr_17 , arr_19 , arr_20 );
    checksum();
    printf("%llu\n", seed);
}
