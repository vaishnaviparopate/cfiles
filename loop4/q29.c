/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
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
	while(j<=i)
	{
	printf("%d ",j);
	j=j+1;
	}
	printf("\n");
	i=i-1;
	}
	return 0;
}
