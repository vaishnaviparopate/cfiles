/*
*-*-*-*-*
-*-----*-
--*---*--
---*-*---
----*----
*/

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1; i<=1; i++)
	{
	int j;
	for(j=1; j<=n; j++)
	{
	printf(" * ");
	}
	printf("\n");
	}int k=n-1;
	for(i=1; i<n; i++)
	{
	int j;
	for(j=1; j<=n+k; j++)
	{
	if(j==(i+1) || j==(n+(k-1))) printf("*");
	else printf(" ");
	}
	k=k-1;
	printf("\n");
	}
	
}









