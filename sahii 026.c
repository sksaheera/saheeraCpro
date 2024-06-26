// program to read the cost of samsung mobile,the biggest 2 nos

   #include<stdio.h>
   main()
 {
   int p1,p2;

   printf("cost of samsung mobile");
   scanf("%d",&p1);

   printf("cost of vivo moblie");
   scanf("%d",&p2);

   if(p1>p2)
     printf("samsung is costly");
   else
          if(p1=p2)
            printf("both are in same price");
   else
        printf("vivo is costly");
 }
