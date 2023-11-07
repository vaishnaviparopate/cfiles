/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1; i<=n; i++)
	{
		int j;
		int k=i;
		for(j=1; j<=i; j++)
		{
		printf("%d ",k);
		k=k-1;	
		}
		printf("\n");
	}
	return 0;

}
