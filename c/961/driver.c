#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2354464475U;
int var_1 = 1156513280;
int var_3 = 1211200416;
long long int var_4 = 7005370698436979422LL;
signed char var_5 = (signed char)-37;
signed char var_7 = (signed char)-110;
unsigned int var_8 = 1673661599U;
long long int var_9 = -5826957498823125051LL;
signed char var_10 = (signed char)-65;
int zero = 0;
int var_11 = 1369451708;
signed char var_12 = (signed char)7;
_Bool var_13 = (_Bool)0;
int arr_1 [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
signed char arr_6 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 639034841;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9671371313753230954ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)26;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned int var_0, int var_1, int var_3, long long int var_4, signed char var_5, signed char var_7, unsigned int var_8, long long int var_9, signed char var_10, int zero, int arr_1 [17] , unsigned long long int arr_3 [17] [17] [17] , signed char arr_6 [17] [17] [17] [17] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_7, var_8, var_9, var_10, zero, arr_1 , arr_3 , arr_6 );
    checksum();
    printf("%llu\n", seed);
}
