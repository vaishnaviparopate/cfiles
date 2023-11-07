/*
-----1
---101
--1001
-10001
100001
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1; i<=2*n+2; i++)
	{
	printf(" ");
	}
	printf("1\n");
	int k=n;
	for(i=1; i<=n; i++)
	{	
	int j;
	for(j=1; j<=k+2; j++)
	{
	printf(" ");
	}
	printf("1 ");
	for(j=1; j<=i; j++)
	{
	printf("0 ");
	}
	k=k-2;
	printf("1");
	printf("\n");
        }
        return 0;
}
