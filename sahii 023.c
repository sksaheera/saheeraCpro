// program to check whether the student passed or failed

   #include<stdio.h>
   main()
   {
    float avg=0;

    printf("enter ur avg marks");
    scanf("%f",&avg);

    if(avg>=35)
    {
         printf("ur passed");
         printf("\n congrats");
    }

    else
    {
        printf("ur failed");
        printf("\n betterluck next time");
    }

   }
