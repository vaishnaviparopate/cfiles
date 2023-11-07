/*
*-----------------*
*-*-------------*-*
*-*-*---------*-*-*
*-*-*-*-----*-*-*-*
*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*
*-*-*-*-----*-*-*-*
*-*-*---------*-*-*
*-*-------------*-*
*-----------------*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int t=8;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=i; j++)
	{
	printf("* ");
	}
	for(j=1; j<=(t*2)+1; j++)
	{
	printf(" ");
	}
	for(j=1; j<=i; j++)
	{
	printf("* ");
	}
	printf("\n");
	t=t-2;
	}
	int h=n;
	int k;
	int m=0;
	for (k=1; k<=h; k++)
	{
	int j;
	for(j=1; j<=h-(k-1); j++)
	{
	printf("* ");
	}
	for(j=1; j<=(m*2)+1; j++)
	{
	printf(" ");
	}
	for(j=1; j<=h-(k-1); j++)
	{
	printf("* ");
	}m=m+2;
	printf("\n");
	}
	return 0;
}


