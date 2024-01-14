#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2125989047828954843ULL;
unsigned long long int var_1 = 16442598301876231572ULL;
unsigned long long int var_2 = 8539624327371784046ULL;
unsigned long long int var_3 = 7884787467144111373ULL;
unsigned long long int var_4 = 8540657683126816415ULL;
unsigned long long int var_5 = 12890724101299509551ULL;
unsigned long long int var_6 = 495459347365733025ULL;
unsigned long long int var_7 = 827088269510491055ULL;
unsigned long long int var_8 = 8884063771575380905ULL;
unsigned long long int var_9 = 5736782981024903767ULL;
unsigned long long int var_10 = 5601033044600386549ULL;
int zero = 0;
unsigned long long int var_11 = 9518709368342621291ULL;
unsigned long long int var_12 = 1370038658336614077ULL;
unsigned long long int var_13 = 13442178861342750096ULL;
unsigned long long int var_14 = 10162102754693580488ULL;
unsigned long long int var_15 = 1424907428943477531ULL;
unsigned long long int var_16 = 9013523972987002725ULL;
unsigned long long int var_17 = 14708170562854372097ULL;
unsigned long long int var_18 = 1901449378298126439ULL;
unsigned long long int var_19 = 10942311341501567478ULL;
unsigned long long int var_20 = 13480410989672961258ULL;
unsigned long long int var_21 = 6338573566935927493ULL;
unsigned long long int var_22 = 8489063408789574064ULL;
unsigned long long int var_23 = 12901872498269875001ULL;
unsigned long long int var_24 = 2437158970815854383ULL;
unsigned long long int var_25 = 9480126822375071386ULL;
unsigned long long int var_26 = 16548761800081306367ULL;
unsigned long long int var_27 = 926812718293844180ULL;
unsigned long long int var_28 = 11704046363336525579ULL;
unsigned long long int var_29 = 6452548205580464817ULL;
unsigned long long int var_30 = 15782450986831890139ULL;
unsigned long long int var_31 = 11189384405180177541ULL;
unsigned long long int var_32 = 5691209294617538394ULL;
unsigned long long int var_33 = 3330049458894748549ULL;
unsigned long long int var_34 = 12501127300445342291ULL;
unsigned long long int var_35 = 3427551514944299545ULL;
unsigned long long int var_36 = 13772876729520656083ULL;
unsigned long long int var_37 = 10757474551590905557ULL;
unsigned long long int var_38 = 7452474815968448042ULL;
unsigned long long int var_39 = 6000519084099465989ULL;
unsigned long long int var_40 = 18307043005066708187ULL;
unsigned long long int var_41 = 843159247897944845ULL;
unsigned long long int var_42 = 11114163101785692224ULL;
unsigned long long int var_43 = 14537423687121466061ULL;
unsigned long long int var_44 = 1168603231838262943ULL;
unsigned long long int var_45 = 15724049976942488727ULL;
unsigned long long int var_46 = 3060307952891171154ULL;
unsigned long long int var_47 = 12113906748933150321ULL;
unsigned long long int var_48 = 18204436825245973157ULL;
unsigned long long int var_49 = 14445340443716130224ULL;
unsigned long long int var_50 = 2411169958067028161ULL;
unsigned long long int var_51 = 5330067642854791040ULL;
unsigned long long int var_52 = 5402211072987614082ULL;
unsigned long long int var_53 = 2943000285615048998ULL;
unsigned long long int var_54 = 7294391760252981550ULL;
unsigned long long int var_55 = 6169855427928990091ULL;
unsigned long long int var_56 = 13756298186613080419ULL;
unsigned long long int var_57 = 16350641920893012969ULL;
unsigned long long int var_58 = 12201531179766174933ULL;
unsigned long long int var_59 = 6100583164040610589ULL;
unsigned long long int var_60 = 1791658144680438962ULL;
unsigned long long int var_61 = 287231262426249646ULL;
unsigned long long int var_62 = 15870771680545461040ULL;
unsigned long long int var_63 = 16211325134144441751ULL;
unsigned long long int var_64 = 9973097989431795065ULL;
unsigned long long int var_65 = 11963169569723363911ULL;
unsigned long long int var_66 = 1416760910332463447ULL;
unsigned long long int var_67 = 8135303804142468442ULL;
unsigned long long int var_68 = 10775304787810458821ULL;
unsigned long long int var_69 = 8398766471039785030ULL;
unsigned long long int var_70 = 6589114721102272147ULL;
unsigned long long int var_71 = 13329138428363451770ULL;
unsigned long long int var_72 = 7028499866861550348ULL;
unsigned long long int var_73 = 9454199366654825215ULL;
unsigned long long int var_74 = 11946851589783915408ULL;
unsigned long long int var_75 = 16093017881513697753ULL;
unsigned long long int var_76 = 1579439223896707823ULL;
unsigned long long int var_77 = 10801620308555584461ULL;
unsigned long long int var_78 = 16347210702275798280ULL;
unsigned long long int var_79 = 13993919204496273819ULL;
unsigned long long int var_80 = 3763891622040209431ULL;
unsigned long long int var_81 = 10607821068211094500ULL;
unsigned long long int var_82 = 257450359320390646ULL;
unsigned long long int var_83 = 6561109142608725271ULL;
unsigned long long int var_84 = 15248220504161224470ULL;
unsigned long long int var_85 = 12085086826120072726ULL;
unsigned long long int var_86 = 17593141466125009778ULL;
unsigned long long int var_87 = 3817305213474915887ULL;
unsigned long long int var_88 = 719222145052293633ULL;
unsigned long long int var_89 = 7065504421020357241ULL;
unsigned long long int var_90 = 11987948289138427185ULL;
unsigned long long int var_91 = 308853328973833214ULL;
unsigned long long int var_92 = 10539210955156944699ULL;
unsigned long long int var_93 = 696712388616077955ULL;
unsigned long long int var_94 = 10617030721741942138ULL;
unsigned long long int arr_0 [13] ;
unsigned long long int arr_3 [21] ;
unsigned long long int arr_4 [21] ;
unsigned long long int arr_5 [14] ;
unsigned long long int arr_6 [14] ;
unsigned long long int arr_7 [14] [14] [14] ;
unsigned long long int arr_8 [14] [14] ;
unsigned long long int arr_9 [14] ;
unsigned long long int arr_10 [14] [14] ;
unsigned long long int arr_11 [14] [14] ;
unsigned long long int arr_12 [14] [14] ;
unsigned long long int arr_13 [14] [14] [14] [14] [14] ;
unsigned long long int arr_14 [14] [14] ;
unsigned long long int arr_15 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_16 [14] [14] [14] [14] [14] ;
unsigned long long int arr_19 [14] [14] ;
unsigned long long int arr_20 [14] ;
unsigned long long int arr_21 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_22 [14] ;
unsigned long long int arr_25 [14] [14] ;
unsigned long long int arr_26 [14] [14] [14] [14] ;
unsigned long long int arr_28 [14] [14] [14] [14] ;
unsigned long long int arr_29 [14] [14] [14] [14] ;
unsigned long long int arr_30 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_33 [14] [14] [14] [14] [14] ;
unsigned long long int arr_37 [14] [14] [14] ;
unsigned long long int arr_38 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_43 [14] [14] ;
unsigned long long int arr_45 [14] [14] ;
unsigned long long int arr_47 [14] [14] [14] ;
unsigned long long int arr_48 [14] [14] [14] [14] ;
unsigned long long int arr_49 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_54 [14] [14] [14] [14] [14] ;
unsigned long long int arr_63 [14] ;
unsigned long long int arr_69 [14] ;
unsigned long long int arr_72 [14] [14] [14] ;
unsigned long long int arr_74 [14] [14] [14] [14] ;
unsigned long long int arr_76 [14] [14] [14] [14] [14] ;
unsigned long long int arr_79 [14] [14] ;
unsigned long long int arr_87 [14] [14] [14] [14] [14] ;
unsigned long long int arr_96 [14] [14] [14] [14] ;
unsigned long long int arr_97 [14] [14] [14] ;
unsigned long long int arr_99 [14] [14] [14] [14] [14] ;
unsigned long long int arr_102 [14] [14] [14] ;
unsigned long long int arr_103 [14] [14] [14] ;
unsigned long long int arr_107 [14] ;
unsigned long long int arr_109 [14] [14] [14] [14] ;
unsigned long long int arr_2 [13] ;
unsigned long long int arr_17 [14] [14] [14] ;
unsigned long long int arr_23 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_27 [14] [14] [14] ;
unsigned long long int arr_35 [14] [14] [14] ;
unsigned long long int arr_36 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_41 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_42 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_57 [14] [14] [14] [14] [14] ;
unsigned long long int arr_58 [14] [14] ;
unsigned long long int arr_62 [14] [14] [14] ;
unsigned long long int arr_65 [14] [14] ;
unsigned long long int arr_77 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_84 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_85 [14] [14] [14] [14] [14] ;
unsigned long long int arr_86 [14] [14] [14] [14] [14] ;
unsigned long long int arr_91 [14] ;
unsigned long long int arr_92 [14] [14] [14] [14] [14] ;
unsigned long long int arr_93 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_100 [14] [14] [14] [14] ;
unsigned long long int arr_101 [14] [14] [14] [14] ;
unsigned long long int arr_106 [14] ;
unsigned long long int arr_113 [14] [14] [14] ;
unsigned long long int arr_116 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 12827559672112587582ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 14807867870473963437ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 629131142792083982ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 13675411574329088062ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 7706570214393663563ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 993214258950598552ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 8335909847551463080ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 243351306559021738ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 16625854054052786717ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = 9567861244869693302ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 196159870019993120ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 6957042923175841229ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = 5282387010513066415ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11754926430259836914ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 11637137466110468721ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = 10382572485950391394ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = 6004376066396371269ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6005010783037654909ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = 2890000458343010992ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = 2345038405479907815ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 8948941594420257549ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 17767320497153226606ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 287660562129680116ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 98656230004999481ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 4695078659090512107ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 7786086186334863169ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1333702658214803939ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_43 [i_0] [i_1] = 9209881746299641221ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_45 [i_0] [i_1] = 5713971965278046414ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 17571895746732936929ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 17215409358364688012ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3278255058087319078ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = 7463216503924389150ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_63 [i_0] = 16541000839682224612ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_69 [i_0] = 2296061939365876785ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = 16552496190580059615ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = 6455262734244801043ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 8586747368004648207ULL : 16080295428940903123ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_79 [i_0] [i_1] = 13018527198548309153ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_87 [i_0] [i_1] [i_2] [i_3] [i_4] = 15597863398915586416ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_96 [i_0] [i_1] [i_2] [i_3] = 9747333809665341723ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_97 [i_0] [i_1] [i_2] = 5214556720384534521ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_99 [i_0] [i_1] [i_2] [i_3] [i_4] = 11793201309187805111ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_102 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 631089619163417338ULL : 11208722922202410845ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_103 [i_0] [i_1] [i_2] = 5865604651223350985ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_107 [i_0] = (i_0 % 2 == 0) ? 4824817274153688200ULL : 12880640915943690952ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_109 [i_0] [i_1] [i_2] [i_3] = 9173249597918258130ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 12789719222276054408ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 4528571883556575532ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 5565742226984761465ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 16337746267814494756ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2389146981664748512ULL : 11699845130904892934ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 2616873308975182005ULL : 8476999109905750510ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4534757155759408378ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3958801345415008846ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = 5135504177749461115ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_58 [i_0] [i_1] = 15279915183711762360ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8185196884198160680ULL : 12089547354629649696ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_65 [i_0] [i_1] = (i_0 % 2 == 0) ? 16099583207383547857ULL : 2818498266235345959ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 3745665829044553110ULL : 6585458259806920595ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 7597679448324728350ULL : 12001223541582924456ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 6361360666965736684ULL : 10082356752207399000ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 7742730160692043924ULL : 4518708864030513178ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_91 [i_0] = 8893066881474643516ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] = 11266532113428939872ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_93 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 13697101676473924846ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_100 [i_0] [i_1] [i_2] [i_3] = 726413393960376412ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_101 [i_0] [i_1] [i_2] [i_3] = 3164612691738159992ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_106 [i_0] = (i_0 % 2 == 0) ? 3886584739882418778ULL : 2051562870753089915ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_113 [i_0] [i_1] [i_2] = 3431164046911173760ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_116 [i_0] = 10255010872100709054ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_62 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_65 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_91 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_93 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_100 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_101 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_106 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_113 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_116 [i_0] );
}
void test(unsigned long long int var_0, unsigned long long int var_1, unsigned long long int var_2, unsigned long long int var_3, unsigned long long int var_4, unsigned long long int var_5, unsigned long long int var_6, unsigned long long int var_7, unsigned long long int var_8, unsigned long long int var_9, unsigned long long int var_10, int zero, unsigned long long int arr_0 [13] , unsigned long long int arr_3 [21] , unsigned long long int arr_4 [21] , unsigned long long int arr_5 [14] , unsigned long long int arr_6 [14] , unsigned long long int arr_7 [14] [14] [14] , unsigned long long int arr_8 [14] [14] , unsigned long long int arr_9 [14] , unsigned long long int arr_10 [14] [14] , unsigned long long int arr_11 [14] [14] , unsigned long long int arr_12 [14] [14] , unsigned long long int arr_13 [14] [14] [14] [14] [14] , unsigned long long int arr_14 [14] [14] , unsigned long long int arr_15 [14] [14] [14] [14] [14] [14] , unsigned long long int arr_16 [14] [14] [14] [14] [14] , unsigned long long int arr_19 [14] [14] , unsigned long long int arr_20 [14] , unsigned long long int arr_21 [14] [14] [14] [14] [14] [14] [14] , unsigned long long int arr_22 [14] , unsigned long long int arr_25 [14] [14] , unsigned long long int arr_26 [14] [14] [14] [14] , unsigned long long int arr_28 [14] [14] [14] [14] , unsigned long long int arr_29 [14] [14] [14] [14] , unsigned long long int arr_30 [14] [14] [14] [14] [14] [14] , unsigned long long int arr_33 [14] [14] [14] [14] [14] , unsigned long long int arr_37 [14] [14] [14] , unsigned long long int arr_38 [14] [14] [14] [14] [14] [14] [14] , unsigned long long int arr_43 [14] [14] , unsigned long long int arr_45 [14] [14] , unsigned long long int arr_47 [14] [14] [14] , unsigned long long int arr_48 [14] [14] [14] [14] , unsigned long long int arr_49 [14] [14] [14] [14] [14] [14] , unsigned long long int arr_54 [14] [14] [14] [14] [14] , unsigned long long int arr_63 [14] , unsigned long long int arr_69 [14] , unsigned long long int arr_72 [14] [14] [14] , unsigned long long int arr_74 [14] [14] [14] [14] , unsigned long long int arr_76 [14] [14] [14] [14] [14] , unsigned long long int arr_79 [14] [14] , unsigned long long int arr_87 [14] [14] [14] [14] [14] , unsigned long long int arr_96 [14] [14] [14] [14] , unsigned long long int arr_97 [14] [14] [14] , unsigned long long int arr_99 [14] [14] [14] [14] [14] , unsigned long long int arr_102 [14] [14] [14] , unsigned long long int arr_103 [14] [14] [14] , unsigned long long int arr_107 [14] , unsigned long long int arr_109 [14] [14] [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_16 , arr_19 , arr_20 , arr_21 , arr_22 , arr_25 , arr_26 , arr_28 , arr_29 , arr_30 , arr_33 , arr_37 , arr_38 , arr_43 , arr_45 , arr_47 , arr_48 , arr_49 , arr_54 , arr_63 , arr_69 , arr_72 , arr_74 , arr_76 , arr_79 , arr_87 , arr_96 , arr_97 , arr_99 , arr_102 , arr_103 , arr_107 , arr_109 );
    checksum();
    printf("%llu\n", seed);
}
