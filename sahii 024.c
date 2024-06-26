// program to swao the values of 2 variables a,b (withoput using any temp,+,-)

#include<stdio.h>
main()
{
 int a,b;

 printf("enter values for A:");
 scanf("%d",&a);
 printf("enter value for B:");
 scanf("%d",&b);

 a=a*b;
 b=a/b;
 a=a/b;

 printf("A is :%d",a);
 printf("\nB is:%d",b);

}
