#include<stdio.h>

main()

{
 
 int a,b,c,d;
 printf("Enter the value a = ");
 scanf("%d",&a);
 printf("Enter the value b = ");
 scanf("%d",&b);
 printf("Enter the value c = ");
 scanf("%d",&c);
 printf("Enter the value d = ");
 scanf("%d",&d);

 (a>b) ? (a>c) ? (a>d) ? printf("A is max"):printf("D is max") : (c>d)? printf("C is max"): printf("D is max")
       : (b>c) ? (b>d) ? printf("B is max"):printf("D is max") : (c>d)? printf("C is max"): printf("D is max");
}
