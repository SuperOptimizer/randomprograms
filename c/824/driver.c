#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4224422366660685681LL;
unsigned char var_1 = (unsigned char)22;
short var_2 = (short)-3534;
unsigned char var_3 = (unsigned char)160;
unsigned int var_4 = 3280205169U;
unsigned char var_5 = (unsigned char)79;
signed char var_6 = (signed char)103;
unsigned char var_8 = (unsigned char)87;
signed char var_9 = (signed char)-122;
short var_10 = (short)31588;
unsigned int var_11 = 4030184304U;
unsigned int var_12 = 315494252U;
unsigned int var_13 = 3356394318U;
signed char var_14 = (signed char)23;
unsigned short var_15 = (unsigned short)17986;
unsigned char var_16 = (unsigned char)115;
unsigned short var_17 = (unsigned short)31090;
int zero = 0;
unsigned int var_18 = 3979496267U;
unsigned short var_19 = (unsigned short)37073;
unsigned int var_20 = 12689984U;
unsigned long long int var_21 = 11275827424020163393ULL;
int var_22 = 1695233863;
long long int var_23 = 1947198812900466123LL;
unsigned char var_24 = (unsigned char)9;
signed char var_25 = (signed char)-123;
unsigned long long int var_26 = 11856688043029668719ULL;
signed char var_27 = (signed char)-118;
unsigned int var_28 = 120878354U;
unsigned long long int var_29 = 3726591729395979447ULL;
unsigned short var_30 = (unsigned short)37223;
unsigned long long int arr_1 [13] ;
short arr_3 [13] ;
unsigned long long int arr_6 [13] ;
long long int arr_8 [13] [13] [13] ;
_Bool arr_10 [13] ;
int arr_16 [13] [13] [13] [13] [13] [13] ;
short arr_18 [13] [13] [13] [13] ;
short arr_19 [13] ;
int arr_4 [13] ;
unsigned short arr_20 [13] [13] [13] [13] [13] [13] ;
signed char arr_21 [13] [13] [13] ;
signed char arr_22 [13] [13] [13] ;
signed char arr_23 [13] [13] [13] [13] ;
unsigned char arr_24 [13] [13] [13] [13] ;
long long int arr_25 [13] [13] ;
int arr_26 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 17922564807863200500ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-28488;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 1970174405508317273ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 9096390683182796297LL : -4974254351190145773LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 1574730068 : -1444278697;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)32543;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)11708 : (short)-31090;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -1233000048;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)32269 : (unsigned short)52300;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-47 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)94 : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-53 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_25 [i_0] [i_1] = 5557018334031969422LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = -1335589255;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test(long long int var_0, unsigned char var_1, short var_2, unsigned char var_3, unsigned int var_4, unsigned char var_5, signed char var_6, unsigned char var_8, signed char var_9, short var_10, unsigned int var_11, unsigned int var_12, unsigned int var_13, signed char var_14, unsigned short var_15, unsigned char var_16, unsigned short var_17, int zero, unsigned long long int arr_1 [13] , short arr_3 [13] , unsigned long long int arr_6 [13] , long long int arr_8 [13] [13] [13] , _Bool arr_10 [13] , int arr_16 [13] [13] [13] [13] [13] [13] , short arr_18 [13] [13] [13] [13] , short arr_19 [13] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, arr_1 , arr_3 , arr_6 , arr_8 , arr_10 , arr_16 , arr_18 , arr_19 );
    checksum();
    printf("%llu\n", seed);
}
