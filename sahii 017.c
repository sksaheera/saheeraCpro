// program to calculate gross salary and net salary from  the input basic salary,allowances and deductions

 #include<stdio.h>
 main()
 {
   int basic,allowance,deduction,gross,net;
   basic=allowance=deduction=gross=net=0;

   printf("enter basic salary:");
   scanf("%d",&basic);
   printf("enter allowance:");
   scanf("%d",&allowance);
   printf("enter deduction");
   scanf("%d",&deduction);

   gross=basic+allowance;
   net=gross-deduction;

   printf("gross salary is:%d",gross);
   printf("\n net salary is:%d",net);

 }
