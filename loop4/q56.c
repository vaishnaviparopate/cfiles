/*
10
10 8 
10 8 6 
10 8 6 4
10 8 6 4 2
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
	int k=10;
	for(j=1; j<=i; j++)
	{
	printf("%d ",k);
	k=k-2;
	}
	printf("\n");
	}
	return 0;
}


