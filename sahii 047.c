//program to generate the finial bill of a customer

  #include<stdio.h>
  main()
  {
    double sales,dis,ext,amt;
    int days;
    char type;
    sales=dis=ext=amt=days=0;

    printf("enter TV amt:");
    scanf("%lf",&sales);
    printf("r u paying cash(y/n):");
    fflush(stdin);
    scanf("%c",&type);

    if(type=='y')
    {
    dis=sales*25/100;
     amt=sales-dis;
    }
  else
  {
    printf("in how many days u will pay:");
    scanf("%d",&days);
    if(days<7)
      {
        dis=sales*15/100;
        amt=sales-dis;
      }
  else
      {
        ext=sales*10/100;
        amt=sales+ext;
      }
  }
  if(dis>0)
     printf("\n discount is:%lf",dis);
    else
      printf("\n extra amt is:%lf",ext);

      printf("\n amt is:%lf",amt);
  }









