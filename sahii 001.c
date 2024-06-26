// program to read the name,dob,mobile number

#include<stdio.h>
main()
{
  char name[20], month[10];
  int date,year;
  long long int mob;

  printf("enter ur name");
  scanf("%s",&name);
  printf("enter ur dob(in the form of month,date,year)");
  scanf("%c",&month);
  scanf("%d",&date);
  scanf("%d",&year);
  printf("enter ur mob no");
  scanf("%lld",&mob);

  printf("\n name is %s",name);
  printf("\n dob is %c%d%d",month,date,year);
  printf("\n mob no is %lld",mob);
}
