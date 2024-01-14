#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14655;
unsigned int var_1 = 289959481U;
signed char var_2 = (signed char)-102;
unsigned long long int var_3 = 16339887941692760483ULL;
unsigned char var_4 = (unsigned char)35;
unsigned short var_5 = (unsigned short)14707;
unsigned long long int var_6 = 16942221367965236968ULL;
short var_7 = (short)32692;
unsigned long long int var_8 = 10387993695120764730ULL;
short var_9 = (short)29816;
long long int var_10 = 1919872952471150399LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4499248649799664920LL;
int var_15 = -428756924;
unsigned long long int var_16 = 3281995003969138283ULL;
unsigned char var_17 = (unsigned char)212;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)20007;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-34;
unsigned int var_22 = 1415891961U;
short var_23 = (short)-6566;
short var_24 = (short)-27957;
unsigned int var_25 = 1727561630U;
short var_26 = (short)-12515;
_Bool var_27 = (_Bool)0;
unsigned char arr_2 [21] [21] ;
unsigned int arr_3 [21] ;
int arr_6 [21] [21] [21] ;
short arr_7 [21] ;
int arr_11 [12] ;
long long int arr_14 [12] [12] [12] ;
unsigned long long int arr_15 [12] [12] [12] ;
long long int arr_16 [12] ;
_Bool arr_21 [20] ;
long long int arr_32 [25] [25] ;
unsigned int arr_33 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 3454576714U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1808884873;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)11628;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 388275376;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -1841360750858173784LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 18148413729424540359ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = 5182191203744555011LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_32 [i_0] [i_1] = 7104035856085418133LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = 2319565213U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test(short var_0, unsigned int var_1, signed char var_2, unsigned long long int var_3, unsigned char var_4, unsigned short var_5, unsigned long long int var_6, short var_7, unsigned long long int var_8, short var_9, long long int var_10, _Bool var_11, long long int var_12, int var_15, unsigned long long int var_16, unsigned char var_17, _Bool var_18, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_15, var_16, var_17, var_18, zero);
    checksum();
    printf("%llu\n", seed);
}
