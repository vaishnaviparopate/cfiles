/*
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
	int k;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=(n-i); j++)
	{printf(" ");
	}
	for(k=1; k<=i; k++)
	{
	printf("* ");
	}
	printf("\n");
	}
	return 0;
}
