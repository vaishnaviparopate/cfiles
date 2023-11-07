/*
*-*-*-*
*-----*
*-----*
*-*-*-*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,t;
	int k=2;
	for(i=1; i<=1; i++)
	{
	for(j=1; j<=n; j++)
	{
	printf("😝️ ");
	}
	printf("\n");
	}
	for(t=1; t<=n-2; t++)
	{
	for(j=1; j<=n; j++)
	{
	if(j==1 || j==n)
	{
	printf("😝️ ");
	}
	else{
	printf("   ");
	}
	}
	printf("\n");
	}
	for(j=1; j<=n; j++)
	{
	printf("😝️ ");
	}
	printf("\n");
	for(i=1; i<=n; i++)
	{
	printf("😝️\n");
	}
	return 0;
	}
	
