#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17249;
unsigned char var_1 = (unsigned char)198;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-117;
long long int var_4 = 7300191370172857664LL;
int var_5 = -675104844;
signed char var_6 = (signed char)-47;
unsigned int var_8 = 3697575354U;
_Bool var_9 = (_Bool)0;
int var_10 = -2028900639;
int zero = 0;
unsigned int var_11 = 583668663U;
unsigned long long int var_12 = 15208228471226319655ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)56;
unsigned short var_15 = (unsigned short)2951;
int var_16 = -1125848977;
short var_17 = (short)15828;
unsigned long long int var_18 = 2479915845182534470ULL;
unsigned char var_19 = (unsigned char)42;
unsigned char var_20 = (unsigned char)240;
_Bool var_21 = (_Bool)0;
unsigned short arr_0 [17] ;
long long int arr_1 [17] [17] ;
unsigned int arr_2 [17] [17] [17] ;
_Bool arr_3 [17] ;
int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)20094;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 6963876958928458112LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4242736602U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 7678072;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(short var_0, unsigned char var_1, _Bool var_2, signed char var_3, long long int var_4, int var_5, signed char var_6, unsigned int var_8, _Bool var_9, int var_10, int zero, unsigned short arr_0 [17] , long long int arr_1 [17] [17] , unsigned int arr_2 [17] [17] [17] , _Bool arr_3 [17] , int arr_4 [17] [17] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
