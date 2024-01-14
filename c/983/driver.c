#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -493731569;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 5691114978439594298ULL;
long long int var_6 = 903284273483145949LL;
long long int var_7 = -7001446990149533922LL;
unsigned short var_11 = (unsigned short)2785;
short var_12 = (short)-15081;
int var_13 = 1379104861;
unsigned char var_14 = (unsigned char)95;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)4;
int var_18 = -1305924552;
unsigned char var_19 = (unsigned char)65;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 5483133136517759239ULL;
unsigned int var_22 = 2839213865U;
unsigned int var_23 = 3266980106U;
_Bool var_24 = (_Bool)1;
long long int var_25 = 3844858019041780439LL;
unsigned int arr_0 [11] ;
signed char arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2311481745U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-116 : (signed char)77;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test(int var_1, _Bool var_2, unsigned long long int var_5, long long int var_6, long long int var_7, unsigned short var_11, short var_12, int var_13, unsigned char var_14, _Bool var_15, signed char var_16, int var_18, unsigned char var_19, int zero, unsigned int arr_0 [11] );

int main() {
    init();
    test(var_1, var_2, var_5, var_6, var_7, var_11, var_12, var_13, var_14, var_15, var_16, var_18, var_19, zero, arr_0 );
    checksum();
    printf("%llu\n", seed);
}
