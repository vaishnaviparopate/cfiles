/*
1 
3 3
5 5 5
7 7 7 7
9 9 9 9 9
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int k=1;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			printf("%d ",k);
			j=j+1;
		}
		printf("\n");
		k=k+2;
		i=i+1;
	}
	return 0;
}
