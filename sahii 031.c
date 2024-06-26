// program to check if a given number is divisible by both 3&5

  #include<stdio.h>
  main()
  {
   int number;

   printf("enter number");
   scanf("%d",&number);

   if(number %3 == 0 & number %5 == 0)
        printf("number is divisible by 3&5");
     else
        printf("enter valid number");

  }
