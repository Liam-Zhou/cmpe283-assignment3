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
    printf("argv[1] = %s \n",argv[1]);
    unsigned int eax, ebx, ecx, edx;
    unsigned int exits;
    
    eax = 0x4FFFFFFE;
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
//         case '1': ecx = 1; break;
//         case '2': ecx = 2; break;
//         case '3': ecx = 3; break;
//         case '4': ecx = 4; break;
//         case '5': ecx = 5; break;
//         case '6': ecx = 6; break;
//         case '7': ecx = 7; break;
//         default:printf("error\n"); break;
// //     }
//     __cpuid(&eax, &ebx, &ecx, &edx);
//     printf("CPUID(0x4FFFFFFE), exit number=%s exit=%u\n",argv[1] , eax);
}
