/*
1
3 2
6 5 4
10 9 8 7
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
			k=k-1;
			j=j+1;
		}
		printf("\n");
		i=i+1;
		k=k+((i*2)-1);
		
	}
	return 0;
}   
