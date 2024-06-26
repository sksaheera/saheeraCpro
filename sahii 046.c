// south central railway gives 50% concession to its passenger who fulfills

  #include<stdio.h>
  main()
  {
   char gen;
   int age=0;

    printf("enter ur gender(m/f):");
    scanf("%c",&gen);
    printf("enter ur age:");
    scanf("%d",&age);

    if(gen=='m')
    if(age<=5)
     printf("full concession(no ticket is req)..");
    else
     if(age>=60)
      printf("50% concession is given..");
    else
        printf("concession is not given..");
    else
      if(age<=5)
       printf("full concession(no ticket req)..");
    else
      if(age>=50)
       printf("50% concession is given..");
    else
      printf("concession is not given..");

  }
