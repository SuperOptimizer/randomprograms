#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9542;
unsigned int var_1 = 56527108U;
long long int var_2 = 243068572372677996LL;
unsigned int var_3 = 3273109012U;
long long int var_4 = -4436233203491846569LL;
unsigned long long int var_5 = 8432944772425828229ULL;
long long int var_6 = 1226251921440554026LL;
short var_7 = (short)12330;
long long int var_8 = -6046859307901556773LL;
unsigned int var_9 = 784921995U;
short var_10 = (short)29416;
unsigned int var_11 = 3769284078U;
short var_12 = (short)15201;
int zero = 0;
unsigned long long int var_13 = 16530354005784058027ULL;
short var_14 = (short)-3061;
long long int var_15 = 5590441461975988537LL;
unsigned char var_16 = (unsigned char)181;
unsigned int var_17 = 361707074U;
unsigned int var_18 = 3902253132U;
long long int var_19 = 6310468829138999491LL;
unsigned int var_20 = 2766948953U;
unsigned int var_21 = 513154235U;
short var_22 = (short)-24525;
unsigned int var_23 = 4221584746U;
unsigned int var_24 = 3001341046U;
unsigned int var_25 = 3705231999U;
unsigned int arr_1 [18] ;
short arr_5 [18] [18] [18] ;
unsigned int arr_6 [18] [18] [18] ;
unsigned int arr_10 [18] [18] [18] [18] ;
unsigned char arr_11 [18] ;
short arr_12 [18] [18] [18] [18] ;
short arr_20 [25] [25] [25] ;
unsigned int arr_21 [25] [25] [25] ;
long long int arr_16 [18] [18] [18] [18] ;
unsigned int arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 833860615U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-5369 : (short)30712;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2065196221U : 761103303U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1876304556U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-15943 : (short)-2125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)-16516;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 2503410968U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 5518668896340509668LL : -2107807001601506122LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 2327652355U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test(short var_0, unsigned int var_1, long long int var_2, unsigned int var_3, long long int var_4, unsigned long long int var_5, long long int var_6, short var_7, long long int var_8, unsigned int var_9, short var_10, unsigned int var_11, short var_12, int zero, unsigned int arr_1 [18] , short arr_5 [18] [18] [18] , unsigned int arr_6 [18] [18] [18] , unsigned int arr_10 [18] [18] [18] [18] , unsigned char arr_11 [18] , short arr_12 [18] [18] [18] [18] , short arr_20 [25] [25] [25] , unsigned int arr_21 [25] [25] [25] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, arr_1 , arr_5 , arr_6 , arr_10 , arr_11 , arr_12 , arr_20 , arr_21 );
    checksum();
    printf("%llu\n", seed);
}
