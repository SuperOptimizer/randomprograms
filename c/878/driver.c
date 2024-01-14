#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -471312723;
int var_1 = -1869167713;
signed char var_2 = (signed char)-69;
signed char var_3 = (signed char)67;
long long int var_4 = -3501451985033064472LL;
signed char var_5 = (signed char)91;
unsigned char var_6 = (unsigned char)129;
int var_7 = 166313191;
long long int var_8 = -1004154208872497785LL;
long long int var_9 = -4319253128383599115LL;
signed char var_10 = (signed char)-96;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-10648;
unsigned char var_13 = (unsigned char)64;
int var_14 = -1164760052;
signed char var_15 = (signed char)58;
unsigned short var_16 = (unsigned short)40134;
unsigned int var_17 = 3636798252U;
int zero = 0;
long long int var_18 = -4508258354939317638LL;
long long int var_19 = 4778202504799480978LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-26;
unsigned char var_23 = (unsigned char)243;
short var_24 = (short)-18159;
long long int var_25 = 1136419570945597799LL;
unsigned long long int var_26 = 2956468517656719016ULL;
unsigned long long int var_27 = 7525979370558031020ULL;
unsigned long long int var_28 = 13434201354520829312ULL;
unsigned short var_29 = (unsigned short)59399;
signed char var_30 = (signed char)-108;
unsigned long long int var_31 = 17865945618286898904ULL;
unsigned int arr_0 [14] ;
_Bool arr_1 [14] [14] ;
_Bool arr_2 [14] [14] ;
unsigned char arr_4 [14] ;
unsigned char arr_6 [14] [14] [14] ;
short arr_7 [14] ;
signed char arr_8 [14] [14] [14] ;
int arr_9 [14] [14] [14] [14] ;
long long int arr_12 [14] [14] [14] [14] [14] ;
unsigned char arr_13 [14] [14] [14] [14] [14] ;
unsigned char arr_18 [22] ;
long long int arr_19 [22] ;
short arr_22 [10] [10] ;
unsigned int arr_5 [14] [14] [14] ;
short arr_15 [14] [14] [14] [14] ;
unsigned char arr_16 [14] [14] [14] [14] [14] ;
unsigned long long int arr_17 [14] [14] ;
signed char arr_20 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1905224571U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)-9230;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1566833116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -1904001161268770463LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 5081240336477923421LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = (short)31118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 907330115U : 2083507423U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)4579 : (short)-15711;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)29 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 1378115817007776831ULL : 16935176592410827870ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)-35;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test(int var_0, int var_1, signed char var_2, signed char var_3, long long int var_4, signed char var_5, unsigned char var_6, int var_7, long long int var_8, long long int var_9, signed char var_10, _Bool var_11, short var_12, unsigned char var_13, int var_14, signed char var_15, unsigned short var_16, unsigned int var_17, int zero, unsigned int arr_0 [14] , _Bool arr_1 [14] [14] , _Bool arr_2 [14] [14] , unsigned char arr_4 [14] , unsigned char arr_6 [14] [14] [14] , short arr_7 [14] , signed char arr_8 [14] [14] [14] , int arr_9 [14] [14] [14] [14] , long long int arr_12 [14] [14] [14] [14] [14] , unsigned char arr_13 [14] [14] [14] [14] [14] , unsigned char arr_18 [22] , long long int arr_19 [22] , short arr_22 [10] [10] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_6 , arr_7 , arr_8 , arr_9 , arr_12 , arr_13 , arr_18 , arr_19 , arr_22 );
    checksum();
    printf("%llu\n", seed);
}
