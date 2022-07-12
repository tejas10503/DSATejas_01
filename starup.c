#include <stdio.h>
void main() 
{
int a,b,c,i,x,y,n;
printf("Enter the no of rows you wish to print: ");
scanf("%d",&a);
n=a;
b=2*a-1;
c=0;
for(x=0;x<a;x++)
	{for(y=0;y<b;y++)
	 	{printf("*");
		}
	printf("\n");
	b-=2;
	c+=1;
	 for(i=0;i<c;i++)
		{printf(" ");
		}
}
}
