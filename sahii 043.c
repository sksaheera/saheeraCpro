// program to print the discount and the actual amt

  #include<stdio.h>
  main()
  {
    long sales,dis,amt;
    sales=dis=amt=amt=0;

   printf("enter sales:");
   scanf("%d",&sales);

    if(sales>=25000)
      dis=sales*25/100;
    else
      if(sales>=20000)
       dis=sales*20/100;
    else
      if(sales>=10000)
       dis=sales*10/100;
    else
      if(sales>=5000)
      dis=sales*5/100;

      amt=sales-dis;

      printf("\n discount is:%ld",dis);
      printf("\n actual amt is:%ld",amt);

  }
