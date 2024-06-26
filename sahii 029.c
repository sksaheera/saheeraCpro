// program  to check whether a given number is +ve or -ve

  #include<stdio.h>
  main()
  {
    int number;

    printf("enter any number:");
    scanf("%d",&number);

    if(0<number)
      printf("the number is +ve");
     else
        if(0>number)
          printf("the number is -ve");
  }
