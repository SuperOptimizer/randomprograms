#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2660058934U;
signed char var_1 = (signed char)-122;
short var_2 = (short)12180;
long long int var_3 = -5512178938839925681LL;
unsigned int var_4 = 3277593136U;
unsigned int var_5 = 2578376654U;
short var_6 = (short)-20242;
unsigned short var_7 = (unsigned short)5221;
unsigned long long int var_8 = 2728637880272966234ULL;
unsigned long long int var_9 = 16257438467769434004ULL;
unsigned short var_10 = (unsigned short)39348;
unsigned int var_11 = 642393812U;
signed char var_13 = (signed char)-106;
int zero = 0;
unsigned int var_14 = 741375552U;
long long int var_15 = 3805978340130012166LL;
unsigned short var_16 = (unsigned short)36073;
unsigned int var_17 = 960445031U;
unsigned long long int var_18 = 7190539143030160952ULL;
unsigned int var_19 = 2969603656U;
int var_20 = -1445859373;
unsigned int var_21 = 136516322U;
unsigned int var_22 = 4191551500U;
unsigned int var_23 = 2421197554U;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 218048597U;
unsigned int var_26 = 1234485412U;
unsigned int var_27 = 781169422U;
signed char var_28 = (signed char)114;
long long int var_29 = -2432014167643422049LL;
unsigned int var_30 = 1591474242U;
_Bool var_31 = (_Bool)1;
long long int var_32 = 3690435825845511601LL;
unsigned short var_33 = (unsigned short)19848;
long long int var_34 = -3839103390463182982LL;
short var_35 = (short)24682;
unsigned int var_36 = 268210772U;
long long int var_37 = 2860360068215875186LL;
unsigned int var_38 = 4075846404U;
signed char var_39 = (signed char)51;
int var_40 = -904580290;
unsigned char arr_1 [11] ;
_Bool arr_5 [11] [11] ;
signed char arr_9 [11] [11] [11] ;
unsigned short arr_14 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_35 [25] [25] ;
unsigned char arr_37 [25] ;
unsigned int arr_39 [21] ;
unsigned long long int arr_40 [21] ;
unsigned int arr_42 [21] ;
long long int arr_43 [21] [21] ;
_Bool arr_46 [21] ;
_Bool arr_48 [21] ;
unsigned short arr_52 [21] [21] [21] ;
unsigned int arr_3 [11] ;
unsigned long long int arr_4 [11] ;
long long int arr_13 [11] [11] [11] [11] [11] ;
unsigned long long int arr_16 [11] [11] ;
unsigned short arr_17 [11] [11] ;
unsigned int arr_25 [11] [11] [11] [11] [11] ;
short arr_34 [11] [11] [11] [11] [11] ;
unsigned short arr_38 [25] ;
short arr_50 [21] [21] [21] ;
signed char arr_53 [21] [21] ;
unsigned int arr_60 [21] [21] [21] [21] [21] [21] [21] ;
unsigned int arr_69 [21] [21] [21] [21] [21] ;
unsigned short arr_70 [21] [21] [21] ;
unsigned int arr_73 [10] ;
unsigned int arr_74 [10] ;
short arr_75 [10] ;
signed char arr_76 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)50 : (signed char)-82;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)47387;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = 1376367855U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_39 [i_0] = 3474412213U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_40 [i_0] = 3806866689179412152ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 3584055733U : 3936084069U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_43 [i_0] [i_1] = -7523253367784234326LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_46 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)42755 : (unsigned short)39300;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2209471335U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 12259305392014117098ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3221649718016132125LL : -5427398365260956952LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 17903768892384420550ULL : 1025945457117771164ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)31374 : (unsigned short)60992;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2888723053U : 3912878136U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-17413 : (short)-19910;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41852 : (unsigned short)25463;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)25366 : (short)30931;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_53 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)66 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 3997655464U : 968831535U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 809966361U : 1704175883U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)386 : (unsigned short)23277;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_73 [i_0] = 1375584413U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_74 [i_0] = 2771196599U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_75 [i_0] = (short)30462;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_76 [i_0] [i_1] = (signed char)-46;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_50 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_70 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_73 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_75 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_76 [i_0] [i_1] );
}
void test(unsigned int var_0, signed char var_1, short var_2, long long int var_3, unsigned int var_4, unsigned int var_5, short var_6, unsigned short var_7, unsigned long long int var_8, unsigned long long int var_9, unsigned short var_10, unsigned int var_11, signed char var_13, int zero, unsigned char arr_1 [11] , _Bool arr_5 [11] [11] , signed char arr_9 [11] [11] [11] , unsigned short arr_14 [11] [11] [11] [11] [11] [11] , unsigned int arr_35 [25] [25] , unsigned char arr_37 [25] , unsigned int arr_39 [21] , unsigned long long int arr_40 [21] , unsigned int arr_42 [21] , long long int arr_43 [21] [21] , _Bool arr_46 [21] , _Bool arr_48 [21] , unsigned short arr_52 [21] [21] [21] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_13, zero, arr_1 , arr_5 , arr_9 , arr_14 , arr_35 , arr_37 , arr_39 , arr_40 , arr_42 , arr_43 , arr_46 , arr_48 , arr_52 );
    checksum();
    printf("%llu\n", seed);
}
