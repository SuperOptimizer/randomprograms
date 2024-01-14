#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)35515;
unsigned short var_6 = (unsigned short)37472;
long long int var_7 = -7058530988884194451LL;
unsigned long long int var_9 = 11534909408133982877ULL;
unsigned char var_10 = (unsigned char)91;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4204030155U;
int var_13 = -1141784398;
unsigned short var_14 = (unsigned short)14199;
signed char arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1158826541U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 5958162032856548926ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test(unsigned char var_0, _Bool var_1, unsigned short var_5, unsigned short var_6, long long int var_7, unsigned long long int var_9, unsigned char var_10, int zero, signed char arr_1 [12] );

int main() {
    init();
    test(var_0, var_1, var_5, var_6, var_7, var_9, var_10, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
