/*
----*
---**
--*-*
-*--*
*****
*/

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
	int j;
	for(j=1; j<=n; j++)
	{
	if((i+j)==(n+1) || j==n) printf("* ");
	else printf("  ");
	}
	printf("\n");
	}
	for(i=1; i<=1; i++)
	{int j;
	for(j=1; j<=n; j++)
	{
	printf("* ");
	}
	}
	return 0;
}
