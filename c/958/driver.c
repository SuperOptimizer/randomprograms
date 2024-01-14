#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15087304355828376399ULL;
unsigned int var_1 = 755006844U;
unsigned int var_2 = 1416242896U;
unsigned long long int var_3 = 12370766237390441574ULL;
long long int var_6 = -4625695116808794751LL;
unsigned int var_8 = 199624732U;
unsigned short var_10 = (unsigned short)42741;
signed char var_11 = (signed char)14;
unsigned int var_13 = 3138751305U;
int var_14 = 477091250;
long long int var_16 = -4283584904403800498LL;
int zero = 0;
long long int var_17 = -4447716718964577655LL;
long long int var_18 = 4428704573765471373LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2588171596U;
long long int var_21 = -18163499752154463LL;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_0 [16] [16] ;
long long int arr_2 [16] ;
long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1101306842081834554ULL : 17307803742889669159ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3920053635594607321LL : -4730747964159905599LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -4281527245002958794LL : 8986458377988118172LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test(unsigned long long int var_0, unsigned int var_1, unsigned int var_2, unsigned long long int var_3, long long int var_6, unsigned int var_8, unsigned short var_10, signed char var_11, unsigned int var_13, int var_14, long long int var_16, int zero, unsigned long long int arr_0 [16] [16] , long long int arr_2 [16] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_6, var_8, var_10, var_11, var_13, var_14, var_16, zero, arr_0 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
