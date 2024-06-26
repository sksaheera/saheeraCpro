//program to read the floor no and display which view the floor has

  #include<stdio.h>
  main()
  {
   int floor_no;

   printf("enter floor no:");
   scanf("%d",&floor_no);

    if(floor_no%2==0)
      printf("hey uh have 'beach view' for ur flat");
     else
       if(floor_no<=50)
        printf("hey uh have'forest view' for ur flat");
      else
        if(floor_no<50)
      printf("we have only 50 floors");

  }
