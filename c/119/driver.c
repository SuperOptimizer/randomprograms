#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19338;
unsigned short var_1 = (unsigned short)14619;
unsigned short var_2 = (unsigned short)49760;
unsigned short var_3 = (unsigned short)32059;
unsigned short var_4 = (unsigned short)27510;
unsigned short var_5 = (unsigned short)26533;
unsigned short var_6 = (unsigned short)17521;
unsigned short var_7 = (unsigned short)35490;
unsigned short var_8 = (unsigned short)45531;
unsigned short var_9 = (unsigned short)20653;
unsigned short var_10 = (unsigned short)37078;
unsigned short var_11 = (unsigned short)18690;
unsigned short var_12 = (unsigned short)32404;
unsigned short var_13 = (unsigned short)16527;
unsigned short var_14 = (unsigned short)54152;
unsigned short var_15 = (unsigned short)64953;
unsigned short var_16 = (unsigned short)15992;
unsigned short var_17 = (unsigned short)10575;
unsigned short var_18 = (unsigned short)33400;
int zero = 0;
unsigned short var_19 = (unsigned short)4425;
unsigned short var_20 = (unsigned short)40319;
unsigned short var_21 = (unsigned short)41052;
unsigned short var_22 = (unsigned short)14007;
unsigned short var_23 = (unsigned short)5130;
unsigned short var_24 = (unsigned short)19949;
unsigned short var_25 = (unsigned short)63556;
unsigned short var_26 = (unsigned short)33234;
unsigned short var_27 = (unsigned short)55615;
unsigned short var_28 = (unsigned short)3697;
unsigned short var_29 = (unsigned short)63249;
unsigned short var_30 = (unsigned short)46986;
unsigned short var_31 = (unsigned short)7802;
unsigned short var_32 = (unsigned short)24521;
unsigned short var_33 = (unsigned short)44255;
unsigned short var_34 = (unsigned short)27211;
unsigned short var_35 = (unsigned short)55001;
unsigned short var_36 = (unsigned short)40512;
unsigned short var_37 = (unsigned short)55973;
unsigned short var_38 = (unsigned short)55274;
unsigned short var_39 = (unsigned short)8464;
unsigned short var_40 = (unsigned short)2400;
unsigned short var_41 = (unsigned short)43544;
unsigned short var_42 = (unsigned short)62478;
unsigned short var_43 = (unsigned short)20217;
unsigned short var_44 = (unsigned short)24499;
unsigned short var_45 = (unsigned short)53117;
unsigned short arr_2 [25] [25] ;
unsigned short arr_3 [25] ;
unsigned short arr_4 [25] [25] ;
unsigned short arr_5 [25] [25] ;
unsigned short arr_9 [20] [20] ;
unsigned short arr_18 [10] [10] ;
unsigned short arr_20 [10] [10] [10] ;
unsigned short arr_22 [10] [10] [10] ;
unsigned short arr_25 [10] [10] [10] [10] [10] ;
unsigned short arr_29 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_6 [25] [25] [25] ;
unsigned short arr_7 [25] ;
unsigned short arr_10 [20] ;
unsigned short arr_11 [20] ;
unsigned short arr_14 [21] [21] ;
unsigned short arr_15 [21] ;
unsigned short arr_30 [10] [10] [10] [10] [10] ;
unsigned short arr_31 [10] [10] [10] [10] ;
unsigned short arr_32 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)20114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)54622;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)6439;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)37827;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)29688;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)18668;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)46681;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)36854;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)62850;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)52634;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)650;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)40192;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)45423;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned short)22852;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)14320 : (unsigned short)50039;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34794 : (unsigned short)42961;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)9133 : (unsigned short)34235;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)57307 : (unsigned short)30439;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)34266 : (unsigned short)22530;
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
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
}
void test(unsigned short var_0, unsigned short var_1, unsigned short var_2, unsigned short var_3, unsigned short var_4, unsigned short var_5, unsigned short var_6, unsigned short var_7, unsigned short var_8, unsigned short var_9, unsigned short var_10, unsigned short var_11, unsigned short var_12, unsigned short var_13, unsigned short var_14, unsigned short var_15, unsigned short var_16, unsigned short var_17, unsigned short var_18, int zero, unsigned short arr_2 [25] [25] , unsigned short arr_3 [25] , unsigned short arr_4 [25] [25] , unsigned short arr_5 [25] [25] , unsigned short arr_9 [20] [20] , unsigned short arr_18 [10] [10] , unsigned short arr_20 [10] [10] [10] , unsigned short arr_22 [10] [10] [10] , unsigned short arr_25 [10] [10] [10] [10] [10] , unsigned short arr_29 [10] [10] [10] [10] [10] [10] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, zero, arr_2 , arr_3 , arr_4 , arr_5 , arr_9 , arr_18 , arr_20 , arr_22 , arr_25 , arr_29 );
    checksum();
    printf("%llu\n", seed);
}
