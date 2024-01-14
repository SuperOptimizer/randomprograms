#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)56;
long long int var_1 = 6428163440004592849LL;
int var_2 = -1341035249;
short var_3 = (short)18763;
int var_4 = -1381730362;
long long int var_5 = -8715488653710834211LL;
unsigned int var_6 = 809049471U;
unsigned short var_7 = (unsigned short)3198;
unsigned short var_8 = (unsigned short)39841;
int var_9 = 1992341813;
int var_10 = 1927222810;
long long int var_11 = -8966775326328536920LL;
int zero = 0;
short var_12 = (short)4505;
short var_13 = (short)5477;
long long int var_14 = 7036637397360239214LL;
unsigned short var_15 = (unsigned short)45042;
_Bool var_16 = (_Bool)1;
unsigned short arr_0 [25] ;
_Bool arr_3 [25] ;
unsigned int arr_4 [25] [25] [25] ;
int arr_5 [25] [25] [25] [25] ;
_Bool arr_7 [25] [25] [25] [25] ;
short arr_8 [25] [25] [25] [25] ;
signed char arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)27956;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3197004183U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -999686189 : 417739135;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)20095 : (short)9556;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)-77;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test(signed char var_0, long long int var_1, int var_2, short var_3, int var_4, long long int var_5, unsigned int var_6, unsigned short var_7, unsigned short var_8, int var_9, int var_10, long long int var_11, int zero, unsigned short arr_0 [25] , _Bool arr_3 [25] , unsigned int arr_4 [25] [25] [25] , int arr_5 [25] [25] [25] [25] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, arr_0 , arr_3 , arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
