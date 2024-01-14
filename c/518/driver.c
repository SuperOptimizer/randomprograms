#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)217;
int zero = 0;
unsigned char var_14 = (unsigned char)6;
unsigned char var_15 = (unsigned char)210;
unsigned char arr_1 [22] ;
unsigned char arr_2 [22] ;
unsigned char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)159;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test(unsigned char var_13, int zero, unsigned char arr_1 [22] , unsigned char arr_2 [22] );

int main() {
    init();
    test(var_13, zero, arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
