/*
yarpgen version 2.0 (build 9a95bd2 on 2024:01:14)
Seed: 1081312574
Invocation: ./yarpgen --std=c -o out/785
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(signed char var_1, signed char var_3, signed char var_5, signed char var_8, signed char var_9, signed char var_12, int zero) {
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-17)) - (((/* implicit */int) (signed char)93)))) * (((/* implicit */int) ((signed char) (signed char)60)))))) ? (((/* implicit */int) var_12)) : (max((((/* implicit */int) var_5)), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_12))))))));
    if (((/* implicit */_Bool) var_3))
    {
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)-126)))));
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)-1), ((signed char)-85)))) + (((/* implicit */int) var_1)))))));
    }

    var_16 = ((/* implicit */signed char) min((((((/* implicit */int) var_8)) | (((/* implicit */int) min((var_8), (var_5)))))), (((/* implicit */int) var_12))));
}
