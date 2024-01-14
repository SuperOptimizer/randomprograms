#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14168940925459938367ULL;
unsigned long long int var_6 = 10235223324478116873ULL;
unsigned long long int var_9 = 5539305662292422247ULL;
short var_12 = (short)32588;
unsigned short var_13 = (unsigned short)12334;
unsigned short var_15 = (unsigned short)52875;
signed char var_16 = (signed char)-57;
unsigned short var_18 = (unsigned short)36827;
unsigned char var_19 = (unsigned char)180;
int zero = 0;
short var_20 = (short)12564;
unsigned short arr_1 [24] [24] ;
short arr_3 [24] [24] ;
signed char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)46159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)31206;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-27;
}

void checksum() {
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test(unsigned long long int var_5, unsigned long long int var_6, unsigned long long int var_9, short var_12, unsigned short var_13, unsigned short var_15, signed char var_16, unsigned short var_18, unsigned char var_19, int zero, unsigned short arr_1 [24] [24] );

int main() {
    init();
    test(var_5, var_6, var_9, var_12, var_13, var_15, var_16, var_18, var_19, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
