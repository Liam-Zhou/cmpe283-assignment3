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
    // int temp = 0;
    // int i = 0;
    // int tens = 1;
    // for(i = strlen(argv[1])-1; i > -1; i--){
    //     printf("argv[1][i]=%s\n", argv[1][i]);
    //     printf("(int)argv[1][i]=%d\n", (int)argv[1][i]);
    //     temp += (int)argv[1][i] * tens;
    //     tens = tens * 10;
    // }
    ecx = 13;
    __cpuid(&eax, &ebx, &ecx, &edx);
    printf("CPUID(0x4FFFFFFE), exit number=1 exit=%u\n", eax);
}
