#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3830195164164170751ULL;
unsigned int var_5 = 3418492111U;
int zero = 0;
short var_12 = (short)19159;
unsigned long long int arr_1 [17] [17] ;
signed char arr_2 [17] ;
unsigned long long int arr_3 [17] ;
unsigned int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 8672433562952768904ULL : 12850993194152737578ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-109 : (signed char)66;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3891813260058971861ULL : 10768030372384236158ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3034842434U : 47689508U;
}

void checksum() {
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test(unsigned long long int var_4, unsigned int var_5, int zero, unsigned long long int arr_1 [17] [17] , signed char arr_2 [17] );

int main() {
    init();
    test(var_4, var_5, zero, arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
