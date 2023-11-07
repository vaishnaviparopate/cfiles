/*
- - - - 0
- - - 1 0
- - 2 1 0
- 3 2 1 0
4 3 2 1 0
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int i;
	for(i=1; i<=n; i++)
	{
		int j;
		for(j=1; j<=n-i; j++)
		{
			printf("# ");
		}
		int k;
		for( k=i; k>=0; k--)
		{
		 printf("%d ",k);
		}
		printf("\n");
	
	}
		return 0;
}
