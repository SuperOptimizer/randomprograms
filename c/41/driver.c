#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
signed char var_2 = (signed char)7;
long long int var_4 = -5364474187908291338LL;
signed char var_5 = (signed char)-21;
int var_6 = 2083671060;
int var_7 = -1426994156;
unsigned int var_8 = 3549602079U;
unsigned long long int var_9 = 9325441338572783340ULL;
int var_10 = 932181399;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)184;
long long int var_13 = 6970517207979023773LL;
unsigned short var_14 = (unsigned short)34572;
unsigned short var_15 = (unsigned short)61592;
unsigned long long int var_16 = 16235130327492472094ULL;
unsigned short var_17 = (unsigned short)10661;
int arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
unsigned short arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -658332554;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)60720;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)47101;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(signed char var_1, signed char var_2, long long int var_4, signed char var_5, int var_6, int var_7, unsigned int var_8, unsigned long long int var_9, int var_10, _Bool var_11, int zero, int arr_0 [21] [21] , unsigned short arr_1 [21] , unsigned short arr_3 [21] [21] );

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, arr_0 , arr_1 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
