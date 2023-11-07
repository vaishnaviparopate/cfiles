/*
4321
-321
--21
---1
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=0;
	int t=4;
	for(i=1;i<=n; i++)
	{
	int j;
	for(j=1; j<=k; j++)
	{
	printf("  ");
	}int h=t;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("%d ",h);
	h=h-1;
	}
	printf("\n");
	k=k+1;
	t=t-1;
	}
	return 0;
}
