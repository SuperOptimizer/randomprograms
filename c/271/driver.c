#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2237025342U;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-24;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 1191745658790909260ULL;
short var_11 = (short)9700;
signed char var_12 = (signed char)18;
unsigned short var_14 = (unsigned short)35788;
long long int var_15 = -1336666039406838989LL;
int var_16 = -432108941;
unsigned long long int var_17 = 1517220349156579687ULL;
int zero = 0;
signed char var_18 = (signed char)-19;
unsigned long long int var_19 = 13335822972792406582ULL;
unsigned long long int var_20 = 10245918954065926958ULL;
long long int var_21 = -4532540417934658295LL;
short var_22 = (short)30570;
unsigned long long int var_23 = 6364007895896159480ULL;
signed char var_24 = (signed char)34;
unsigned short arr_0 [17] ;
_Bool arr_1 [17] ;
short arr_2 [17] ;
_Bool arr_3 [17] [17] ;
unsigned char arr_4 [17] [17] [17] ;
unsigned short arr_5 [17] [17] [17] ;
unsigned long long int arr_6 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)60926;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)23818;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)34851;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3911690193120266825ULL : 1105859487991580162ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned int var_0, _Bool var_2, signed char var_5, _Bool var_7, unsigned long long int var_8, short var_11, signed char var_12, unsigned short var_14, long long int var_15, int var_16, unsigned long long int var_17, int zero, unsigned short arr_0 [17] , _Bool arr_1 [17] , short arr_2 [17] , _Bool arr_3 [17] [17] , unsigned char arr_4 [17] [17] [17] , unsigned short arr_5 [17] [17] [17] );

int main() {
    init();
    test(var_0, var_2, var_5, var_7, var_8, var_11, var_12, var_14, var_15, var_16, var_17, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 );
    checksum();
    printf("%llu\n", seed);
}
