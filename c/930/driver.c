#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6463032604609838884LL;
unsigned int var_6 = 3007301177U;
unsigned char var_8 = (unsigned char)233;
unsigned short var_11 = (unsigned short)15884;
int var_13 = 1762590628;
unsigned char var_14 = (unsigned char)220;
int zero = 0;
long long int var_16 = -8293823739455316581LL;
unsigned char var_17 = (unsigned char)29;
signed char var_18 = (signed char)-95;
_Bool var_19 = (_Bool)0;
int var_20 = 878344266;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-72;
unsigned int arr_0 [12] ;
unsigned char arr_1 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3315063195U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -638454002207195250LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(long long int var_2, unsigned int var_6, unsigned char var_8, unsigned short var_11, int var_13, unsigned char var_14, int zero, unsigned int arr_0 [12] , unsigned char arr_1 [12] , long long int arr_2 [12] );

int main() {
    init();
    test(var_2, var_6, var_8, var_11, var_13, var_14, zero, arr_0 , arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
