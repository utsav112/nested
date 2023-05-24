#include<stdio.h>

main()

{
 int a,b,c;
 printf("Enter the value A = ");
 scanf("%d",&a);
 printf("Enter the value B = ");
 scanf("%d",&b);
 printf("Enter the value C = ");
 scanf("%d",&c);
   if(a<b)
   {
     if(a<c)
	 {
     printf("A is min");
   }
    else
	{
      printf("C is min");
    }
   }
   else
   {
     if(b<c)
	 {
      printf("B is min");
     }
     else
	 {
     printf("C is min");
     }
   }
 }
