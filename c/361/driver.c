#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13486309153889237928ULL;
unsigned char var_1 = (unsigned char)193;
unsigned short var_2 = (unsigned short)11252;
signed char var_3 = (signed char)-106;
unsigned short var_4 = (unsigned short)1885;
unsigned char var_6 = (unsigned char)188;
unsigned short var_7 = (unsigned short)4665;
unsigned long long int var_8 = 455587981766188042ULL;
long long int var_10 = 6495491795662026125LL;
int zero = 0;
short var_12 = (short)-7159;
int var_13 = -1064315059;
_Bool var_14 = (_Bool)0;
unsigned char arr_0 [12] ;
unsigned short arr_1 [12] [12] ;
_Bool arr_2 [12] ;
unsigned short arr_3 [12] [12] [12] ;
signed char arr_4 [12] [12] ;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42517;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)30451 : (unsigned short)42480;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-65 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 10122573500983601020ULL : 11655625185413878120ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(unsigned long long int var_0, unsigned char var_1, unsigned short var_2, signed char var_3, unsigned short var_4, unsigned char var_6, unsigned short var_7, unsigned long long int var_8, long long int var_10, int zero, unsigned char arr_0 [12] , unsigned short arr_1 [12] [12] , _Bool arr_2 [12] , unsigned short arr_3 [12] [12] [12] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_10, zero, arr_0 , arr_1 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
