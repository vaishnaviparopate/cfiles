/*
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
	int k;
	int m=0;
	for (k=1; k<=n; k++)
	{
	int j;
	for(j=1; j<=n-(k-1); j++)
	{
	printf("* ");
	}
	for(j=1; j<=(m*2)+1; j++)
	{
	printf(" ");
	}
	for(j=1; j<=n-(k-1); j++)
	{
	printf("* ");
	}m=m+2;
	printf("\n");
	}
	return 0;
}
