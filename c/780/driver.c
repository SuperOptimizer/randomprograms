#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1566170774U;
_Bool var_1 = (_Bool)0;
short var_2 = (short)23896;
int var_3 = -317448406;
unsigned int var_4 = 3414432948U;
unsigned short var_5 = (unsigned short)46090;
int var_6 = -744943160;
unsigned long long int var_7 = 13417074537335502899ULL;
int var_9 = -951114732;
int zero = 0;
signed char var_10 = (signed char)93;
int var_11 = -1665039360;
signed char var_12 = (signed char)-63;
unsigned long long int var_13 = 14875801642850068999ULL;
int var_14 = 212641468;
short var_15 = (short)-24834;
short var_16 = (short)10943;
unsigned int var_17 = 95714591U;
short arr_0 [17] ;
short arr_1 [17] ;
signed char arr_3 [17] [17] [17] ;
short arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-12719;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)17218 : (short)-25514;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-26142 : (short)-29011;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(unsigned int var_0, _Bool var_1, short var_2, int var_3, unsigned int var_4, unsigned short var_5, int var_6, unsigned long long int var_7, int var_9, int zero, short arr_0 [17] , short arr_1 [17] , signed char arr_3 [17] [17] [17] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, zero, arr_0 , arr_1 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
