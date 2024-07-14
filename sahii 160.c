//program to read three T/F questions of your choice and display the answer
#include<stdio.h>
main()
{
char q1,q2,q3;

printf("welcome to online examination");
printf("\n------------------------");

printf("\n1.c language is developed in the year 1972:(t/f):");
scanf("%c",&q1);

printf("\n2.c language is developed by ken thompson:(t/f):");
fflush(stdin);
scanf("%c",&q2);

printf("\n3.c language is derived from BCPL & B:(t/f):");
fflush(stdin);
scanf("%c",&q3);

printf("\n your answers are as follows:\n");
printf("\nquestion 1:%c",q1);
printf("\nquestion 2:%c",q2);
printf("\nquestion 3:%c",q3);

printf("\n");
}

