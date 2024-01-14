#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2187229854U;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 3483727842U;
unsigned short var_6 = (unsigned short)53502;
signed char var_8 = (signed char)22;
unsigned int var_9 = 2612268212U;
signed char var_10 = (signed char)15;
int zero = 0;
long long int var_11 = 472069630621302411LL;
int var_12 = -1525589208;
unsigned long long int var_13 = 18103564741202431543ULL;
unsigned char arr_0 [13] [13] ;
signed char arr_2 [13] ;
short arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
unsigned int arr_6 [13] ;
unsigned short arr_9 [13] ;
unsigned short arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)13818;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 2454069948U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3290645858U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9919 : (unsigned short)63390;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61852 : (unsigned short)15889;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test(unsigned int var_1, _Bool var_2, unsigned int var_5, unsigned short var_6, signed char var_8, unsigned int var_9, signed char var_10, int zero, unsigned char arr_0 [13] [13] , signed char arr_2 [13] , short arr_4 [13] , unsigned int arr_5 [13] [13] , unsigned int arr_6 [13] , unsigned short arr_9 [13] );

int main() {
    init();
    test(var_1, var_2, var_5, var_6, var_8, var_9, var_10, zero, arr_0 , arr_2 , arr_4 , arr_5 , arr_6 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
