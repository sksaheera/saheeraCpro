// program to read full name,gender,native place of a person

  #include<stdio.h>
  main()
  {
    char name,gender,place;

    printf("enter ur name");
    scanf("%c",&name);
    printf("enter ur gender(M/F)");
    fflush(stdin);
    scanf("%c",&gender);
    printf("enter ur native_place");
    fflush(stdin);
    scanf("%c",&place);

    printf("\n name is %c",name);
    printf("\n gender is %c",gender);
    printf("\n native_place is %c",place);

  }
