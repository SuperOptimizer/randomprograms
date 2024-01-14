#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
unsigned int var_1 = 448514187U;
long long int var_3 = -5296184474624349494LL;
unsigned char var_5 = (unsigned char)117;
unsigned char var_6 = (unsigned char)109;
unsigned long long int var_9 = 10180882722327850093ULL;
short var_10 = (short)784;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)33568;
int zero = 0;
unsigned short var_17 = (unsigned short)7678;
unsigned char var_18 = (unsigned char)173;
unsigned char var_19 = (unsigned char)198;
long long int var_20 = 2300292201986986061LL;
int var_21 = 215546014;
unsigned int var_22 = 3817763381U;
short arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
int arr_2 [16] ;
unsigned long long int arr_5 [16] [16] ;
unsigned char arr_8 [16] [16] [16] [16] ;
long long int arr_12 [16] [16] [16] [16] [16] ;
_Bool arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)12362 : (short)21722;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)60 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1944971243 : 1126524096;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 5606566862569336669ULL : 1548521988759914025ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -7760694732946906475LL : 8419101571211522066LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test(signed char var_0, unsigned int var_1, long long int var_3, unsigned char var_5, unsigned char var_6, unsigned long long int var_9, short var_10, _Bool var_14, unsigned short var_16, int zero, short arr_0 [16] [16] , unsigned char arr_1 [16] , int arr_2 [16] , unsigned long long int arr_5 [16] [16] , unsigned char arr_8 [16] [16] [16] [16] , long long int arr_12 [16] [16] [16] [16] [16] );

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_6, var_9, var_10, var_14, var_16, zero, arr_0 , arr_1 , arr_2 , arr_5 , arr_8 , arr_12 );
    checksum();
    printf("%llu\n", seed);
}
