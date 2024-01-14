#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2297596622U;
signed char var_1 = (signed char)-105;
long long int var_2 = -51806702215257714LL;
unsigned short var_3 = (unsigned short)30576;
signed char var_4 = (signed char)45;
signed char var_5 = (signed char)90;
unsigned int var_6 = 2858372399U;
signed char var_7 = (signed char)-46;
signed char var_8 = (signed char)-103;
int var_9 = -64497014;
int var_11 = -527683370;
unsigned short var_12 = (unsigned short)4549;
int zero = 0;
int var_15 = 1106423639;
long long int var_16 = -7352617160372446987LL;
unsigned short var_17 = (unsigned short)1277;
unsigned int var_18 = 1417444905U;
long long int var_19 = 2513250122334365360LL;
long long int var_20 = -3123014407150181835LL;
long long int var_21 = -419630938100416616LL;
signed char var_22 = (signed char)45;
unsigned char var_23 = (unsigned char)203;
unsigned char var_24 = (unsigned char)146;
unsigned char var_25 = (unsigned char)234;
short arr_2 [15] ;
long long int arr_3 [19] [19] ;
short arr_4 [19] ;
long long int arr_5 [19] [19] ;
unsigned int arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)24973;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -757380291579016734LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)-23713;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3632232984152412419LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 166316422U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test(unsigned int var_0, signed char var_1, long long int var_2, unsigned short var_3, signed char var_4, signed char var_5, unsigned int var_6, signed char var_7, signed char var_8, int var_9, int var_11, unsigned short var_12, int zero, short arr_2 [15] , long long int arr_3 [19] [19] , short arr_4 [19] , long long int arr_5 [19] [19] , unsigned int arr_7 [19] [19] [19] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, zero, arr_2 , arr_3 , arr_4 , arr_5 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
