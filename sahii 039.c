//program to read a character and check whether it is capital or lower case letter or digital or special character

  #include<stdio.h>
  main()
  {
    char ch;

    printf("enter inputted:");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
      printf("%c is uppercase",ch);
     else
       if(ch>=97 && ch<=122)
        printf("%c is lowercase",ch);
       else
       if(ch>=48 && ch<=57)
         printf("%c is digit",ch);
         else
           printf("%c is a special character",ch);
           printf("\n");

  }
