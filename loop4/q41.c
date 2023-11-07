/*
1 2 3 4 5
2 3 4 5 
3 4 5 
4 5 
5
*/
/*
#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	
	for(i; i>=1; i--)
	{
		int j;
		int k=1;
		for(j=1; j<=i; j++)
		{
			printf("%d ",k);
			k=k+1;
		}
		printf("\n");
		k=k+1;
	}
	return 0;
}
*/
#include<stdio.h>
int main()
{       int k=1;
	int i;
	scanf("%d",&i);
	while(i>=1)
	{
		int j=1;
		while(j<=i)
		{
			printf("%d ",k);
			k=k+1;
			j=j+1;
		}
		printf("\n");
		i=i-1;
		k=k-i;
		
	}return 0;
}

