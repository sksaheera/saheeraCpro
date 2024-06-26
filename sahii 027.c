// write a program to calculate the discount and final amt

  #include<stdio.h>
  main()
  {
    int finalamt,sales,discount;

    printf("enter the sales");
    scanf("%d",&sales);

    if(sales>=25000)
       discount=sales*0.1;
    else
       discount=sales*0.05;

     finalamt=sales-discount;

     printf("%d is finalamt",finalamt);
  }
