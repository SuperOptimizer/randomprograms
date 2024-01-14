#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9172565147024918272ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 16598336963836513331ULL;
long long int var_5 = -8060862986000351397LL;
signed char var_7 = (signed char)-18;
signed char var_8 = (signed char)-16;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 10868852008069608435ULL;
int zero = 0;
signed char var_13 = (signed char)-71;
long long int var_14 = 4836726415705100216LL;
signed char var_15 = (signed char)15;
unsigned long long int arr_0 [18] ;
_Bool arr_3 [18] [18] [18] ;
_Bool arr_6 [18] [18] [18] [18] ;
signed char arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 18259404628818508967ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-76;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(unsigned long long int var_0, _Bool var_3, unsigned long long int var_4, long long int var_5, signed char var_7, signed char var_8, _Bool var_9, unsigned long long int var_10, int zero, unsigned long long int arr_0 [18] , _Bool arr_3 [18] [18] [18] , _Bool arr_6 [18] [18] [18] [18] , signed char arr_7 [18] [18] [18] );

int main() {
    init();
    test(var_0, var_3, var_4, var_5, var_7, var_8, var_9, var_10, zero, arr_0 , arr_3 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
