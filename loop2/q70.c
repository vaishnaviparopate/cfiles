/*
----*
---**
--***
-****
*****
-****
--***
---**
----*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("  ");
	}
	int k;
	for(k=1; k<=i; k++)
	{
	printf("* ");
	}
	printf("\n");
	}
	int t=n-1;
	int h;
	for(h=1; h<=t; h++)
	{int j;
	for(j=1; j<=h+1; j++)
	{
	printf("  ");
	}
	for(j=1; j<=t-(h-1); j++)
	{
	printf("* ");
	}
	printf("\n"); 
	}
	return 0;
}




















