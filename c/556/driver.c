#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7077031611417737595LL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)45791;
signed char var_5 = (signed char)3;
unsigned short var_8 = (unsigned short)64606;
signed char var_10 = (signed char)-48;
unsigned char var_11 = (unsigned char)140;
short var_13 = (short)15730;
unsigned long long int var_15 = 4475367490916237043ULL;
unsigned int var_18 = 2762557080U;
int zero = 0;
unsigned short var_19 = (unsigned short)14322;
long long int var_20 = 1538545989844053535LL;
unsigned long long int var_21 = 1540460118142974960ULL;
unsigned char arr_0 [25] ;
long long int arr_1 [25] ;
unsigned long long int arr_2 [25] ;
_Bool arr_4 [25] ;
unsigned short arr_5 [25] [25] ;
_Bool arr_6 [25] ;
unsigned int arr_10 [25] [25] [25] ;
_Bool arr_3 [25] ;
signed char arr_7 [25] ;
unsigned int arr_8 [25] ;
_Bool arr_17 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_18 [25] [25] [25] [25] ;
signed char arr_19 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -6878045632995546406LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 2528514763003791405ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)55497;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2187163600U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)60 : (signed char)-93;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1504717485U : 3828614572U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)54955 : (unsigned short)17078;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)39 : (signed char)57;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test(long long int var_0, _Bool var_1, _Bool var_2, unsigned short var_3, signed char var_5, unsigned short var_8, signed char var_10, unsigned char var_11, short var_13, unsigned long long int var_15, unsigned int var_18, int zero, unsigned char arr_0 [25] , long long int arr_1 [25] , unsigned long long int arr_2 [25] , _Bool arr_4 [25] , unsigned short arr_5 [25] [25] , _Bool arr_6 [25] , unsigned int arr_10 [25] [25] [25] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_8, var_10, var_11, var_13, var_15, var_18, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_6 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
