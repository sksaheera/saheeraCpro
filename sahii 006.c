

// program to swap values of two variables A and B without using 3rd variable

   #include<stdio.h>
    main()
{
  int a,b;

  printf("enter value for A");
  scanf("%d",&a);
  printf("enter value for B");
  scanf("%d",&b);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("A is:%d",a);
  printf("\n B is:%d",b);
}
