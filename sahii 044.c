//program to accept basic salary,allowance,deduction and experience of an employee and perform

 #include<stdio.h>
 main()
 {
  long basic,all,de,exp,gross,net,bonus;
  basic=all=de=exp=bonus=gross=net=0;

  printf("enter basic salary:");
  scanf("%ld",&basic);
  printf("enter allowance:");
  scanf("%ld",&all);
  printf("enter deductions:");
  scanf("%ld",&de);
  printf("enter experience:");
  scanf("%ld",&exp);

  gross=basic+all;
  net=gross-de;

  if(exp>5)
  {
  bonus=3*net;
  printf("3 months net salary as bonus:%ld",bonus);
  }
  else
   if(exp>3)
   {
     bonus=2*net;
     printf("2 months net salary as bonus:%ld",bonus);
   }
   else
   {
     bonus=net;
     printf("1 month net salary as bonus:%ld",bonus);
   }
   printf("\n");
 }
