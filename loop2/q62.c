/*
0
2 4
4 8 8
8 16 16 16
16 32 32 32 32
32 64 64 64 64 64
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("0\n");
	int i;
	int k=2;
	for(i=2; i<=n; i++)
	{
	int j;
	for(j=1; j==1; j++)
	{
	printf("%d ",k);
	}
	k=k*2;
	for(j=1; j<=i-1; j++)
	{
	printf("%d ",k);
	}
	printf("\n");	
	}
	return 0;
}
