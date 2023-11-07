/*
5
4 4
3 3 3
2 2 2 2 
1 1 1 1 1
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=5;
	for(i=1; i<=n; i++)
	{
	int j;
	
	for(j=1; j<=i; j++)
	{
	printf("%d ",k);
	}
	k=k-1;
	printf("\n");
	}
	return 0;
}
