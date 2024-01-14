#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 840769569959520922ULL;
unsigned short var_1 = (unsigned short)36537;
unsigned short var_2 = (unsigned short)20265;
int var_3 = -268403814;
short var_4 = (short)-5488;
unsigned int var_5 = 3239989619U;
short var_6 = (short)-15750;
signed char var_7 = (signed char)122;
int var_8 = 762757667;
short var_9 = (short)-4949;
unsigned char var_10 = (unsigned char)169;
unsigned char var_11 = (unsigned char)53;
short var_12 = (short)-19238;
unsigned short var_13 = (unsigned short)34254;
unsigned long long int var_15 = 4124949856115398754ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)5619;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-17028;
unsigned int var_21 = 1812021736U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)26633;
long long int var_24 = -8209944466503990582LL;
unsigned int var_25 = 1326607577U;
unsigned short var_26 = (unsigned short)47121;
int var_27 = 1653176214;
int var_28 = -819182502;
signed char var_29 = (signed char)11;
short var_30 = (short)-5109;
unsigned short var_31 = (unsigned short)17956;
unsigned long long int var_32 = 10814676449297849533ULL;
unsigned char var_33 = (unsigned char)51;
unsigned long long int var_34 = 6000010624296532900ULL;
unsigned char var_35 = (unsigned char)203;
short var_36 = (short)1251;
unsigned short var_37 = (unsigned short)51501;
_Bool var_38 = (_Bool)1;
_Bool var_39 = (_Bool)0;
unsigned char var_40 = (unsigned char)180;
unsigned char var_41 = (unsigned char)120;
int var_42 = 1258227102;
unsigned char var_43 = (unsigned char)126;
short var_44 = (short)-22547;
_Bool var_45 = (_Bool)1;
unsigned short var_46 = (unsigned short)63326;
unsigned short var_47 = (unsigned short)16529;
short var_48 = (short)25538;
unsigned char var_49 = (unsigned char)233;
int var_50 = -1966437569;
signed char var_51 = (signed char)16;
signed char var_52 = (signed char)19;
unsigned char var_53 = (unsigned char)182;
_Bool var_54 = (_Bool)0;
unsigned short var_55 = (unsigned short)38899;
_Bool var_56 = (_Bool)0;
short var_57 = (short)-19875;
_Bool var_58 = (_Bool)1;
short var_59 = (short)5330;
unsigned int var_60 = 420544530U;
unsigned short var_61 = (unsigned short)61572;
short var_62 = (short)-29638;
unsigned short var_63 = (unsigned short)20262;
int var_64 = -2052593540;
_Bool var_65 = (_Bool)0;
_Bool var_66 = (_Bool)0;
_Bool var_67 = (_Bool)0;
_Bool var_68 = (_Bool)0;
unsigned short var_69 = (unsigned short)57813;
long long int var_70 = 298257697198219677LL;
unsigned char arr_0 [24] ;
signed char arr_1 [24] [24] ;
int arr_2 [24] [24] [24] ;
int arr_3 [24] [24] [24] ;
unsigned char arr_4 [24] ;
unsigned short arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] [24] [24] [24] ;
int arr_7 [24] [24] [24] ;
_Bool arr_8 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_9 [24] [24] [24] [24] ;
int arr_10 [24] [24] [24] [24] ;
int arr_11 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_12 [24] [24] [24] [24] [24] [24] ;
short arr_13 [24] [24] [24] [24] [24] ;
unsigned short arr_14 [24] [24] [24] [24] ;
short arr_15 [24] [24] ;
int arr_17 [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_20 [24] [24] [24] ;
int arr_21 [24] [24] [24] ;
_Bool arr_22 [24] [24] [24] [24] ;
unsigned short arr_26 [25] [25] ;
unsigned short arr_27 [25] ;
unsigned long long int arr_28 [25] ;
_Bool arr_29 [25] ;
unsigned long long int arr_30 [25] ;
int arr_31 [25] [25] ;
unsigned char arr_34 [25] [25] [25] [25] ;
_Bool arr_37 [25] [25] [25] [25] ;
_Bool arr_38 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_39 [25] [25] [25] [25] ;
long long int arr_40 [25] [25] ;
unsigned char arr_41 [25] [25] [25] [25] [25] [25] [25] ;
unsigned short arr_42 [25] [25] [25] ;
_Bool arr_45 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -894828222;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1225198701;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)62752;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)49098;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -688683829 : -156317743;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)59 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -1094151575;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 850826604 : 1498111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1720772054U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-6744;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24000;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-7254 : (short)28541;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1747241268;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2723031602770043678ULL : 610717794070856002ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1842323638 : -1720034655;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned short)52982;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (unsigned short)33678;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 146085824295763414ULL : 15223423351213058690ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = 15619610257657778505ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? 1073770224 : -830148570;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 2593887797U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? -6051577260432409974LL : 7551661560790590198LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned char)92 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned short)60588;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
}
void test(unsigned long long int var_0, unsigned short var_1, unsigned short var_2, int var_3, short var_4, unsigned int var_5, short var_6, signed char var_7, int var_8, short var_9, unsigned char var_10, unsigned char var_11, short var_12, unsigned short var_13, unsigned long long int var_15, _Bool var_16, int zero, unsigned char arr_0 [24] , signed char arr_1 [24] [24] , int arr_2 [24] [24] [24] , int arr_3 [24] [24] [24] , unsigned char arr_4 [24] , unsigned short arr_5 [24] [24] [24] , unsigned short arr_6 [24] [24] [24] [24] , int arr_7 [24] [24] [24] , _Bool arr_8 [24] [24] [24] [24] [24] [24] , unsigned char arr_9 [24] [24] [24] [24] , int arr_10 [24] [24] [24] [24] , int arr_11 [24] [24] [24] [24] [24] [24] , unsigned int arr_12 [24] [24] [24] [24] [24] [24] , short arr_13 [24] [24] [24] [24] [24] , unsigned short arr_14 [24] [24] [24] [24] , short arr_15 [24] [24] , int arr_17 [24] [24] [24] [24] [24] [24] , unsigned long long int arr_20 [24] [24] [24] , int arr_21 [24] [24] [24] , _Bool arr_22 [24] [24] [24] [24] , unsigned short arr_26 [25] [25] , unsigned short arr_27 [25] , unsigned long long int arr_28 [25] , _Bool arr_29 [25] , unsigned long long int arr_30 [25] , int arr_31 [25] [25] , unsigned char arr_34 [25] [25] [25] [25] , _Bool arr_37 [25] [25] [25] [25] , _Bool arr_38 [25] [25] [25] [25] [25] [25] , unsigned int arr_39 [25] [25] [25] [25] , long long int arr_40 [25] [25] , unsigned char arr_41 [25] [25] [25] [25] [25] [25] [25] , unsigned short arr_42 [25] [25] [25] , _Bool arr_45 [25] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_16, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_17 , arr_20 , arr_21 , arr_22 , arr_26 , arr_27 , arr_28 , arr_29 , arr_30 , arr_31 , arr_34 , arr_37 , arr_38 , arr_39 , arr_40 , arr_41 , arr_42 , arr_45 );
    checksum();
    printf("%llu\n", seed);
}
