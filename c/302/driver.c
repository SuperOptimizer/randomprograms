#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6994;
unsigned short var_1 = (unsigned short)15650;
unsigned short var_2 = (unsigned short)20166;
unsigned short var_3 = (unsigned short)65357;
unsigned short var_4 = (unsigned short)4084;
unsigned short var_5 = (unsigned short)28660;
unsigned short var_6 = (unsigned short)49269;
unsigned short var_7 = (unsigned short)13868;
unsigned short var_8 = (unsigned short)25216;
unsigned short var_9 = (unsigned short)20308;
unsigned short var_10 = (unsigned short)42193;
unsigned short var_11 = (unsigned short)34055;
unsigned short var_12 = (unsigned short)11700;
unsigned short var_13 = (unsigned short)56333;
int zero = 0;
unsigned short var_14 = (unsigned short)8724;
unsigned short var_15 = (unsigned short)19964;
unsigned short var_16 = (unsigned short)37111;
unsigned short var_17 = (unsigned short)34586;
unsigned short var_18 = (unsigned short)53320;
unsigned short var_19 = (unsigned short)65058;
unsigned short var_20 = (unsigned short)59599;
unsigned short var_21 = (unsigned short)50188;
unsigned short var_22 = (unsigned short)6622;
unsigned short var_23 = (unsigned short)37934;
unsigned short var_24 = (unsigned short)1040;
unsigned short var_25 = (unsigned short)48768;
unsigned short var_26 = (unsigned short)32704;
unsigned short var_27 = (unsigned short)8327;
unsigned short var_28 = (unsigned short)6058;
unsigned short var_29 = (unsigned short)49175;
unsigned short var_30 = (unsigned short)42597;
unsigned short var_31 = (unsigned short)440;
unsigned short var_32 = (unsigned short)46217;
unsigned short arr_2 [21] ;
unsigned short arr_7 [25] ;
unsigned short arr_8 [25] [25] ;
unsigned short arr_9 [25] ;
unsigned short arr_12 [24] ;
unsigned short arr_14 [24] ;
unsigned short arr_16 [24] [24] [24] [24] ;
unsigned short arr_17 [24] [24] [24] ;
unsigned short arr_24 [24] [24] [24] [24] [24] ;
unsigned short arr_29 [24] [24] [24] ;
unsigned short arr_5 [21] ;
unsigned short arr_10 [25] ;
unsigned short arr_18 [24] [24] [24] ;
unsigned short arr_19 [24] [24] [24] ;
unsigned short arr_30 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)2189;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)57263;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)53134;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)20660;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned short)42244;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (unsigned short)18633;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)8172;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)25197;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)19589 : (unsigned short)50949;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned short)49866;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5143 : (unsigned short)22398;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)22098;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)31178;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)46855;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned short)25978;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test(unsigned short var_0, unsigned short var_1, unsigned short var_2, unsigned short var_3, unsigned short var_4, unsigned short var_5, unsigned short var_6, unsigned short var_7, unsigned short var_8, unsigned short var_9, unsigned short var_10, unsigned short var_11, unsigned short var_12, unsigned short var_13, int zero, unsigned short arr_2 [21] , unsigned short arr_7 [25] , unsigned short arr_8 [25] [25] , unsigned short arr_9 [25] , unsigned short arr_12 [24] , unsigned short arr_14 [24] , unsigned short arr_16 [24] [24] [24] [24] , unsigned short arr_17 [24] [24] [24] , unsigned short arr_24 [24] [24] [24] [24] [24] , unsigned short arr_29 [24] [24] [24] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, arr_2 , arr_7 , arr_8 , arr_9 , arr_12 , arr_14 , arr_16 , arr_17 , arr_24 , arr_29 );
    checksum();
    printf("%llu\n", seed);
}
