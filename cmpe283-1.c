#include <stdio.h>
#include <sys/types.h>
#include <string.h>

static inline void
__cpuid(unsigned int *eax, unsigned int *ebx, unsigned int *ecx,
        unsigned int *edx)
{
    asm volatile("cpuid"
                 : "=a" (*eax),
                 "=b" (*ebx),
                 "=c" (*ecx),
                 "=d" (*edx)
                 : "0" (*eax), "1" (*ebx), "2" (*ecx), "3" (*edx));
}

int
main(int argc, char **argv)
{ 
    
 
    unsigned int eax, ebx, ecx, edx;
    unsigned int exits;
    
    eax = 0x4FFFFFFE;
    if(!strcmp("0",argv[1])){ecx = 0;}
    if(!strcmp("1",argv[1])){ecx = 1;}
    if(!strcmp("2",argv[1])){ecx = 2;}
    if(!strcmp("3",argv[1])){ecx = 3;}
    if(!strcmp("4",argv[1])){ecx = 4;}
    if(!strcmp("5",argv[1])){ecx = 5;}
    if(!strcmp("6",argv[1])){ecx = 6;}
    if(!strcmp("7",argv[1])){ecx = 7;}
    if(!strcmp("8",argv[1])){ecx = 8;}
    if(!strcmp("9",argv[1])){ecx = 9;}
    if(!strcmp("10",argv[1])){ecx = 10;}
    if(!strcmp("11",argv[1])){ecx = 11;}
    if(!strcmp("12",argv[1])){ecx = 12;}
    if(!strcmp("13",argv[1])){ecx = 13;}
    if(!strcmp("14",argv[1])){ecx = 14;}
    if(!strcmp("15",argv[1])){ecx = 15;}
    if(!strcmp("16",argv[1])){ecx = 16;}
    if(!strcmp("17",argv[1])){ecx = 17;}
    if(!strcmp("18",argv[1])){ecx = 18;}
    if(!strcmp("19",argv[1])){ecx = 19;}
    if(!strcmp("20",argv[1])){ecx = 20;}
    if(!strcmp("21",argv[1])){ecx = 21;}
    if(!strcmp("22",argv[1])){ecx = 22;}
    if(!strcmp("23",argv[1])){ecx = 23;}
    if(!strcmp("24",argv[1])){ecx = 24;}
    if(!strcmp("25",argv[1])){ecx = 25;}
    if(!strcmp("26",argv[1])){ecx = 26;}
    if(!strcmp("27",argv[1])){ecx = 27;}
    if(!strcmp("28",argv[1])){ecx = 28;}
    if(!strcmp("29",argv[1])){ecx = 29;}
    if(!strcmp("30",argv[1])){ecx = 30;}
    if(!strcmp("31",argv[1])){ecx = 31;}
    if(!strcmp("32",argv[1])){ecx = 32;}
    if(!strcmp("33",argv[1])){ecx = 33;}
    if(!strcmp("34",argv[1])){ecx = 34;}
    if(!strcmp("35",argv[1])){ecx = 35;}
    if(!strcmp("36",argv[1])){ecx = 36;}
    if(!strcmp("37",argv[1])){ecx = 37;}
    if(!strcmp("38",argv[1])){ecx = 38;}
    if(!strcmp("39",argv[1])){ecx = 39;}
    if(!strcmp("40",argv[1])){ecx = 40;}
    if(!strcmp("41",argv[1])){ecx = 41;}
    if(!strcmp("42",argv[1])){ecx = 42;}
    if(!strcmp("43",argv[1])){ecx = 43;}
    if(!strcmp("44",argv[1])){ecx = 44;}
    if(!strcmp("45",argv[1])){ecx = 45;}
    if(!strcmp("46",argv[1])){ecx = 46;}
    if(!strcmp("47",argv[1])){ecx = 47;}
    if(!strcmp("48",argv[1])){ecx = 48;}
    if(!strcmp("49",argv[1])){ecx = 49;}
    if(!strcmp("50",argv[1])){ecx = 50;}
    if(!strcmp("51",argv[1])){ecx = 51;}
    if(!strcmp("52",argv[1])){ecx = 52;}
    if(!strcmp("53",argv[1])){ecx = 53;}
    if(!strcmp("54",argv[1])){ecx = 54;}
    if(!strcmp("55",argv[1])){ecx = 55;}
    if(!strcmp("56",argv[1])){ecx = 56;}
    if(!strcmp("57",argv[1])){ecx = 57;}
    if(!strcmp("58",argv[1])){ecx = 58;}
    if(!strcmp("59",argv[1])){ecx = 59;}
    if(!strcmp("60",argv[1])){ecx = 60;}
    if(!strcmp("61",argv[1])){ecx = 61;}
    if(!strcmp("62",argv[1])){ecx = 62;}
    if(!strcmp("63",argv[1])){ecx = 63;}
    if(!strcmp("64",argv[1])){ecx = 64;}
    if(!strcmp("65",argv[1])){ecx = 65;}
    if(!strcmp("66",argv[1])){ecx = 66;}
    if(!strcmp("67",argv[1])){ecx = 67;}
    if(!strcmp("68",argv[1])){ecx = 68;}
    // int temp = 0;
    // int i = 0;
    // int tens = 1;
    // for(i = strlen(argv[1])-1; i > -1; i--){
    //     printf("argv[1][i]=%s\n", argv[1][i]);
    //     printf("(int)argv[1][i]=%d\n", (int)argv[1][i]);
    //     temp += (int)argv[1][i] * tens;
    //     tens = tens * 10;
    // }
//     int i = 0;
//     for(i=1;i<20;i++){
//     ecx = i;
//     __cpuid(&eax, &ebx, &ecx, &edx);
//     printf("CPUID(0x4FFFFFFE), exit number=%d exit=%u\n", i, eax);
//     } 
//     switch(argv[1]){
//         case "1": ecx = 1; break;
//         case "2": ecx = 2; break;
//         case "3": ecx = 3; break;
//         case "4": ecx = 4; break;
//         case "5": ecx = 5; break;
//         case "6": ecx = 6; break;
//         case "7": ecx = 7; break;
//         default:printf("error\n"); break;
// //     }
    int i = 0;
    for(i=0;i<20;i++){
        ecx = i;
        __cpuid(&eax, &ebx, &ecx, &edx);
        printf("CPUID(0x4FFFFFFE), exit number=%d exit=%u\n", i, eax);
    } 
    // __cpuid(&eax, &ebx, &ecx, &edx);
    // printf("CPUID(0x4FFFFFFE), exit number=%s exit=%u\n",argv[1] , eax);
}
