#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1445136404;
unsigned char var_2 = (unsigned char)253;
signed char var_3 = (signed char)-64;
unsigned int var_5 = 933241748U;
int var_6 = 1201967730;
unsigned int var_7 = 3190645050U;
unsigned long long int var_8 = 2067648818684778376ULL;
int var_9 = -1684171596;
signed char var_10 = (signed char)-28;
int var_11 = 221275058;
long long int var_13 = -452387166437044320LL;
unsigned short var_14 = (unsigned short)23507;
unsigned char var_15 = (unsigned char)187;
int zero = 0;
unsigned long long int var_16 = 1131233400450293690ULL;
unsigned char var_17 = (unsigned char)78;
unsigned int var_18 = 533692728U;
long long int var_19 = 6182529004027802384LL;
long long int var_20 = 8796249639853556621LL;
unsigned char var_21 = (unsigned char)26;
long long int var_22 = -8728950848332917039LL;
long long int var_23 = 2322432757628910958LL;
unsigned char var_24 = (unsigned char)152;
unsigned long long int var_25 = 3977843098038347377ULL;
signed char arr_0 [17] ;
short arr_1 [17] [17] ;
unsigned short arr_3 [17] [17] [17] ;
unsigned char arr_4 [17] [17] [17] ;
unsigned char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)31038;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)55903;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)118;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test(int var_0, unsigned char var_2, signed char var_3, unsigned int var_5, int var_6, unsigned int var_7, unsigned long long int var_8, int var_9, signed char var_10, int var_11, long long int var_13, unsigned short var_14, unsigned char var_15, int zero, signed char arr_0 [17] , short arr_1 [17] [17] , unsigned short arr_3 [17] [17] [17] );

int main() {
    init();
    test(var_0, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
