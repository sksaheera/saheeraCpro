// program that prompts  the user to enter the names same age of 2 frnds,and displays which frnd is older or if they are the same age

 #include<stdio.h>
 main()
 {
   char name1,name2;
   int age1,age2;

    printf("enter  1st person name");
    scanf("%s",&name1);
    printf("enter 1st person age");
    fflush(stdin);
    scanf("%d",&age1);
    printf("enter 2nd person name");
    fflush(stdin);
    scanf("%s",&name2);
    printf("enter 2nd person age");
    fflush(stdin);
    scanf("%d",&age2);

    if(age1>age2)
       printf("name1 is older");
    else
       if(age1<age2)
          printf("name2 is older");
        else
            if(age1=age2)
              printf("both are same age");
 }
