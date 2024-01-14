#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)156;
signed char var_2 = (signed char)86;
unsigned long long int var_3 = 3799133798539866131ULL;
unsigned char var_4 = (unsigned char)100;
unsigned char var_5 = (unsigned char)33;
signed char var_6 = (signed char)-47;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 12626058304527231814ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)142;
int zero = 0;
long long int var_11 = 8049550507295361431LL;
unsigned long long int var_12 = 11291839367753551075ULL;
unsigned char var_13 = (unsigned char)231;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 9510540225465647136ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 3139456606839714730LL;
long long int var_19 = -3367029147907331500LL;
long long int var_20 = -4818013292109389502LL;
signed char var_21 = (signed char)-125;
long long int var_22 = 8636926060052846512LL;
signed char var_23 = (signed char)-11;
unsigned char var_24 = (unsigned char)47;
signed char var_25 = (signed char)-96;
_Bool var_26 = (_Bool)1;
long long int var_27 = -5868602457205965367LL;
unsigned long long int var_28 = 17864801658885045538ULL;
long long int var_29 = -5885546682777109436LL;
signed char var_30 = (signed char)-35;
signed char var_31 = (signed char)2;
long long int var_32 = 4765330321217164085LL;
unsigned long long int arr_4 [22] [22] ;
_Bool arr_5 [22] [22] ;
_Bool arr_6 [22] [22] [22] ;
unsigned char arr_15 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 9647945810266957892ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)99;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test(_Bool var_0, unsigned char var_1, signed char var_2, unsigned long long int var_3, unsigned char var_4, unsigned char var_5, signed char var_6, _Bool var_7, unsigned long long int var_8, _Bool var_9, unsigned char var_10, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
