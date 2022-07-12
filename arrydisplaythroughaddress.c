#include <stdio.h>
void main() 
{
int *p,a[5],x,i;
for(x=0;x<5;x++)
	{printf("Enter no for index %d: ",x);
	 scanf("%d",&a[x]);
	}
p=a;
for(i=0;i<5;i++)
	{printf("%d",*(p+i));
	}
}

