// program to calculate electricity from the inputted present month and last month reading

  #include<stdio.h>
  main()
  {
     int pre,last,uc;
     float amt;
     pre=last=uc=amt=0;

     printf("enter present month reading..:");
     scanf("%d",&pre);
     printf("enter last month reading...:");
     scanf("%d",&last);

     uc=pre-last;
     amt=uc*7.85;

     printf("bill amt is:%f",amt);

  }
