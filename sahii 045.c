//program to check whether the person is eligible for bonus or not based upon the data using with logical operators

 #include<stdio.h>
 main()
 {
  char ms,gen;
  int age=0;

  printf("enter ur maritual status(y/n):");
  scanf("%c",&ms);
  printf("enter ur gender(m/f):");
  fflush(stdin);
  scanf("%c",&gen);
  printf("enter ur age:");
  scanf("%d",&age);

    if(ms=='y' || gen=='m' && age>=30 || gen=='f' && age>=25)
      printf("eligible for bonus..");
     else
      printf("not eligible..");
 }
