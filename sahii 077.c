//program to print all the armstrong no btw 100 to 1000

 #include<stdio.h>
 #include<math.h>
 main()
 {
  int no,ori_no,res,rem=0;

  printf("armstrong no btw 100 to 1000:\n");

  for(no=100;no<1000;no++)
  {
  ori_no=no;
  res=0;
  }
  while(ori_no=0)
{
  rem=ori_no%10;
  res=pow(rem,3);
  ori_no/=10;
}

  if(res==no)
  {
  printf("%d\n",no);
  }
 }
