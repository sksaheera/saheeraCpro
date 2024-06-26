//  write a program to evalute(a+b)^2

  #include<stdio.h>
  main()
  {
    float a,b,result;

    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enter the value of b:");
    scanf("%f",&b);

    result=(a+b)*(a+b);

    printf("result (a+b)^2 is:%.2f\n",result);

  }
