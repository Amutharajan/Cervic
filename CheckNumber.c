#include<stdio.h>
void main()
{
 int a;
 printf("Enter the number:");
 scanf("%d",&a);
 if(a>0)
 {
  printf("The number entered is Positive");
 }
 else if(a<0)
 {
  printf("The number entered is negative");
 }
 else
  printf("The number is zero");
}
