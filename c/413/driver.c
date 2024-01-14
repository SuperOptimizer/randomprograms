#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
unsigned long long int var_2 = 18264112991584906915ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-10;
unsigned long long int var_6 = 6251556040027399356ULL;
unsigned long long int var_7 = 12840061457594966294ULL;
unsigned long long int var_8 = 762542272158400126ULL;
int zero = 0;
unsigned long long int var_10 = 7972394092724875182ULL;
unsigned char var_11 = (unsigned char)196;
short var_12 = (short)-993;
unsigned long long int var_13 = 3741240183774857879ULL;
short var_14 = (short)30360;
unsigned short arr_0 [18] ;
_Bool arr_1 [18] ;
unsigned short arr_4 [18] [18] ;
unsigned short arr_5 [18] [18] ;
short arr_2 [18] ;
short arr_3 [18] [18] ;
signed char arr_6 [18] ;
unsigned long long int arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)52543;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)5115;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)36532;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-13237;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-18542;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3356238746201231235ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test(signed char var_0, unsigned long long int var_2, _Bool var_4, signed char var_5, unsigned long long int var_6, unsigned long long int var_7, unsigned long long int var_8, int zero, unsigned short arr_0 [18] , _Bool arr_1 [18] , unsigned short arr_4 [18] [18] , unsigned short arr_5 [18] [18] );

int main() {
    init();
    test(var_0, var_2, var_4, var_5, var_6, var_7, var_8, zero, arr_0 , arr_1 , arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
