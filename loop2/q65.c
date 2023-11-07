/*
22222
-4444
--666
---88
----10
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=0;
	int t=2;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=k; j++)
	{
	printf("  ");
	}
	for(j=1; j<n-(i-1); j++)
	{
	printf("%d ",t);
	}
	printf("\n");
	k=k+1;
	t=t+2;
	}
	return 0;
	
}
