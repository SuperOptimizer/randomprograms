#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63391;
unsigned short var_5 = (unsigned short)41084;
unsigned long long int var_6 = 8997471130968496537ULL;
int var_7 = 1330645821;
unsigned short var_8 = (unsigned short)58419;
unsigned char var_10 = (unsigned char)151;
unsigned long long int var_11 = 10844520739032212734ULL;
int zero = 0;
unsigned long long int var_19 = 7573958319472817415ULL;
unsigned char arr_0 [10] ;
int arr_3 [10] ;
unsigned long long int arr_7 [20] [20] [20] ;
int arr_4 [10] ;
unsigned char arr_9 [20] [20] [20] ;
unsigned short arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 26571277;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6572928890354263546ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1438976134;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)41616;
}

void checksum() {
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test(unsigned short var_4, unsigned short var_5, unsigned long long int var_6, int var_7, unsigned short var_8, unsigned char var_10, unsigned long long int var_11, int zero, unsigned char arr_0 [10] , int arr_3 [10] , unsigned long long int arr_7 [20] [20] [20] );

int main() {
    init();
    test(var_4, var_5, var_6, var_7, var_8, var_10, var_11, zero, arr_0 , arr_3 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
