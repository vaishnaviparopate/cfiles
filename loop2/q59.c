/*
11111
--222
----3
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=1;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1;j<=k; j++)
	{
	printf(" ");
	}
	for(j=1; j<=n-i; j++)
	{
	printf("%d ",i);
	}
	k=k+2;
	printf("\n");
	}
	return 0;
}
