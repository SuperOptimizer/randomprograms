#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
int var_1 = -1537314749;
unsigned long long int var_2 = 4910563480365731638ULL;
unsigned long long int var_3 = 3901593562769462293ULL;
signed char var_4 = (signed char)-35;
long long int var_5 = 3387877771769695466LL;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)39;
int var_11 = 643923333;
signed char var_13 = (signed char)-124;
int zero = 0;
unsigned long long int var_14 = 9019255422585382706ULL;
int var_15 = 701469992;
short var_16 = (short)18128;
unsigned short arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned int arr_2 [14] ;
_Bool arr_4 [14] ;
unsigned int arr_5 [14] [14] ;
unsigned int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65368 : (unsigned short)54296;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3845729111U : 22950216U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 113453005U : 2468479825U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 3330483623U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned char var_0, int var_1, unsigned long long int var_2, unsigned long long int var_3, signed char var_4, long long int var_5, _Bool var_7, unsigned char var_10, int var_11, signed char var_13, int zero, unsigned short arr_0 [14] , unsigned char arr_1 [14] , unsigned int arr_2 [14] , _Bool arr_4 [14] , unsigned int arr_5 [14] [14] , unsigned int arr_7 [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_10, var_11, var_13, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
