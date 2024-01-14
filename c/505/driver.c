#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
signed char var_1 = (signed char)-8;
unsigned int var_2 = 986757125U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3725744201U;
unsigned short var_5 = (unsigned short)57908;
unsigned long long int var_6 = 12873277543420429196ULL;
signed char var_7 = (signed char)-121;
unsigned short var_8 = (unsigned short)64772;
short var_9 = (short)-21766;
short var_10 = (short)-893;
int zero = 0;
unsigned short var_11 = (unsigned short)17533;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 6861719175649384987ULL;
unsigned short var_14 = (unsigned short)63358;
unsigned char var_15 = (unsigned char)59;
unsigned short var_16 = (unsigned short)40546;
long long int var_17 = -4531061848173989414LL;
int var_18 = -1270974554;
short var_19 = (short)2752;
long long int arr_0 [11] [11] ;
short arr_1 [11] ;
short arr_2 [11] ;
unsigned short arr_7 [11] [11] ;
short arr_9 [11] [11] [11] [11] ;
int arr_10 [11] [11] [11] [11] [11] [11] ;
long long int arr_11 [11] ;
unsigned long long int arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -2411222551955590629LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)16343;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-14999;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)43520;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-20714 : (short)-8730;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? -2016112067 : 623998674;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -3262033823633472871LL : -1074319668778844121LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 9456776457896365213ULL : 5178269262772963823ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test(signed char var_0, signed char var_1, unsigned int var_2, _Bool var_3, unsigned int var_4, unsigned short var_5, unsigned long long int var_6, signed char var_7, unsigned short var_8, short var_9, short var_10, int zero, long long int arr_0 [11] [11] , short arr_1 [11] , short arr_2 [11] , unsigned short arr_7 [11] [11] , short arr_9 [11] [11] [11] [11] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_2 , arr_7 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
