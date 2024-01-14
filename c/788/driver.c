#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3272458716U;
unsigned long long int var_2 = 8213065491643359025ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 11764583844945922623ULL;
short var_9 = (short)10653;
int var_10 = -1201468134;
unsigned char var_11 = (unsigned char)29;
_Bool var_12 = (_Bool)0;
short var_16 = (short)-10434;
unsigned long long int var_17 = 18200575517683844984ULL;
signed char var_18 = (signed char)-116;
int zero = 0;
unsigned long long int var_19 = 12641338720737878661ULL;
long long int var_20 = 5424549982178640812LL;
unsigned int var_21 = 2628624414U;
short var_22 = (short)11700;
_Bool arr_2 [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
short arr_4 [17] [17] ;
_Bool arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7711094428805129801ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-12494;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test(unsigned int var_1, unsigned long long int var_2, _Bool var_3, unsigned long long int var_4, short var_9, int var_10, unsigned char var_11, _Bool var_12, short var_16, unsigned long long int var_17, signed char var_18, int zero, _Bool arr_2 [17] , unsigned long long int arr_3 [17] [17] [17] , short arr_4 [17] [17] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_9, var_10, var_11, var_12, var_16, var_17, var_18, zero, arr_2 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
