/*
1 3 5 7 9
3 5 7 9
5 7 9
7 9
9
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=n;
	int m=1;
	
	for(i=1; i<=n; i++)
	{
	int j;
	int u=m;
	for(j=1; j<=k; j++)
	{
	printf("%d ",u);
	u=u+2;
	}k=k-1;
	printf("\n");
	m=m+2;
	}return 0;
}
