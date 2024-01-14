#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6628634612270799158LL;
signed char var_1 = (signed char)19;
unsigned char var_2 = (unsigned char)128;
unsigned short var_4 = (unsigned short)57570;
unsigned short var_5 = (unsigned short)38242;
unsigned short var_8 = (unsigned short)52040;
short var_9 = (short)18790;
int zero = 0;
unsigned int var_10 = 2770820703U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 1189508424285789440ULL;
unsigned int var_13 = 45952979U;
long long int arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -5034798561770524936LL : 2006326473549488630LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test(long long int var_0, signed char var_1, unsigned char var_2, unsigned short var_4, unsigned short var_5, unsigned short var_8, short var_9, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_8, var_9, zero);
    checksum();
    printf("%llu\n", seed);
}
