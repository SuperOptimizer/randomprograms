#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7883049566028617761LL;
long long int var_1 = -2793944466689610194LL;
long long int var_2 = -8670348919601017722LL;
long long int var_3 = 9194027008442264171LL;
long long int var_4 = 2832673183630788104LL;
unsigned short var_5 = (unsigned short)54907;
unsigned short var_6 = (unsigned short)5732;
unsigned int var_7 = 2426090096U;
unsigned int var_8 = 2450482626U;
long long int var_9 = 3528120832760828588LL;
long long int var_10 = -1012473640372744537LL;
unsigned short var_11 = (unsigned short)14360;
long long int var_12 = 8562223631833129480LL;
unsigned short var_13 = (unsigned short)64672;
unsigned short var_14 = (unsigned short)37471;
unsigned short var_15 = (unsigned short)17081;
int zero = 0;
long long int var_16 = -5037601840316026816LL;
long long int var_17 = 8185728641751465866LL;
unsigned int var_18 = 2646499369U;
unsigned short var_19 = (unsigned short)28179;
unsigned short var_20 = (unsigned short)2605;
unsigned short var_21 = (unsigned short)15407;
long long int var_22 = -6170774868492153181LL;
unsigned short var_23 = (unsigned short)65485;
unsigned short var_24 = (unsigned short)585;
long long int var_25 = 7313867269382510765LL;
unsigned short var_26 = (unsigned short)45264;
unsigned int var_27 = 441292100U;
unsigned short var_28 = (unsigned short)11784;
long long int var_29 = -3347345996443397783LL;
unsigned short var_30 = (unsigned short)20813;
unsigned short var_31 = (unsigned short)51238;
long long int var_32 = -7960699517875391868LL;
unsigned short var_33 = (unsigned short)29371;
unsigned short var_34 = (unsigned short)35388;
unsigned short arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
unsigned short arr_3 [23] ;
unsigned short arr_4 [23] [23] ;
unsigned short arr_5 [23] ;
unsigned short arr_6 [23] ;
unsigned int arr_7 [23] [23] [23] ;
long long int arr_9 [23] ;
unsigned short arr_10 [23] ;
unsigned short arr_12 [23] [23] [23] [23] ;
long long int arr_13 [23] [23] [23] ;
long long int arr_14 [23] [23] [23] ;
long long int arr_15 [23] [23] [23] [23] ;
long long int arr_16 [23] [23] [23] [23] ;
unsigned short arr_18 [23] [23] [23] ;
long long int arr_19 [23] ;
unsigned int arr_20 [23] [23] [23] ;
long long int arr_21 [23] [23] [23] ;
long long int arr_22 [23] [23] [23] [23] ;
unsigned int arr_23 [23] [23] [23] ;
unsigned int arr_25 [23] [23] [23] [23] ;
long long int arr_27 [23] [23] [23] [23] [23] ;
unsigned short arr_28 [23] [23] [23] [23] [23] ;
unsigned short arr_29 [23] [23] ;
long long int arr_32 [23] [23] [23] [23] ;
unsigned short arr_33 [23] [23] [23] [23] ;
unsigned short arr_34 [23] [23] ;
long long int arr_36 [23] [23] [23] [23] [23] ;
unsigned short arr_39 [23] [23] [23] ;
long long int arr_42 [23] [23] [23] [23] [23] ;
unsigned short arr_2 [24] [24] ;
unsigned int arr_8 [23] [23] [23] ;
long long int arr_17 [23] ;
long long int arr_26 [23] [23] [23] [23] ;
unsigned short arr_30 [23] [23] [23] [23] ;
unsigned short arr_31 [23] [23] [23] [23] [23] [23] ;
long long int arr_37 [23] [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)10670;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42521;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)38319;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)60290;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)40925;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)47686;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3677141918U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 6117994760217356531LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned short)39544;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)25011;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -6435055799585813065LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -8058180677746323154LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -5861355203511438922LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 3333344106437681512LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)36115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 7593241902015470291LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 3819032459U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -1068722814139389433LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 4282343465260359128LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 4010185909U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1801274546U : 2105988575U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 2797768971717321966LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)623;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)64050;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = -2860963436918977969LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33660;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned short)17571;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 7930848577436058629LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (unsigned short)25313;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = -8637718565735138608LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)36134;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1335951291U : 3918109736U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = -1328699372684430773LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -6419354659634139256LL : 2248262882103720756LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (unsigned short)45056;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)49215;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2870680480523400516LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test(long long int var_0, long long int var_1, long long int var_2, long long int var_3, long long int var_4, unsigned short var_5, unsigned short var_6, unsigned int var_7, unsigned int var_8, long long int var_9, long long int var_10, unsigned short var_11, long long int var_12, unsigned short var_13, unsigned short var_14, unsigned short var_15, int zero, unsigned short arr_0 [24] , unsigned short arr_1 [24] [24] , unsigned short arr_3 [23] , unsigned short arr_4 [23] [23] , unsigned short arr_5 [23] , unsigned short arr_6 [23] , unsigned int arr_7 [23] [23] [23] , long long int arr_9 [23] , unsigned short arr_10 [23] , unsigned short arr_12 [23] [23] [23] [23] , long long int arr_13 [23] [23] [23] , long long int arr_14 [23] [23] [23] , long long int arr_15 [23] [23] [23] [23] , long long int arr_16 [23] [23] [23] [23] , unsigned short arr_18 [23] [23] [23] , long long int arr_19 [23] , unsigned int arr_20 [23] [23] [23] , long long int arr_21 [23] [23] [23] , long long int arr_22 [23] [23] [23] [23] , unsigned int arr_23 [23] [23] [23] , unsigned int arr_25 [23] [23] [23] [23] , long long int arr_27 [23] [23] [23] [23] [23] , unsigned short arr_28 [23] [23] [23] [23] [23] , unsigned short arr_29 [23] [23] , long long int arr_32 [23] [23] [23] [23] , unsigned short arr_33 [23] [23] [23] [23] , unsigned short arr_34 [23] [23] , long long int arr_36 [23] [23] [23] [23] [23] , unsigned short arr_39 [23] [23] [23] , long long int arr_42 [23] [23] [23] [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_1 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_9 , arr_10 , arr_12 , arr_13 , arr_14 , arr_15 , arr_16 , arr_18 , arr_19 , arr_20 , arr_21 , arr_22 , arr_23 , arr_25 , arr_27 , arr_28 , arr_29 , arr_32 , arr_33 , arr_34 , arr_36 , arr_39 , arr_42 );
    checksum();
    printf("%llu\n", seed);
}
