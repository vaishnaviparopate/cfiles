/*
1 2 3 4
5 6 7 8 
9 10 11 12
13 14 15 16
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=1;
	for(i=1; i<=n; i++)
	{
		int j;
		for(j=1; j<=n; j++)
		{
		printf("%d ",k);
		k=k+1;
		}
		printf("\n");
		
	}
	return 0;
}
