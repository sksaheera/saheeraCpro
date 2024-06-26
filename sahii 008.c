// program to read days from the user and convert into years,months,weeks,days

#include<stdio.h>
main()
{
  int total,yrs,mon,days,weeks;


  printf("enter total no of days");
  scanf("%d",&total );

  yrs=total/365;
  total = total - (yrs*365);
  mon=total/30;
  total= total - (mon*30);
  weeks=total/7;
  total= total - (weeks*7);
  days=total;

  printf("%d yrs,%d month,%d weeks,%d days",yrs,mon,weeks,days);
}
