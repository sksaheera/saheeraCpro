// program to read rupees and convert into paise

  #include<stdio.h>
  main()
  {
    int rupees,paise;
    rupees=paise=0;

    printf("enter amt is rupees:");
    scanf("%d",&rupees);

    paise=rupees*100;

    printf("%d paise...",paise);


  }
