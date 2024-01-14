#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
unsigned long long int var_1 = 8706547009983952320ULL;
unsigned long long int var_2 = 16956968660689945424ULL;
unsigned long long int var_3 = 14548000687243427171ULL;
signed char var_4 = (signed char)-106;
unsigned char var_5 = (unsigned char)35;
unsigned long long int var_6 = 14571756491071802602ULL;
long long int var_7 = 8106738790710873104LL;
signed char var_9 = (signed char)58;
unsigned long long int var_11 = 18445833409088428202ULL;
unsigned long long int var_12 = 12592547777680388500ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)111;
unsigned int var_15 = 1537395568U;
unsigned int var_17 = 3798090732U;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)146;
unsigned long long int var_21 = 8723462074319540963ULL;
unsigned int var_22 = 3973805370U;
unsigned long long int var_23 = 752145703163747060ULL;
signed char var_24 = (signed char)-58;
signed char var_25 = (signed char)33;
unsigned long long int var_26 = 17584672884582299520ULL;
unsigned char var_27 = (unsigned char)13;
unsigned char var_28 = (unsigned char)55;
unsigned long long int var_29 = 14559524234146322260ULL;
signed char var_30 = (signed char)-96;
unsigned char var_31 = (unsigned char)160;
int var_32 = 24706392;
int var_33 = 1920849026;
unsigned char var_34 = (unsigned char)207;
unsigned long long int var_35 = 9729890024887680050ULL;
int arr_0 [14] ;
signed char arr_2 [14] [14] [14] ;
_Bool arr_5 [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
long long int arr_8 [23] ;
short arr_4 [14] ;
long long int arr_13 [23] [23] [23] [23] ;
_Bool arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 528090720;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 13129930825748456590ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 6555984018524003658LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-13850 : (short)14512;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5245181889297970820LL : 1496289726377608048LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test(signed char var_0, unsigned long long int var_1, unsigned long long int var_2, unsigned long long int var_3, signed char var_4, unsigned char var_5, unsigned long long int var_6, long long int var_7, signed char var_9, unsigned long long int var_11, unsigned long long int var_12, _Bool var_13, signed char var_14, unsigned int var_15, unsigned int var_17, _Bool var_19, int zero, int arr_0 [14] , signed char arr_2 [14] [14] [14] , _Bool arr_5 [23] [23] , unsigned long long int arr_6 [23] [23] , long long int arr_8 [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_11, var_12, var_13, var_14, var_15, var_17, var_19, zero, arr_0 , arr_2 , arr_5 , arr_6 , arr_8 );
    checksum();
    printf("%llu\n", seed);
}
