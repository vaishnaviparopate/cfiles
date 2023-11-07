/*
----1
--222
33333
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=4;
	int t=1;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=k; j++)
	{
	printf("# ");
	}
	for(j=1; j<=t; j++)
	{
	printf("%d ",i);
	}
	printf("\n");
	k=k-2;
	t=t+2;
	}return 0;
}
