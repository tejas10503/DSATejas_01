#include <stdio.h>
void main ()
{int n,a[500],x,s=0;
printf("Enter number you want to enter (Enter 0 here to end): ");
do
{scanf("%d",&n);
s+=n;}while (n!=0);
printf("Summation of numbers provided is %d.",s);
}
