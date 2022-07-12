#include <stdio.h>
void main ()
{int n,a[500],x,s=0;
printf("Enter number of digits you want to enter: ");
scanf("%d",&n);
for(x=0;x<n;x++)
	{printf("Enter value no %d:",x+1);
	 scanf("%d",&a[x]);
	}
for(x=0;x<n;x++)
	{s=s+a[x];
	}
printf("Summation of numbers provided is %d.",s);
}
