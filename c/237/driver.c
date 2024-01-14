#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31016;
int var_7 = -1146672676;
unsigned char var_12 = (unsigned char)169;
int var_13 = -550058549;
unsigned short var_15 = (unsigned short)13952;
int zero = 0;
int var_18 = -1267173672;
unsigned long long int var_19 = 11243527993983832037ULL;
int var_20 = 981196721;
int var_21 = -247319180;
short var_22 = (short)-16710;
_Bool arr_1 [14] ;
long long int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -2559243263438718355LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(short var_2, int var_7, unsigned char var_12, int var_13, unsigned short var_15, int zero, _Bool arr_1 [14] , long long int arr_2 [14] [14] );

int main() {
    init();
    test(var_2, var_7, var_12, var_13, var_15, zero, arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
