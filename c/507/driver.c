#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1869987157U;
int var_1 = 1970495984;
unsigned char var_2 = (unsigned char)67;
long long int var_4 = -4138632877933763518LL;
unsigned long long int var_5 = 4668792488387768426ULL;
unsigned char var_6 = (unsigned char)149;
unsigned short var_7 = (unsigned short)41688;
unsigned short var_8 = (unsigned short)23395;
unsigned char var_9 = (unsigned char)152;
short var_11 = (short)-22399;
int var_12 = -176663980;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)77;
int var_15 = -149775362;
long long int var_16 = 3116135262054655701LL;
unsigned char var_17 = (unsigned char)219;
unsigned int var_18 = 306331440U;
unsigned long long int var_19 = 342343021253018424ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)5150;
unsigned short var_21 = (unsigned short)5882;
unsigned short var_22 = (unsigned short)4102;
unsigned int var_23 = 346876010U;
unsigned char var_24 = (unsigned char)119;
unsigned long long int var_25 = 731488752645540271ULL;
short var_26 = (short)-9929;
unsigned int var_27 = 1130377437U;
short var_28 = (short)-8526;
unsigned short var_29 = (unsigned short)48718;
unsigned int var_30 = 58209406U;
unsigned int var_31 = 2031998011U;
signed char var_32 = (signed char)-110;
unsigned short var_33 = (unsigned short)33272;
unsigned short var_34 = (unsigned short)14507;
signed char var_35 = (signed char)-60;
unsigned short var_36 = (unsigned short)60486;
short var_37 = (short)15382;
unsigned char var_38 = (unsigned char)7;
unsigned char var_39 = (unsigned char)169;
unsigned long long int var_40 = 2855606070783262413ULL;
int var_41 = -2072327017;
short var_42 = (short)29696;
unsigned int var_43 = 1214978158U;
short var_44 = (short)-9576;
unsigned short var_45 = (unsigned short)439;
unsigned short var_46 = (unsigned short)46494;
int arr_0 [16] ;
short arr_1 [16] ;
short arr_2 [16] [16] [16] ;
int arr_3 [16] [16] ;
long long int arr_5 [16] ;
unsigned char arr_7 [16] [16] [16] [16] ;
short arr_9 [16] [16] [16] [16] ;
unsigned int arr_10 [10] [10] ;
unsigned char arr_12 [10] [10] ;
unsigned short arr_13 [10] [10] [10] ;
unsigned int arr_16 [10] [10] ;
unsigned long long int arr_19 [10] [10] [10] ;
short arr_27 [21] [21] ;
int arr_28 [21] [21] [21] ;
unsigned short arr_32 [21] [21] [21] ;
unsigned char arr_34 [21] ;
signed char arr_37 [21] [21] [21] ;
unsigned int arr_38 [21] [21] [21] [21] [21] ;
short arr_44 [21] [21] [21] [21] ;
signed char arr_47 [21] ;
unsigned long long int arr_54 [21] ;
unsigned short arr_24 [10] [10] [10] ;
unsigned int arr_39 [21] [21] ;
unsigned int arr_40 [21] [21] [21] [21] [21] ;
unsigned char arr_56 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1619388132;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-31358;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-3454;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1057584583;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -89457319386178063LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)31292;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 3424519954U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)38339;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 1716106344U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 12537155015715426698ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = (short)28542;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 552910686;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned short)46383;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)66 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 376328348U : 3025548137U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (short)18317;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_47 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_54 [i_0] = 11540130150789983101ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)29898;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_39 [i_0] [i_1] = (i_1 % 2 == 0) ? 2891901698U : 1299016517U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 2868177850U : 3861844701U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (unsigned char)213;
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
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned int var_0, int var_1, unsigned char var_2, long long int var_4, unsigned long long int var_5, unsigned char var_6, unsigned short var_7, unsigned short var_8, unsigned char var_9, short var_11, int var_12, _Bool var_13, unsigned char var_14, int var_15, long long int var_16, unsigned char var_17, unsigned int var_18, unsigned long long int var_19, int zero, int arr_0 [16] , short arr_1 [16] , short arr_2 [16] [16] [16] , int arr_3 [16] [16] , long long int arr_5 [16] , unsigned char arr_7 [16] [16] [16] [16] , short arr_9 [16] [16] [16] [16] , unsigned int arr_10 [10] [10] , unsigned char arr_12 [10] [10] , unsigned short arr_13 [10] [10] [10] , unsigned int arr_16 [10] [10] , unsigned long long int arr_19 [10] [10] [10] , short arr_27 [21] [21] , int arr_28 [21] [21] [21] , unsigned short arr_32 [21] [21] [21] , unsigned char arr_34 [21] , signed char arr_37 [21] [21] [21] , unsigned int arr_38 [21] [21] [21] [21] [21] , short arr_44 [21] [21] [21] [21] , signed char arr_47 [21] , unsigned long long int arr_54 [21] );

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_14, var_15, var_16, var_17, var_18, var_19, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_5 , arr_7 , arr_9 , arr_10 , arr_12 , arr_13 , arr_16 , arr_19 , arr_27 , arr_28 , arr_32 , arr_34 , arr_37 , arr_38 , arr_44 , arr_47 , arr_54 );
    checksum();
    printf("%llu\n", seed);
}
