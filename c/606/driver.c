#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3539629350600252003LL;
long long int var_6 = 8549596136278371480LL;
_Bool var_7 = (_Bool)1;
int var_10 = 950883671;
unsigned short var_11 = (unsigned short)22295;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)217;
short var_17 = (short)-29856;
long long int var_18 = 436897012255531389LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3948394589U;
unsigned char var_22 = (unsigned char)230;
short var_23 = (short)-1626;
_Bool arr_0 [22] ;
_Bool arr_1 [22] [22] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-63;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(long long int var_2, long long int var_6, _Bool var_7, int var_10, unsigned short var_11, _Bool var_15, unsigned char var_16, short var_17, long long int var_18, int zero, _Bool arr_0 [22] , _Bool arr_1 [22] [22] , signed char arr_2 [22] );

int main() {
    init();
    test(var_2, var_6, var_7, var_10, var_11, var_15, var_16, var_17, var_18, zero, arr_0 , arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
