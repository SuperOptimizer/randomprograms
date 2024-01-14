#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17238290495624524274ULL;
short var_1 = (short)-12624;
int var_2 = -600943565;
unsigned int var_3 = 3073291430U;
unsigned long long int var_4 = 15084934327433275689ULL;
short var_5 = (short)-20498;
unsigned int var_6 = 3264619653U;
unsigned int var_7 = 1637977547U;
unsigned long long int var_8 = 5353991088970634851ULL;
unsigned int var_9 = 3516154242U;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)102;
long long int var_12 = -256392603971066827LL;
signed char var_13 = (signed char)-23;
unsigned int var_14 = 2226092632U;
unsigned short var_15 = (unsigned short)29973;
int zero = 0;
signed char var_16 = (signed char)32;
unsigned long long int var_17 = 1833550670272926934ULL;
unsigned char var_18 = (unsigned char)150;
signed char var_19 = (signed char)-90;
unsigned long long int var_20 = 15531378163548263292ULL;
unsigned short var_21 = (unsigned short)22546;
short var_22 = (short)212;
_Bool var_23 = (_Bool)1;
long long int var_24 = -2106291367103287454LL;
unsigned long long int var_25 = 914203481296939616ULL;
unsigned long long int var_26 = 13524352885288282471ULL;
unsigned int var_27 = 3266972120U;
short var_28 = (short)25066;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)199;
_Bool var_31 = (_Bool)0;
long long int var_32 = -9136378531706101943LL;
unsigned int var_33 = 1743440224U;
int var_34 = 525833519;
long long int var_35 = -3217735053164012222LL;
unsigned long long int var_36 = 9829742708121430468ULL;
_Bool var_37 = (_Bool)0;
signed char var_38 = (signed char)27;
int var_39 = -1311515192;
int var_40 = -489470219;
unsigned long long int var_41 = 5638300843747310801ULL;
unsigned short var_42 = (unsigned short)8949;
signed char var_43 = (signed char)13;
signed char arr_0 [18] ;
unsigned long long int arr_1 [18] ;
_Bool arr_4 [18] ;
long long int arr_5 [18] [18] [18] [18] ;
signed char arr_11 [18] [18] [18] [18] [18] [18] ;
int arr_6 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 641868571839832251ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -2533973782256134736LL : 5858527077590707869LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)116 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1753714195 : 503448541;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned long long int var_0, short var_1, int var_2, unsigned int var_3, unsigned long long int var_4, short var_5, unsigned int var_6, unsigned int var_7, unsigned long long int var_8, unsigned int var_9, _Bool var_10, unsigned char var_11, long long int var_12, signed char var_13, unsigned int var_14, unsigned short var_15, int zero, signed char arr_0 [18] , unsigned long long int arr_1 [18] , _Bool arr_4 [18] , long long int arr_5 [18] [18] [18] [18] , signed char arr_11 [18] [18] [18] [18] [18] [18] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_4 , arr_5 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
