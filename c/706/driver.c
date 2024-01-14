#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 486341362;
unsigned long long int var_1 = 6681177300537995679ULL;
_Bool var_2 = (_Bool)1;
long long int var_5 = -1202223899874047729LL;
int var_6 = -186478656;
unsigned long long int var_8 = 2382352689052065382ULL;
signed char var_9 = (signed char)-111;
unsigned short var_11 = (unsigned short)54777;
long long int var_12 = -4048468086759989817LL;
int var_15 = -390215919;
unsigned long long int var_16 = 17616609157589355599ULL;
int zero = 0;
long long int var_17 = 7578222482378409980LL;
long long int var_18 = -4798475680172291694LL;
unsigned char var_19 = (unsigned char)138;
long long int var_20 = -5253310703468181284LL;
unsigned short var_21 = (unsigned short)58774;
unsigned short var_22 = (unsigned short)14453;
signed char var_23 = (signed char)32;
unsigned char arr_4 [23] [23] ;
unsigned long long int arr_5 [23] ;
long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 3346984096165704763ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 4335338898285133348LL : -1542706398828774936LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test(int var_0, unsigned long long int var_1, _Bool var_2, long long int var_5, int var_6, unsigned long long int var_8, signed char var_9, unsigned short var_11, long long int var_12, int var_15, unsigned long long int var_16, int zero, unsigned char arr_4 [23] [23] , unsigned long long int arr_5 [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_6, var_8, var_9, var_11, var_12, var_15, var_16, zero, arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
