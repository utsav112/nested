#include<stdio.h>

main()
{
 
   int a,b,c,d,e;
   printf("Enter value a = ");
   scanf("%d",&a);
   printf("Enter value b = ");
   scanf("%d",&b);
   printf("Enter value c = ");
   scanf("%d",&c);
   printf("Enter value d = ");
   scanf("%d",&d);
   printf("Enter value e = ");
   scanf("%d",&e);

   (a>b)?(a>c)?(a>d)?(a>e)?printf("A is max"):printf("E is max")
		     :(d>e)?printf("D is max"):printf("E is max")
	       :(c>d)?(c>e)?printf("C is max"):printf("E is max")
		     :(d>e)?printf("D is max"):printf("E is max")
	:(b>c)?(b>d)?(b>e)?printf("B is max"):printf("E is max")
		     :(d>e)?printf("D is max"):printf("E is max")
	       :(c>d)?(c>e)?printf("C is max"):printf("E is max")
		     :(d>e)?printf("D is max"):printf("E is max");
}
