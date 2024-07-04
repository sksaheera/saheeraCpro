//program to read name,gender,native place of the person

#include <stdio.h>

int main()
{
    char name,gender,nativeplace;

    printf("enter your name");
    scanf("%s",&name);
    printf("enter your gender(M,F)");
    fflush(stdin);
    scanf("%c",&gender);
    printf("enter your native place");
    fflush(stdin);
    scanf("%s",&nativeplace);

    printf("/n name is %s", name);
    printf("/n gender is %c",gender);
    printf("/n nativeplace%s",nativeplace);

    return 0;
}
