#include <stdio.h>
void main() 
{
int a,b,c,i,x,y,n=1,w=1;
printf("Enter the no of rows you wish to print: ");
scanf("%d",&a);
b=2*a-1;
c=b/2;
for(x=0;x<a;x++)
	{for(i=0;i<c;i++)
		{printf(" ");
		}
	 for(y=0;y<n;y++)
	 	{printf("%d",w);
	 	 w++;
		}
	n+=2;
	c-=1;
	printf("\n");
	}
}
