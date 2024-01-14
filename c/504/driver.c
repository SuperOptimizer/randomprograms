#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 668755986069132887ULL;
signed char var_2 = (signed char)17;
unsigned int var_4 = 3498981562U;
unsigned long long int var_5 = 14013289507502382093ULL;
_Bool var_6 = (_Bool)1;
short var_8 = (short)28497;
unsigned long long int var_9 = 12934847258458805887ULL;
signed char var_12 = (signed char)67;
unsigned char var_13 = (unsigned char)57;
int zero = 0;
long long int var_14 = -4855304346413052019LL;
signed char var_15 = (signed char)-56;
short var_16 = (short)24947;
unsigned int arr_3 [25] [25] ;
_Bool arr_4 [25] ;
_Bool arr_7 [25] [25] [25] ;
unsigned int arr_8 [25] [25] [25] [25] ;
unsigned int arr_9 [25] [25] [25] ;
unsigned long long int arr_15 [25] [25] [25] [25] [25] ;
unsigned long long int arr_16 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3189931121U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3624441755U : 3218102955U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3149471062U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2172429238334451847ULL : 8203095835299624216ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 4279090273093685796ULL : 11482677194826180344ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test(unsigned long long int var_1, signed char var_2, unsigned int var_4, unsigned long long int var_5, _Bool var_6, short var_8, unsigned long long int var_9, signed char var_12, unsigned char var_13, int zero, unsigned int arr_3 [25] [25] , _Bool arr_4 [25] , _Bool arr_7 [25] [25] [25] , unsigned int arr_8 [25] [25] [25] [25] , unsigned int arr_9 [25] [25] [25] );

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_6, var_8, var_9, var_12, var_13, zero, arr_3 , arr_4 , arr_7 , arr_8 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
