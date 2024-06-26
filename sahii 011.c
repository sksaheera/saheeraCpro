// program to read the name,gender,height,roll no of the person and display how many bites of memory occpuied

#include<stdio.h>
main()
{
     char name[20],gender;
     int roll;
     double height;

     printf("enter ur name");
     scanf("%s",&name);
     printf("enter ur gender(M/F)");
     fflush(stdin);
     scanf("%c",&gender);
     printf("enter u roll_no");
     scanf("%d",&roll);
     printf("enter ur height");
     scanf("%lf",&height);

     printf("\n size of name is:%s",sizeof(name));
     printf("\n size of gender is:%c",sizeof(gender));
     printf("\n size of roll_no is:%d",sizeof(roll));
     printf("\n size of height is:%lf",sizeof(height));

     printf("/n");
}
