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

```
CPUID(0x4FFFFFFE), exit number=0 exits=11827
CPUID(0x4FFFFFFE), exit number=1 exits=61745
CPUID(0x4FFFFFFE), exit number=2 exits=0
CPUID(0x4FFFFFFE), exit number=3 exits=0
CPUID(0x4FFFFFFE), exit number=4 exits=0
CPUID(0x4FFFFFFE), exit number=5 exits=0
CPUID(0x4FFFFFFE), exit number=6 exits=0
CPUID(0x4FFFFFFE), exit number=7 exits=20715
CPUID(0x4FFFFFFE), exit number=8 exits=0
CPUID(0x4FFFFFFE), exit number=9 exits=0
CPUID(0x4FFFFFFE), exit number=10 exits=143925
CPUID(0x4FFFFFFE), exit number=11 exits=0
CPUID(0x4FFFFFFE), exit number=12 exits=80591
CPUID(0x4FFFFFFE), exit number=13 exits=0
CPUID(0x4FFFFFFE), exit number=14 exits=0
CPUID(0x4FFFFFFE), exit number=15 exits=0
CPUID(0x4FFFFFFE), exit number=16 exits=0
CPUID(0x4FFFFFFE), exit number=17 exits=0
CPUID(0x4FFFFFFE), exit number=18 exits=0
CPUID(0x4FFFFFFE), exit number=19 exits=0
CPUID(0x4FFFFFFE), exit number=20 exits=0
CPUID(0x4FFFFFFE), exit number=21 exits=0
CPUID(0x4FFFFFFE), exit number=22 exits=0
CPUID(0x4FFFFFFE), exit number=23 exits=0
CPUID(0x4FFFFFFE), exit number=24 exits=0
CPUID(0x4FFFFFFE), exit number=25 exits=0
CPUID(0x4FFFFFFE), exit number=26 exits=0
CPUID(0x4FFFFFFE), exit number=27 exits=0
CPUID(0x4FFFFFFE), exit number=28 exits=25757
CPUID(0x4FFFFFFE), exit number=29 exits=2
CPUID(0x4FFFFFFE), exit number=30 exits=182340
CPUID(0x4FFFFFFE), exit number=31 exits=1771
CPUID(0x4FFFFFFE), exit number=32 exits=258117
CPUID(0x4FFFFFFE), exit number=33 exits=0
CPUID(0x4FFFFFFE), exit number=34 exits=0
CPUID(0x4FFFFFFE), exit number=35 exits=0
CPUID(0x4FFFFFFE), exit number=36 exits=0
CPUID(0x4FFFFFFE), exit number=37 exits=0
CPUID(0x4FFFFFFE), exit number=38 exits=0
CPUID(0x4FFFFFFE), exit number=39 exits=0
CPUID(0x4FFFFFFE), exit number=40 exits=11750
CPUID(0x4FFFFFFE), exit number=41 exits=0
CPUID(0x4FFFFFFE), exit number=42 exits=0
CPUID(0x4FFFFFFE), exit number=43 exits=0
CPUID(0x4FFFFFFE), exit number=44 exits=0
CPUID(0x4FFFFFFE), exit number=45 exits=0
CPUID(0x4FFFFFFE), exit number=46 exits=6
CPUID(0x4FFFFFFE), exit number=47 exits=2
CPUID(0x4FFFFFFE), exit number=48 exits=137076
CPUID(0x4FFFFFFE), exit number=49 exits=39974
CPUID(0x4FFFFFFE), exit number=50 exits=0
CPUID(0x4FFFFFFE), exit number=51 exits=0
CPUID(0x4FFFFFFE), exit number=52 exits=0
CPUID(0x4FFFFFFE), exit number=53 exits=0
CPUID(0x4FFFFFFE), exit number=54 exits=3
CPUID(0x4FFFFFFE), exit number=55 exits=3
CPUID(0x4FFFFFFE), exit number=56 exits=0
CPUID(0x4FFFFFFE), exit number=57 exits=0
CPUID(0x4FFFFFFE), exit number=58 exits=0
CPUID(0x4FFFFFFE), exit number=59 exits=0
CPUID(0x4FFFFFFE), exit number=60 exits=0
CPUID(0x4FFFFFFE), exit number=61 exits=0
CPUID(0x4FFFFFFE), exit number=62 exits=0
CPUID(0x4FFFFFFE), exit number=63 exits=0
CPUID(0x4FFFFFFE), exit number=64 exits=0
CPUID(0x4FFFFFFE), exit number=65 exits=0
CPUID(0x4FFFFFFE), exit number=66 exits=0
CPUID(0x4FFFFFFE), exit number=67 exits=0
CPUID(0x4FFFFFFE), exit number=68 exits=0
```

the kernel log output:
```
[  394.794795] number_of_exits =11827
[  396.840382] number_of_exits =61745
[  398.344186] number_of_exits =0
[  470.034647] number_of_exits =0
[  472.972417] number_of_exits =0
[  474.501896] number_of_exits =0
[  476.198529] number_of_exits =0
[  478.016972] number_of_exits =20715
[  480.035627] number_of_exits =0
[  481.934875] number_of_exits =0
[  484.417890] number_of_exits =143925
[  486.798268] number_of_exits =0
[  489.623929] number_of_exits =80591
[  491.885864] number_of_exits =0
[  538.794314] number_of_exits =0
[  540.946522] number_of_exits =0
[  542.362744] number_of_exits =0
[  543.897144] number_of_exits =0
[  545.568215] number_of_exits =0
[  547.188157] number_of_exits =0
[  550.152933] number_of_exits =0
[  551.883011] number_of_exits =0
[  553.099653] number_of_exits =0
[  554.586006] number_of_exits =0
[  556.069515] number_of_exits =0
[  557.590489] number_of_exits =0
[  559.356475] number_of_exits =0
[  561.071836] number_of_exits =0
[  562.856719] number_of_exits =25757
[  591.974937] number_of_exits =2
[  594.511765] number_of_exits =182340
[  595.893040] number_of_exits =1771
[  597.115340] number_of_exits =258117
[  598.253620] number_of_exits =0
[  599.676571] number_of_exits =0
[  601.279864] not defined exit number in SDM: 35
[  602.704035] number_of_exits =0
[  604.276237] number_of_exits =0
[  605.853226] not defined exit number in SDM: 38
[  617.814993] number_of_exits =11750
[  620.018276] number_of_exits =0
[  631.768259] not defined exit number in SDM: 42
[  633.736265] number_of_exits =0
[  634.914611] number_of_exits =0
[  636.803491] number_of_exits =0
[  638.709740] number_of_exits =6
[  641.007128] number_of_exits =2
[  643.429819] number_of_exits =137076
[  645.806769] number_of_exits =39974
[  649.696819] number_of_exits =0
[  656.441989] number_of_exits =0
[  657.899733] number_of_exits =0
[  659.998661] number_of_exits =0
[  674.386463] number_of_exits =3
[  679.881967] number_of_exits =3
[  681.757291] number_of_exits =0
[  683.467433] number_of_exits =0
[  685.442969] number_of_exits =0
[  687.562161] number_of_exits =0
[  690.404003] number_of_exits =0
[  692.596506] number_of_exits =0
[  694.532743] number_of_exits =0
[  696.872199] number_of_exits =0
[  705.044538] number_of_exits =0
[  707.967031] not defined exit number in SDM: 65
[  718.653965] number_of_exits =0
[  721.204497] number_of_exits =0
[  724.956178] number_of_exits =0
```


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
