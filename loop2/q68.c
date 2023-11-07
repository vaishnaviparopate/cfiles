/*
*****
****-
***--
**---
*----
**---
***--
****-
*****
*/

#include<stdio.h>
int main()
{
	int k=2;
	int i;
	int n;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("* ");
	}
	printf("\n");
	}int t=n;
	for(k=2; k<=t; k=k+1)
	{
	int j;
	for(j=1; j<=k; j++)
	{
	printf("* ");
	}
	printf("\n");
	}
	return 0;
}













