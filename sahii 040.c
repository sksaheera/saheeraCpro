// program to read a character and check whether it is vowel or consonant

  #include<stdio.h>
  #include<ctype.h>
  main()
  {
    char x;

    printf("enter a character:");
    scanf("%c",&x);


    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
      printf("%C is lowercase vowel",x);
      else
        if(x=='A' || x=='E' || x=='I' || x=='o' || x=='u')
          printf("%c is uppercase vowel",x);
         else
         printf("%c is a consonat");
         printf("\n");
  }
