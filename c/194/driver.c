#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3644683022037210501ULL;
unsigned long long int var_1 = 7735800069223543494ULL;
signed char var_5 = (signed char)-107;
signed char var_8 = (signed char)24;
short var_9 = (short)-6379;
unsigned int var_10 = 2464808132U;
unsigned long long int var_12 = 15278808450879678445ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1351725282;
unsigned int var_19 = 1626500463U;
unsigned long long int var_20 = 3256122664784837381ULL;
unsigned long long int var_21 = 119053945496071808ULL;
unsigned long long int var_22 = 15232840300348317631ULL;
int var_23 = 1779398015;
int var_24 = 299777120;
unsigned long long int var_25 = 3202520934544770332ULL;
unsigned short arr_1 [18] ;
short arr_5 [18] [18] ;
short arr_7 [18] [18] [18] [18] ;
int arr_17 [18] [18] ;
unsigned int arr_2 [18] ;
int arr_12 [18] [18] ;
unsigned long long int arr_13 [18] ;
unsigned long long int arr_18 [18] [18] [18] [18] ;
int arr_19 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)65313;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (short)22016;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-26431;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = 413207163;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 72405669U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 1734241841;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 10587856222516448168ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 15931131511248964723ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 1009497781;
}

void checksum() {
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
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test(unsigned long long int var_0, unsigned long long int var_1, signed char var_5, signed char var_8, short var_9, unsigned int var_10, unsigned long long int var_12, int zero, unsigned short arr_1 [18] , short arr_5 [18] [18] , short arr_7 [18] [18] [18] [18] , int arr_17 [18] [18] );

int main() {
    init();
    test(var_0, var_1, var_5, var_8, var_9, var_10, var_12, zero, arr_1 , arr_5 , arr_7 , arr_17 );
    checksum();
    printf("%llu\n", seed);
}
