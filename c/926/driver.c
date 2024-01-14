#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1275106696U;
unsigned int var_1 = 4004884506U;
unsigned int var_3 = 987529475U;
int var_4 = 506759858;
unsigned short var_5 = (unsigned short)40110;
unsigned int var_6 = 1003826972U;
unsigned char var_7 = (unsigned char)115;
unsigned short var_8 = (unsigned short)15940;
int zero = 0;
unsigned short var_10 = (unsigned short)20197;
unsigned int var_11 = 951931183U;
unsigned short var_12 = (unsigned short)53675;
int var_13 = 1717331534;
unsigned long long int var_14 = 1545809870433171624ULL;
unsigned short var_15 = (unsigned short)28631;
unsigned short var_16 = (unsigned short)40544;
unsigned int arr_2 [11] [11] ;
unsigned short arr_8 [11] [11] [11] [11] ;
int arr_6 [11] [11] [11] ;
unsigned long long int arr_11 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2115115222U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)12449;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1269762566;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 16578054734897173084ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned int var_0, unsigned int var_1, unsigned int var_3, int var_4, unsigned short var_5, unsigned int var_6, unsigned char var_7, unsigned short var_8, int zero, unsigned int arr_2 [11] [11] , unsigned short arr_8 [11] [11] [11] [11] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, zero, arr_2 , arr_8 );
    checksum();
    printf("%llu\n", seed);
}
