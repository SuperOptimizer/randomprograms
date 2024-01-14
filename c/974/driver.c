#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28321;
unsigned char var_3 = (unsigned char)223;
signed char var_5 = (signed char)112;
int var_6 = 1160529702;
unsigned char var_7 = (unsigned char)108;
int var_12 = 838899301;
int var_14 = -790003;
int var_15 = 543670243;
int zero = 0;
short var_16 = (short)-3710;
unsigned long long int var_17 = 18347375111420341628ULL;
unsigned char var_18 = (unsigned char)125;
long long int var_19 = -2368432148206802179LL;
short var_20 = (short)30822;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)53;
unsigned char var_23 = (unsigned char)57;
long long int var_24 = -9144401973286421794LL;
signed char var_25 = (signed char)-31;
signed char var_26 = (signed char)24;
short var_27 = (short)-21528;
unsigned short var_28 = (unsigned short)5621;
unsigned long long int var_29 = 8539442875237634921ULL;
int var_30 = 549091398;
short var_31 = (short)18030;
unsigned char var_32 = (unsigned char)188;
signed char var_33 = (signed char)-37;
long long int var_34 = 4407728258128035608LL;
int arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
short arr_2 [11] [11] [11] ;
unsigned long long int arr_3 [11] ;
short arr_4 [11] ;
short arr_5 [11] [11] [11] [11] ;
unsigned long long int arr_6 [11] [11] ;
signed char arr_10 [11] ;
long long int arr_11 [11] ;
unsigned char arr_12 [11] ;
signed char arr_13 [11] [11] ;
unsigned long long int arr_16 [11] [11] [11] ;
signed char arr_17 [11] [11] [11] ;
_Bool arr_20 [11] [11] [11] [11] ;
unsigned char arr_21 [11] ;
signed char arr_22 [11] [11] [11] [11] [11] ;
short arr_23 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_24 [11] [11] [11] [11] [11] ;
_Bool arr_25 [11] [11] [11] [11] [11] [11] ;
int arr_30 [11] ;
short arr_31 [11] ;
signed char arr_33 [11] [11] [11] ;
short arr_34 [10] ;
long long int arr_35 [10] ;
unsigned long long int arr_36 [10] ;
unsigned long long int arr_43 [16] [16] ;
long long int arr_45 [16] [16] ;
signed char arr_14 [11] [11] [11] ;
short arr_19 [11] [11] [11] [11] [11] ;
long long int arr_26 [11] [11] [11] [11] [11] ;
int arr_27 [11] ;
unsigned long long int arr_28 [11] ;
unsigned char arr_29 [11] [11] ;
unsigned short arr_40 [10] ;
unsigned short arr_41 [10] ;
unsigned long long int arr_46 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1633682071;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)2242;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 17612734633644966030ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)22796;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-19610;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 12030434431780853454ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 7439506360966223268LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 8804067585492002183ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)-25870 : (short)29439;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)21676 : (unsigned short)53038;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_30 [i_0] = 1740301235;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_31 [i_0] = (short)-3878;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_34 [i_0] = (short)25841;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = 8788566781570397237LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = 14870763696836606652ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_43 [i_0] [i_1] = 7668122405605716716ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_45 [i_0] [i_1] = 2523220648025160579LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)96 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)18023 : (short)-10494;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3142976033420537427LL : 1731131823406440165LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -1659103207 : 1934407064;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 18329616337371503604ULL : 1875868556125449522ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_40 [i_0] = (unsigned short)27393;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = (unsigned short)65092;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_46 [i_0] = 152642426233101527ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test(short var_1, unsigned char var_3, signed char var_5, int var_6, unsigned char var_7, int var_12, int var_14, int var_15, int zero, int arr_0 [11] [11] , unsigned char arr_1 [11] , short arr_2 [11] [11] [11] , unsigned long long int arr_3 [11] , short arr_4 [11] , short arr_5 [11] [11] [11] [11] , unsigned long long int arr_6 [11] [11] , signed char arr_10 [11] , long long int arr_11 [11] , unsigned char arr_12 [11] , signed char arr_13 [11] [11] , unsigned long long int arr_16 [11] [11] [11] , signed char arr_17 [11] [11] [11] , _Bool arr_20 [11] [11] [11] [11] , unsigned char arr_21 [11] , signed char arr_22 [11] [11] [11] [11] [11] , short arr_23 [11] [11] [11] [11] [11] [11] , unsigned short arr_24 [11] [11] [11] [11] [11] , _Bool arr_25 [11] [11] [11] [11] [11] [11] , int arr_30 [11] , short arr_31 [11] , signed char arr_33 [11] [11] [11] , short arr_34 [10] , long long int arr_35 [10] , unsigned long long int arr_36 [10] , unsigned long long int arr_43 [16] [16] , long long int arr_45 [16] [16] );

int main() {
    init();
    test(var_1, var_3, var_5, var_6, var_7, var_12, var_14, var_15, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_10 , arr_11 , arr_12 , arr_13 , arr_16 , arr_17 , arr_20 , arr_21 , arr_22 , arr_23 , arr_24 , arr_25 , arr_30 , arr_31 , arr_33 , arr_34 , arr_35 , arr_36 , arr_43 , arr_45 );
    checksum();
    printf("%llu\n", seed);
}
