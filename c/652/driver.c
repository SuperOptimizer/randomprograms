#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7405;
short var_3 = (short)25712;
unsigned short var_4 = (unsigned short)19733;
long long int var_5 = -5322574899094704357LL;
unsigned short var_6 = (unsigned short)65398;
unsigned char var_8 = (unsigned char)14;
short var_9 = (short)24757;
int zero = 0;
unsigned char var_10 = (unsigned char)140;
short var_11 = (short)27231;
unsigned short var_12 = (unsigned short)31303;
unsigned char var_13 = (unsigned char)159;
short var_14 = (short)-12749;
unsigned char var_15 = (unsigned char)222;
long long int var_16 = -6868744099661042161LL;
short var_17 = (short)7522;
unsigned char arr_2 [16] ;
long long int arr_4 [19] ;
unsigned short arr_7 [19] ;
long long int arr_8 [19] ;
short arr_9 [19] [19] ;
unsigned char arr_10 [19] ;
unsigned char arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 6149243252817111720LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)55251;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 5577388663625635068LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-11689;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned char)102;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test(short var_1, short var_3, unsigned short var_4, long long int var_5, unsigned short var_6, unsigned char var_8, short var_9, int zero, unsigned char arr_2 [16] , long long int arr_4 [19] , unsigned short arr_7 [19] , long long int arr_8 [19] , short arr_9 [19] [19] );

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_6, var_8, var_9, zero, arr_2 , arr_4 , arr_7 , arr_8 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
