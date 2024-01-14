#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 973296505U;
short var_2 = (short)21983;
int var_3 = 1515793992;
int var_5 = 691468419;
unsigned long long int var_6 = 389586883367408841ULL;
int var_7 = 740909568;
unsigned int var_9 = 1274900234U;
unsigned long long int var_10 = 10284667344963228429ULL;
long long int var_15 = 3143729619710660147LL;
unsigned long long int var_18 = 12214143132923944559ULL;
unsigned char var_19 = (unsigned char)190;
int zero = 0;
unsigned long long int var_20 = 2959344817317300723ULL;
signed char var_21 = (signed char)27;
signed char var_22 = (signed char)46;
unsigned char var_23 = (unsigned char)239;
short var_24 = (short)5486;
unsigned int var_25 = 2226037950U;
long long int var_26 = -5358278488666206792LL;
unsigned int arr_0 [10] ;
signed char arr_1 [10] ;
unsigned short arr_2 [10] ;
unsigned short arr_8 [10] [10] [10] [10] [10] ;
unsigned long long int arr_9 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2226932671U : 3190405044U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)17074;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)37346;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 4542746990234744794ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test(unsigned int var_0, short var_2, int var_3, int var_5, unsigned long long int var_6, int var_7, unsigned int var_9, unsigned long long int var_10, long long int var_15, unsigned long long int var_18, unsigned char var_19, int zero, unsigned int arr_0 [10] , signed char arr_1 [10] , unsigned short arr_2 [10] , unsigned short arr_8 [10] [10] [10] [10] [10] , unsigned long long int arr_9 [10] [10] [10] [10] );

int main() {
    init();
    test(var_0, var_2, var_3, var_5, var_6, var_7, var_9, var_10, var_15, var_18, var_19, zero, arr_0 , arr_1 , arr_2 , arr_8 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
