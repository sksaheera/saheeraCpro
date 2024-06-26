// program to read the  age of the person and dispalay he/she eligible to vote

  #include<stdio.h>
  main()
  {
    int age;

    printf("enter ur age");
    scanf("%d",&age);

    if(age>=18)
         printf("he/she ur are eligible to vote");
    else
         printf("ur not eligible to vote");
  }
