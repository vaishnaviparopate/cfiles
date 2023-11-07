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
	int k=0;
	int t=5;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=k; j++)
	{
	printf(" ");
	}
	for(j=1; j<=t; j++)
	{
	printf("%d",i);
	}
	printf("\n");
	k=k+2;
	t=t-2;
	}return 0;
}
