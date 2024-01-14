#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -507657874577212438LL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)111;
unsigned long long int var_4 = 2244171290645975232ULL;
unsigned long long int var_5 = 1685522224306069583ULL;
unsigned long long int var_6 = 6516189878939872786ULL;
int var_7 = 1545632885;
unsigned int var_8 = 254491542U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)41;
int zero = 0;
unsigned long long int var_11 = 17709960052755410432ULL;
unsigned short var_12 = (unsigned short)20595;
unsigned long long int var_13 = 13362799269026210476ULL;
signed char var_14 = (signed char)108;
signed char var_15 = (signed char)-55;
signed char var_16 = (signed char)-13;
unsigned long long int var_17 = 16599886045986061628ULL;
_Bool arr_0 [14] [14] ;
signed char arr_1 [14] ;
unsigned int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1898154434U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(long long int var_1, _Bool var_2, signed char var_3, unsigned long long int var_4, unsigned long long int var_5, unsigned long long int var_6, int var_7, unsigned int var_8, _Bool var_9, unsigned char var_10, int zero, _Bool arr_0 [14] [14] , signed char arr_1 [14] , unsigned int arr_4 [14] [14] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
