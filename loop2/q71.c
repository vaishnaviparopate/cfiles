/*
*-*-*-*-*
-*-*-*-*
--*-*-*
---*-*
----*
----*
---*-*
--*-*-*
-*-*-*-*
*-*-*-*-*
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
	for(j=1; j<=i; j++)
	{
	printf(" ");
	}
	for(j=1; j<=n-(i-1); j++)
	{
	printf("* ");
	}
	printf("\n");
	}
	int t=n;
	int k;
	for(k=1; k<=t; k++)
	{int j;
	for(j=1; j<=t-(k-1); j++)
	{
	printf(" ");
	}int h;
	for(h=1; h<=k; h++)
	{printf("* ");
	}printf("\n");
	}return 0;
}
