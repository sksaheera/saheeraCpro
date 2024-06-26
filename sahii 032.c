// program to read the price of 3 pens and display which is the costliest one

    #include<stdio.h>
    main()
 {
   int rey,mon,par;


   printf("enter reynolds pen cost:");
   scanf("%d",&rey);
   printf("enter  montex pen cost:");
   scanf("%d",&mon);
   printf("enter parker pen cost:");
   scanf("%d",&par);

   if(rey>mon && rey>par)
     printf("%d rey is costliest",rey);
    else
      if(mon>par && mon>par)
       printf("%d  mon is costliest",mon);
      else
        printf("%d  par is costliest",par);

 }
