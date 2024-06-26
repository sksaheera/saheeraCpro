// program to find biggest 4 numbers

  #include<stdio.h>
  main()
  {
   int a,b,c,d;
   a=b=c=d=0;

   printf("enter numbers");
   scanf("%d%d%d%d",&a,&b,&c,&d);

   if(a>b && a>c && a>d)
     printf("the biggest number is %d", a);
      else
         if(b>a && b>c && b>d)
           printf("the biggest number is %d",b);
        else
           if(c>a && c>b && c>d)
             printf("the biggest number is %d",c);
          else
            printf("the biggest number is %d",d);
  }
