#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 990263961416262644LL;
unsigned char var_1 = (unsigned char)168;
unsigned int var_2 = 4019349852U;
unsigned short var_3 = (unsigned short)2017;
unsigned long long int var_4 = 15439885973652969304ULL;
unsigned int var_5 = 704429766U;
unsigned int var_7 = 2248650357U;
unsigned int var_8 = 2522697322U;
unsigned short var_9 = (unsigned short)20978;
unsigned int var_11 = 115137520U;
long long int var_12 = -6310242853193942361LL;
int var_13 = 1764548357;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -1107297309067891363LL;
signed char var_17 = (signed char)-112;
int var_18 = 839249415;
_Bool var_19 = (_Bool)1;
long long int var_20 = 7609876832091627792LL;
unsigned short var_21 = (unsigned short)40202;
long long int var_22 = 6239922454890058743LL;
unsigned char var_23 = (unsigned char)36;
unsigned long long int arr_1 [22] ;
unsigned short arr_4 [22] ;
unsigned char arr_8 [22] [22] [22] [22] ;
unsigned short arr_10 [22] [22] [22] [22] [22] ;
long long int arr_7 [22] [22] ;
unsigned short arr_12 [22] [22] [22] ;
unsigned char arr_13 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8493196571306530261ULL : 14576137535983833347ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)14246;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)124 : (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)54550;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -8758736719839202225LL : 1391710388984029380LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)64288 : (unsigned short)51343;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)51 : (unsigned char)21;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test(long long int var_0, unsigned char var_1, unsigned int var_2, unsigned short var_3, unsigned long long int var_4, unsigned int var_5, unsigned int var_7, unsigned int var_8, unsigned short var_9, unsigned int var_11, long long int var_12, int var_13, int zero, unsigned long long int arr_1 [22] , unsigned short arr_4 [22] , unsigned char arr_8 [22] [22] [22] [22] , unsigned short arr_10 [22] [22] [22] [22] [22] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_11, var_12, var_13, zero, arr_1 , arr_4 , arr_8 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
