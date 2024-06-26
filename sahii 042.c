// program to accept marks of 3 sub and perform

  #include<stdio.h>
  main()
  {
   float avg,A,B,C=0;

   printf("enter avg marks:");
   scanf("%f",&avg);

    if(avg>=90)
     printf("A+");
    else
      if(avg>80)
       printf("A");
    else
       if(avg>70)
       printf("B+");
    else
       if(avg>60)
        printf("B");
    else
       if(avg>50)
        printf("C");
    else
       if(avg<50)
        printf("fail");

  }
