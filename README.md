# cmpe283-assignment3
1.For each member in your team, provide 1 paragraph detailing what parts of the lab that member implemented / researched. (You may skip this question if you are doing the lab by yourself). 

Only myself: Yilin Zhou (sjsuid:012571026)

2, Describe in detail the steps you used to complete the assignment. Consider your reader to be someone skilled in software development but otherwise unfamiliar with the assignment. Good answers to this question will be recipes that someone can follow to reproduce your development steps. 

Step1: use the VM environment of assignment2

Step2: modify cpuid.c under arch/x86/kvm to add new feature: leaf function 0x4ffffffe, which return the exist number. And the exits number was counted in vmx.c under arch/x86/kvm/vmx.


Step3: rebuild the new linux kernel using make command：sudo make -j 2 modules && sudo make -j 2 && sudo make modules_install && sudo make install;

Step4: reboot the machine;

Step5: using virt-manager to enter the inner vm and run the test file on inner vm;

Step6: run the test code and get the output:

![Image text](https://github.com/Liam-Zhou/cmpe283-assignment3/blob/main/pic/a3-1.png)
![Image text](https://github.com/Liam-Zhou/cmpe283-assignment3/blob/main/pic/a3-2.png)
 

the kernel log output:
![Image text](https://github.com/Liam-Zhou/cmpe283-assignment3/blob/main/pic/a3-3.png)
![Image text](https://github.com/Liam-Zhou/cmpe283-assignment3/blob/main/pic/a3-4.png)
 


3, Comment on the frequency of exits – does the number of exits increase at a stable rate? Or are there more exits performed during certain VM operations? Approximately how many exits does a full VM boot entail?

  Yes, the number of exits will increase at a stable rate, take the number 10 for example, here is the output:

```
CPUID(0x4FFFFFFE), exit number=10 exits=145712
CPUID(0x4FFFFFFE), exit number=10 exits=145730
CPUID(0x4FFFFFFE), exit number=10 exits=145748
CPUID(0x4FFFFFFE), exit number=10 exits=145766
```

Around over 400000 totally a full VM boot entail.

4, Of the exit types defined in the SDM, which are the most frequent? Least? 

  According to my output, the number10, 30, 32 and 48 have the most exits (over 100000 times), which are the CPUID, I/O instruction, WRMSR and EPT violation in the SDM. The least are number 29, 46, 47, 54 and 55, all of them are lower than 10. They are MOV DR, Access to GDTR or IDTR, Access to LDTR or TR, WBINVD or WBNOINVD and XSETBV in the SDM.
