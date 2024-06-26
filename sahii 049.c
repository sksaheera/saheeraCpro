// program  to accept marks of c,cpp,java and calculate total avg,class only if he student passes in all the 3 sub

  #include<stdio.h>
  main()
  {
   int c,cpp,java;
   float  total,avg;
   c=cpp=java=total=avg=0;

   printf("enter marks for c/cpp/java:");
   scanf("%d%d%d",&c,&cpp,&java);

   if(c>=40 && cpp>=40 && java>40)
   {
    total=c+cpp+java;
    avg=total/3;
    printf("\n total:%.0f \n avg:%.3f \n",total,avg);

      if(avg>=60)
        printf("1st class");
      else
       if(avg>=50)
        printf("2nd class");
      else
        if(avg>=40)
         printf("3rd class");
   }
   else
     if(c<40)
      printf("\n u failed in c,so no class..");
     if(cpp<40)
      printf("\n u failed in cpp,so no class..");
     if(java<40)
      printf("\n u failed in java,so no class..");
  }
