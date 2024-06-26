// program to read the temp in fahrenheit and convert into centigrade

  #include<stdio.h>
  main()
  {
    double fahrenheit,centigrade;

    printf("enter temp in fahrenheit");
    scanf("%lf",& fahrenheit);

    centigrade=('farenheit'-32)*5/9;

    printf("temp in centigrade is:%lf",centigrade);


  }
