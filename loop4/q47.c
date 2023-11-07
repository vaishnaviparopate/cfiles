/*
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for( i=1; i<=n; i++)
	{       int k=i;
	        int j;
		for( j=1; j<=i; j++)
		{
		printf("%d ",i);
		}	
		for(int k=i; k<=n-1; k++)
		{
			printf("%d ",k+1);
		
		}
		printf("\n");
	}
	return 0;
	
	
}
