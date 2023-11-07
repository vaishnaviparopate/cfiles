/*
5 4 3 2 1
- 9 8 7 6
- - 12 11 10
- - - 14 13
- - - - 15
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int h=5;
	int t=0;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=t; j++)
	{
	printf("# ");
	}int k=h;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("%d ",k);
	k=k-1;
	}
	printf("\n");
	t=t+1;
	h=h+(n-i);
	}return 0;
}
