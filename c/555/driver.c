#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
unsigned long long int var_1 = 12031959238992030557ULL;
signed char var_2 = (signed char)15;
int var_3 = -2101444874;
int var_4 = 1981915164;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-34;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)88;
unsigned short var_12 = (unsigned short)41126;
unsigned char var_13 = (unsigned char)79;
int zero = 0;
int var_14 = -1196753820;
signed char var_15 = (signed char)87;
unsigned int var_16 = 616204784U;
unsigned char var_17 = (unsigned char)76;
signed char var_18 = (signed char)80;
signed char var_19 = (signed char)102;
signed char arr_0 [17] ;
int arr_1 [17] [17] ;
_Bool arr_2 [17] ;
short arr_4 [17] [17] [17] ;
signed char arr_5 [17] [17] ;
unsigned short arr_8 [17] [17] [17] [17] ;
short arr_9 [17] ;
int arr_10 [17] [17] [17] [17] ;
unsigned char arr_14 [14] ;
unsigned short arr_12 [17] [17] [17] ;
int arr_13 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_16 [14] ;
unsigned int arr_20 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -1598628450;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)4845;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)249;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (short)15586;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 284131901;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)14397;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -175046062;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 1709783849096921719ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = 21636066U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test(signed char var_0, unsigned long long int var_1, signed char var_2, int var_3, int var_4, _Bool var_7, signed char var_9, _Bool var_10, signed char var_11, unsigned short var_12, unsigned char var_13, int zero, signed char arr_0 [17] , int arr_1 [17] [17] , _Bool arr_2 [17] , short arr_4 [17] [17] [17] , signed char arr_5 [17] [17] , unsigned short arr_8 [17] [17] [17] [17] , short arr_9 [17] , int arr_10 [17] [17] [17] [17] , unsigned char arr_14 [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_7, var_9, var_10, var_11, var_12, var_13, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_8 , arr_9 , arr_10 , arr_14 );
    checksum();
    printf("%llu\n", seed);
}
