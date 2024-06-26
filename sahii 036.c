// program to read rating of 3 movies of ur choice and display which is the hit movie

  #include<stdio.h>
  main()
  {
   int movie1,movie2,movie3;

   printf("rating of avatar movie:");
   scanf("%d",&movie1);
   printf("rating of idea of uh movie:");
   scanf("%d",&movie2);
   printf("rating of  maxton hall movie:");
   scanf("%d",&movie3);

    if(movie1>movie2 && movie1>movie3)
        printf("movie1 is hit");
      else
        if(movie2>movie3 && movie2>movie1)
        printf("movie2 is hit");
       else
         printf("movie3 is hit");
  }
