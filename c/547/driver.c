#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1682;
unsigned long long int var_2 = 4543662841544908596ULL;
short var_4 = (short)-3098;
unsigned short var_5 = (unsigned short)22401;
unsigned int var_6 = 3951595745U;
unsigned char var_7 = (unsigned char)59;
unsigned char var_8 = (unsigned char)142;
int var_9 = -845407714;
short var_10 = (short)11586;
short var_13 = (short)-20398;
unsigned int var_14 = 4109159241U;
unsigned char var_16 = (unsigned char)89;
int var_18 = -1952274249;
int zero = 0;
int var_19 = 1049945216;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)10399;
unsigned char var_22 = (unsigned char)106;
unsigned short var_23 = (unsigned short)11728;
unsigned long long int arr_1 [20] ;
unsigned short arr_2 [20] [20] ;
unsigned short arr_3 [20] ;
unsigned short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 13264005964499941279ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)60496;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50111 : (unsigned short)18593;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14978 : (unsigned short)46847;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test(short var_0, unsigned long long int var_2, short var_4, unsigned short var_5, unsigned int var_6, unsigned char var_7, unsigned char var_8, int var_9, short var_10, short var_13, unsigned int var_14, unsigned char var_16, int var_18, int zero, unsigned long long int arr_1 [20] , unsigned short arr_2 [20] [20] , unsigned short arr_3 [20] );

int main() {
    init();
    test(var_0, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_13, var_14, var_16, var_18, zero, arr_1 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
