//program that reads two num from the user and prints their absolute difference

  #include<stdio.h>
  main()
  {
   int a,b,diff;
   a=b=diff=0;

   printf("enter number :");
   scanf("%d",&a);
   printf("enter number :");
   scanf("%d",&b);

     if(a>b)
        diff=a-b;
       else
         diff=b-a;

     printf("diff is %d",diff);
   printf("\n");

  }
