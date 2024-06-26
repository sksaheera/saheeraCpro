// program to read temp i centigrade and display a suitable msg according to the temp state

  #include<stdio.h>
  main()
  {
    int temp,cen;

    printf("enter the temp:");
    scanf("%d",&temp);

    cen=(temp-32)*5/9;

    if(temp<0)
      printf("freezing weather");
     else
       if(temp<10)
         printf("very cold weather");
        else
         if(temp<20)
           printf("cold weather");
          else
            if(temp<30)
              printf("normal weather");
            else
              if(temp<40)
                printf("its hot");
               else
                 printf("its very hot");
  }
