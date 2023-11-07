/*
*****
--*
--*
--*-
--*
--*
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{n=n+1;
	}
	else
	{n=n;
	}
	int i,j;
	for(i=1; i<=1; i++)
	{
	for(j=1; j<=n; j++)
	{
	printf("😝️");
	}
	printf("\n");
	}
	for(j=1;j<=n;j++)
	{
	int k;
	for(k=1; k<=n/2; k++)
	{
	printf("  ");
	}
	printf("🤭️");
	printf("\n");
	}return 0;
}
