#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
signed char var_1 = (signed char)-23;
unsigned short var_2 = (unsigned short)14097;
short var_3 = (short)-17431;
unsigned short var_4 = (unsigned short)27019;
signed char var_5 = (signed char)-125;
long long int var_6 = 3160475545192672902LL;
int var_7 = 962027992;
long long int var_8 = -6460293184116817678LL;
unsigned char var_9 = (unsigned char)137;
unsigned short var_10 = (unsigned short)1045;
short var_11 = (short)-17909;
long long int var_12 = 2879183181096707500LL;
unsigned char var_13 = (unsigned char)122;
unsigned char var_14 = (unsigned char)69;
int var_15 = -538906139;
signed char var_16 = (signed char)5;
int zero = 0;
unsigned char var_17 = (unsigned char)132;
unsigned short var_18 = (unsigned short)14032;
unsigned char var_19 = (unsigned char)112;
unsigned short var_20 = (unsigned short)48712;
long long int var_21 = 1329712592287781861LL;
signed char var_22 = (signed char)46;
signed char var_23 = (signed char)-127;
unsigned short var_24 = (unsigned short)42245;
signed char var_25 = (signed char)94;
unsigned char var_26 = (unsigned char)196;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 1428101728U;
unsigned short var_29 = (unsigned short)44340;
signed char var_30 = (signed char)57;
unsigned short var_31 = (unsigned short)60047;
unsigned int var_32 = 796406760U;
long long int var_33 = -2448637175794605428LL;
int var_34 = 601818964;
unsigned char var_35 = (unsigned char)205;
short var_36 = (short)-17807;
unsigned int var_37 = 1616222276U;
unsigned short arr_4 [24] [24] ;
unsigned short arr_7 [15] ;
unsigned int arr_14 [15] [15] [15] [15] [15] [15] ;
int arr_17 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)6876;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)62266;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 735111490U : 3835582307U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = -946797047;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test(unsigned char var_0, signed char var_1, unsigned short var_2, short var_3, unsigned short var_4, signed char var_5, long long int var_6, int var_7, long long int var_8, unsigned char var_9, unsigned short var_10, short var_11, long long int var_12, unsigned char var_13, unsigned char var_14, int var_15, signed char var_16, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
