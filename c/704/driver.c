#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11097225669408068500ULL;
int var_2 = 1347470396;
short var_3 = (short)2018;
unsigned int var_4 = 3357576900U;
unsigned int var_5 = 2969594200U;
unsigned int var_6 = 2193526818U;
signed char var_7 = (signed char)109;
signed char var_9 = (signed char)7;
unsigned char var_10 = (unsigned char)255;
unsigned short var_11 = (unsigned short)57912;
unsigned short var_12 = (unsigned short)56615;
unsigned int var_13 = 1891321890U;
int zero = 0;
short var_16 = (short)3933;
long long int var_17 = -13138756134717301LL;
long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -4353459681985902830LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(unsigned long long int var_1, int var_2, short var_3, unsigned int var_4, unsigned int var_5, unsigned int var_6, signed char var_7, signed char var_9, unsigned char var_10, unsigned short var_11, unsigned short var_12, unsigned int var_13, int zero);

int main() {
    init();
    test(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
