/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4 
5 
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=5;
	while(i>=1)
	{
	int j=1;
	int k=5;
	while(j<=i)
	{
	printf("%d ",k);
	k=k-1;
	j=j+1;
	}
	printf("\n");
	i=i-1;
	}
	return 0;
}
