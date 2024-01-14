#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7035995957765400837LL;
unsigned char var_2 = (unsigned char)250;
unsigned char var_3 = (unsigned char)40;
short var_4 = (short)-14430;
_Bool var_6 = (_Bool)1;
short var_7 = (short)32521;
unsigned char var_10 = (unsigned char)83;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)22536;
unsigned char var_13 = (unsigned char)238;
short var_14 = (short)26978;
int var_15 = 87438789;
_Bool var_16 = (_Bool)1;
unsigned char arr_0 [25] ;
long long int arr_4 [25] ;
_Bool arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -7251815925129921902LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test(long long int var_1, unsigned char var_2, unsigned char var_3, short var_4, _Bool var_6, short var_7, unsigned char var_10, _Bool var_11, int zero, unsigned char arr_0 [25] , long long int arr_4 [25] );

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_6, var_7, var_10, var_11, zero, arr_0 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
