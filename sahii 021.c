// group of frnds went to restaurant,u must help those frnds to split the total bill along with the TIP among them

  #include<stdio.h>
  main()
  {
    float bill,tipper,totalbill,amtperperson;
    int nooffrnds;

    printf("enter the total bill amt :");
    scanf("%f",&bill);
    printf("enter tip percentage(5% || 10%):");
    scanf("%f",&tipper);
    printf("enter the no of frnds:");
    scanf("%d",&nooffrnds);

    totalbill=bill+(bill*(tipper/100));
    amtperperson=totalbill/nooffrnds;

    printf("total bill including tip:%.2f\n",totalbill);
    printf("each person should pay:%.2f\n",amtperperson);

  }
