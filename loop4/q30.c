/*
5 5 5 5 5
4 4 4 4 
3 3 3
2 2
1
*/

#include<stdio.h>
int main()
{

	int i;
	scanf("%d",&i);
	for(i; i>=1; i--)
	{
	int j;
	for(j=1; j<=i; j++)
	{
	printf("%d ",i);
	}
	printf("\n");
	} 
	return 0;
}

