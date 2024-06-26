// program to read the basic salary of an employe and display gross salary and net salary

#include<stdio.h>
main()
{
  int basic,hra,pf,da,gross,net;

  printf("enter ur basic salary");
  scanf("%d",&basic);

  hra=(0.2)* basic;
  pf=(0.05)*basic;
  da=(0.1)*basic;

  gross =basic+hra+da;
  net = gross-pf;
 printf(" %d is gross salary & %d is net salary",gross,net);

}
