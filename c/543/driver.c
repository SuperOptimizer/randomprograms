#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17977169868581525976ULL;
short var_5 = (short)-29043;
long long int var_6 = -1287592143082015329LL;
unsigned long long int var_12 = 12419824576086058670ULL;
int zero = 0;
signed char var_13 = (signed char)115;
int var_14 = -1633426678;
int arr_0 [25] ;
signed char arr_1 [25] ;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 118350862;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-23824;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test(unsigned long long int var_0, short var_5, long long int var_6, unsigned long long int var_12, int zero, int arr_0 [25] , signed char arr_1 [25] );

int main() {
    init();
    test(var_0, var_5, var_6, var_12, zero, arr_0 , arr_1 );
    checksum();
    printf("%llu\n", seed);
}
