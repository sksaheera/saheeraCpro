// program to read ur year of birth and check whether u were born on leap year or not

  #include<stdio.h>
  main()
  {
    int year,r;
    year=r=0;

    printf("enter ur year:");
    scanf("%d",&year);

    r=year%4;

    if(r==0)
       printf("%d is a leap year",year);
      else
       printf("%d is not a leap year",year);
  }
