#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7423092419453457605LL;
unsigned int var_1 = 3188678970U;
long long int var_4 = 640777371023708711LL;
short var_5 = (short)-23371;
unsigned short var_6 = (unsigned short)21837;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)6071;
unsigned short var_9 = (unsigned short)2164;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)29590;
long long int var_16 = -6597154129580495309LL;
int zero = 0;
long long int var_17 = -3922182892874393530LL;
unsigned int var_18 = 3148406890U;
short var_19 = (short)27128;
long long int var_20 = 1337902943407167652LL;
unsigned long long int var_21 = 18298811850131626201ULL;
_Bool arr_0 [12] ;
unsigned long long int arr_1 [12] [12] ;
long long int arr_3 [16] [16] ;
int arr_4 [16] ;
int arr_2 [12] ;
int arr_5 [16] ;
unsigned long long int arr_6 [16] ;
unsigned int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 8545930364662485030ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -1048052207598469077LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -692444750;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 845930489;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -43042633;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 18348700958514586257ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 1193395714U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test(long long int var_0, unsigned int var_1, long long int var_4, short var_5, unsigned short var_6, _Bool var_7, unsigned short var_8, unsigned short var_9, _Bool var_11, unsigned short var_12, long long int var_16, int zero, _Bool arr_0 [12] , unsigned long long int arr_1 [12] [12] , long long int arr_3 [16] [16] , int arr_4 [16] );

int main() {
    init();
    test(var_0, var_1, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_16, zero, arr_0 , arr_1 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
