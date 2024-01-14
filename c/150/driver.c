#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14299;
unsigned char var_1 = (unsigned char)243;
unsigned char var_2 = (unsigned char)19;
unsigned char var_3 = (unsigned char)18;
unsigned short var_4 = (unsigned short)62152;
signed char var_5 = (signed char)8;
unsigned char var_7 = (unsigned char)133;
unsigned char var_8 = (unsigned char)155;
unsigned char var_9 = (unsigned char)28;
unsigned char var_11 = (unsigned char)202;
unsigned short var_16 = (unsigned short)4840;
signed char var_18 = (signed char)25;
int zero = 0;
unsigned short var_19 = (unsigned short)11618;
unsigned short var_20 = (unsigned short)5362;
unsigned char var_21 = (unsigned char)252;
unsigned char var_22 = (unsigned char)19;
signed char var_23 = (signed char)54;
unsigned short var_24 = (unsigned short)11294;
unsigned char var_25 = (unsigned char)114;
unsigned short var_26 = (unsigned short)42533;
signed char var_27 = (signed char)-111;
unsigned char var_28 = (unsigned char)32;
unsigned char arr_0 [10] [10] ;
unsigned char arr_2 [10] [10] ;
signed char arr_3 [10] [10] [10] ;
signed char arr_8 [21] ;
signed char arr_16 [21] [21] [21] [21] ;
unsigned short arr_5 [10] ;
unsigned short arr_6 [10] [10] ;
signed char arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)90 : (signed char)5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21872 : (unsigned short)11611;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56248 : (unsigned short)56466;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)43 : (signed char)-81;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test(unsigned short var_0, unsigned char var_1, unsigned char var_2, unsigned char var_3, unsigned short var_4, signed char var_5, unsigned char var_7, unsigned char var_8, unsigned char var_9, unsigned char var_11, unsigned short var_16, signed char var_18, int zero, unsigned char arr_0 [10] [10] , unsigned char arr_2 [10] [10] , signed char arr_3 [10] [10] [10] , signed char arr_8 [21] , signed char arr_16 [21] [21] [21] [21] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_11, var_16, var_18, zero, arr_0 , arr_2 , arr_3 , arr_8 , arr_16 );
    checksum();
    printf("%llu\n", seed);
}
