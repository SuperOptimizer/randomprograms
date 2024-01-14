#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
long long int var_1 = 2062401763857585963LL;
unsigned short var_2 = (unsigned short)14818;
unsigned char var_3 = (unsigned char)223;
unsigned short var_4 = (unsigned short)49515;
unsigned short var_5 = (unsigned short)31611;
_Bool var_9 = (_Bool)1;
long long int var_12 = -8739378686153287921LL;
int zero = 0;
unsigned char var_13 = (unsigned char)89;
short var_14 = (short)2089;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)56403;
long long int var_17 = -3273087350088395200LL;
short arr_0 [18] ;
_Bool arr_1 [18] [18] ;
short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-28497;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-4519;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(signed char var_0, long long int var_1, unsigned short var_2, unsigned char var_3, unsigned short var_4, unsigned short var_5, _Bool var_9, long long int var_12, int zero, short arr_0 [18] , _Bool arr_1 [18] [18] , short arr_2 [18] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_9, var_12, zero, arr_0 , arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
