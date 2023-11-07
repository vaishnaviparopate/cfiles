/*
1
2 4 
3 6 9
4 8 12 16 
5 10 15 20 25
6 12 18 24 30 36
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=i; j++)
	{
	k=i*j;
	printf("%d ",k);
	}
	printf("\n");
	}return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

