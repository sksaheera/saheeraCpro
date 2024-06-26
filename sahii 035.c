//program to read cost price and selling from the user and calculate profit or loss or no loss no profit

  #include<stdio.h>
  main()
  {
   int  cost_price,selling_price,rem;

   printf("enter cost price:");
   scanf("%d",&cost_price);
   printf("enter selling price:");
   scanf("%d",&selling_price);

   if(cost_price<selling_price)
   {
       rem=selling_price-cost_price;
       printf("hey great,u have made a profit Rs.%d",rem);
   }
     else
      if(cost_price>selling_price)
      {
          rem=selling_price-cost_price;
         printf("ohh!,u incurred a loss Rs.%d",rem);
      }
        else
          printf("yaa!,no loss...no profit..");
  }
