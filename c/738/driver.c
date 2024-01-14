#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned int var_1 = 3703777912U;
unsigned char var_3 = (unsigned char)79;
long long int var_4 = 2217384505078961453LL;
int var_5 = -896349693;
short var_6 = (short)-28223;
int var_7 = 1339118793;
unsigned short var_8 = (unsigned short)26478;
long long int var_9 = 1920460804809244666LL;
int zero = 0;
signed char var_10 = (signed char)-100;
short var_11 = (short)7208;
long long int var_12 = -2308420921771246714LL;
int var_13 = -1706813476;
unsigned long long int arr_2 [12] ;
signed char arr_6 [12] [12] [12] ;
unsigned int arr_8 [12] [12] ;
signed char arr_12 [12] ;
unsigned long long int arr_14 [12] ;
unsigned char arr_15 [12] [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 710799596377777874ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-69 : (signed char)75;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 2660491630U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 3116156258502591664ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (unsigned char)122 : (unsigned char)145;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test(signed char var_0, unsigned int var_1, unsigned char var_3, long long int var_4, int var_5, short var_6, int var_7, unsigned short var_8, long long int var_9, int zero, unsigned long long int arr_2 [12] , signed char arr_6 [12] [12] [12] , unsigned int arr_8 [12] [12] , signed char arr_12 [12] , unsigned long long int arr_14 [12] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, arr_2 , arr_6 , arr_8 , arr_12 , arr_14 );
    checksum();
    printf("%llu\n", seed);
}
