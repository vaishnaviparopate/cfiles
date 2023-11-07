/*
5 4 3 2 1-1 2 3 4 5
5 4 3 2-----2 3 4 5
5 4 3---------3 4 5
5 4-------------4 5
5-----------------5
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=0;
	for(i=1; i<=n; i++)
	{
	int j;
	int t
	for(j=1; j<=n-(i-1); j++)
	{
	printf("%d ",t);
	t=t-1;
	}
	for(j=1; j<=k; j++)
	{
	printf("  ");
	}
	for(j=1; j<=n-(i-1); j++)
	{
	t=t+1;
	printf("%d ",t);
	}
	printf("\n");
	k=k+2;
	}
	return 0;
}
