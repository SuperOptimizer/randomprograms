#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned char var_1 = (unsigned char)240;
short var_3 = (short)-1807;
long long int var_4 = 6738739407214587609LL;
short var_5 = (short)4269;
unsigned long long int var_7 = 7473152138031493446ULL;
unsigned char var_8 = (unsigned char)171;
long long int var_10 = 7745582073885215921LL;
unsigned char var_11 = (unsigned char)227;
_Bool var_13 = (_Bool)1;
int var_14 = 1795345716;
unsigned short var_15 = (unsigned short)36715;
unsigned short var_16 = (unsigned short)41169;
int zero = 0;
short var_17 = (short)-20161;
unsigned char var_18 = (unsigned char)217;
unsigned int var_19 = 1939296634U;
unsigned long long int var_20 = 5401054597574990262ULL;
long long int var_21 = 6310425752296562647LL;
unsigned int arr_0 [20] ;
_Bool arr_1 [20] [20] ;
short arr_3 [20] [20] ;
unsigned long long int arr_7 [20] [20] [20] [20] ;
unsigned short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2131375170U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)6959;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 14363582979794380222ULL : 1423265042058988180ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57328 : (unsigned short)40317;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test(signed char var_0, unsigned char var_1, short var_3, long long int var_4, short var_5, unsigned long long int var_7, unsigned char var_8, long long int var_10, unsigned char var_11, _Bool var_13, int var_14, unsigned short var_15, unsigned short var_16, int zero, unsigned int arr_0 [20] , _Bool arr_1 [20] [20] , short arr_3 [20] [20] , unsigned long long int arr_7 [20] [20] [20] [20] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_7, var_8, var_10, var_11, var_13, var_14, var_15, var_16, zero, arr_0 , arr_1 , arr_3 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
