#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 769372993882448816ULL;
unsigned short var_3 = (unsigned short)25592;
short var_4 = (short)13283;
unsigned short var_5 = (unsigned short)42555;
unsigned short var_6 = (unsigned short)28331;
unsigned char var_9 = (unsigned char)136;
unsigned int var_10 = 2213492140U;
short var_13 = (short)-23243;
signed char var_14 = (signed char)72;
long long int var_16 = 6305111584744399300LL;
signed char var_17 = (signed char)109;
short var_18 = (short)-24882;
int zero = 0;
short var_20 = (short)-17971;
short var_21 = (short)-31750;
unsigned long long int var_22 = 8133558607706219835ULL;
signed char var_23 = (signed char)-21;
signed char var_24 = (signed char)-27;
short var_25 = (short)20232;
signed char arr_1 [17] ;
unsigned int arr_2 [17] [17] ;
unsigned int arr_4 [17] [17] [17] ;
unsigned long long int arr_5 [17] ;
unsigned long long int arr_6 [17] [17] ;
unsigned short arr_8 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 4087942596U : 2779075403U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1669673412U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 15030320188928779521ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 16965541810476570338ULL : 5054755340170542110ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)21715 : (unsigned short)61787;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test(unsigned long long int var_1, unsigned short var_3, short var_4, unsigned short var_5, unsigned short var_6, unsigned char var_9, unsigned int var_10, short var_13, signed char var_14, long long int var_16, signed char var_17, short var_18, int zero, signed char arr_1 [17] , unsigned int arr_2 [17] [17] , unsigned int arr_4 [17] [17] [17] , unsigned long long int arr_5 [17] , unsigned long long int arr_6 [17] [17] );

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_6, var_9, var_10, var_13, var_14, var_16, var_17, var_18, zero, arr_1 , arr_2 , arr_4 , arr_5 , arr_6 );
    checksum();
    printf("%llu\n", seed);
}
