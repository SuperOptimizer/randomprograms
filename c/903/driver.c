#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
int var_1 = 589695440;
long long int var_2 = 1889283282437260251LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 37268272U;
unsigned char var_5 = (unsigned char)134;
int var_6 = -485952420;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)164;
long long int var_10 = 3481701294045190327LL;
unsigned char var_11 = (unsigned char)191;
unsigned short var_12 = (unsigned short)15325;
unsigned long long int var_13 = 16865865338821827701ULL;
short var_14 = (short)-23698;
int var_15 = -6312130;
unsigned long long int var_16 = 4109411322274668040ULL;
long long int var_17 = -3986016324526715535LL;
int zero = 0;
int var_18 = 1878417856;
short var_19 = (short)29616;
long long int var_20 = 4601796001432962717LL;
unsigned long long int var_21 = 61391873879239029ULL;
unsigned int var_22 = 2114238759U;
long long int var_23 = -5691149866651124847LL;
long long int var_24 = -8771858046259933949LL;
signed char var_25 = (signed char)10;
signed char var_26 = (signed char)80;
unsigned int var_27 = 2743073763U;
unsigned long long int var_28 = 850894371230811597ULL;
unsigned short var_29 = (unsigned short)13599;
short var_30 = (short)-25363;
int var_31 = 1917448707;
signed char var_32 = (signed char)-11;
short var_33 = (short)10045;
unsigned char var_34 = (unsigned char)192;
unsigned char var_35 = (unsigned char)27;
unsigned char var_36 = (unsigned char)25;
signed char var_37 = (signed char)-64;
short var_38 = (short)22179;
long long int var_39 = -509332779051591827LL;
unsigned int var_40 = 3185816616U;
unsigned short var_41 = (unsigned short)15237;
short var_42 = (short)-10537;
_Bool arr_1 [14] [14] ;
signed char arr_2 [14] ;
long long int arr_3 [14] [14] ;
long long int arr_4 [14] [14] [14] ;
_Bool arr_5 [14] [14] ;
unsigned long long int arr_6 [14] [14] [14] ;
signed char arr_7 [14] [14] [14] [14] ;
long long int arr_13 [15] [15] ;
unsigned char arr_14 [15] ;
unsigned int arr_16 [15] [15] ;
signed char arr_17 [15] ;
signed char arr_18 [15] [15] [15] ;
signed char arr_23 [15] ;
signed char arr_24 [15] [15] [15] ;
short arr_25 [15] [15] ;
unsigned long long int arr_26 [15] ;
unsigned short arr_29 [15] [15] [15] ;
long long int arr_32 [15] ;
int arr_33 [15] [15] [15] ;
_Bool arr_34 [15] [15] ;
unsigned long long int arr_42 [15] ;
unsigned short arr_11 [14] [14] [14] ;
long long int arr_12 [14] [14] [14] [14] ;
_Bool arr_15 [15] [15] ;
int arr_19 [15] ;
long long int arr_20 [15] ;
unsigned short arr_21 [15] [15] ;
signed char arr_22 [15] [15] ;
unsigned short arr_28 [15] [15] ;
_Bool arr_45 [15] ;
unsigned long long int arr_46 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -808114076271587545LL : -4325386595536024876LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1662462385123996689LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10689893215204854735ULL : 15485287102324002242ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)10 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = -7443577015844898956LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)106 : (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 2838116113U : 597861435U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-74 : (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)123 : (signed char)-117;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)22177 : (short)3054;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = 12838166063594328882ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned short)14169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = -6890517673929188906LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -1052013903;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_42 [i_0] = 18178149869581424166ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)26389 : (unsigned short)7084;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -7982272231139411000LL : 4976967192514457324LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 471417045 : 675408452;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -7282122567934885823LL : 5206102503948492596LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)55913 : (unsigned short)23158;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)118 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)27561 : (unsigned short)3841;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? 92286197476103070ULL : 3505091651663400151ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
}
void test(signed char var_0, int var_1, long long int var_2, _Bool var_3, unsigned int var_4, unsigned char var_5, int var_6, _Bool var_7, _Bool var_8, unsigned char var_9, long long int var_10, unsigned char var_11, unsigned short var_12, unsigned long long int var_13, short var_14, int var_15, unsigned long long int var_16, long long int var_17, int zero, _Bool arr_1 [14] [14] , signed char arr_2 [14] , long long int arr_3 [14] [14] , long long int arr_4 [14] [14] [14] , _Bool arr_5 [14] [14] , unsigned long long int arr_6 [14] [14] [14] , signed char arr_7 [14] [14] [14] [14] , long long int arr_13 [15] [15] , unsigned char arr_14 [15] , unsigned int arr_16 [15] [15] , signed char arr_17 [15] , signed char arr_18 [15] [15] [15] , signed char arr_23 [15] , signed char arr_24 [15] [15] [15] , short arr_25 [15] [15] , unsigned long long int arr_26 [15] , unsigned short arr_29 [15] [15] [15] , long long int arr_32 [15] , int arr_33 [15] [15] [15] , _Bool arr_34 [15] [15] , unsigned long long int arr_42 [15] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_13 , arr_14 , arr_16 , arr_17 , arr_18 , arr_23 , arr_24 , arr_25 , arr_26 , arr_29 , arr_32 , arr_33 , arr_34 , arr_42 );
    checksum();
    printf("%llu\n", seed);
}
