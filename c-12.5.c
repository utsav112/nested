#include<stdio.h>

main()
{
  int a,b,c;
  printf("Enter the value a= ");
  scanf("%d",&a);
  printf("Enter the value b= ");
  scanf("%d",&b);
  printf("Enter the value c= ");
  scanf("%d",&c);

  (a>b)? (a>c)? printf("A is max") :printf("C is max")
       : (b>c)?printf("B is max") :printf("C is max");
	   
	   }

