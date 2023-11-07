/*
##*##
##*##
*****
##*##
##*##
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=n; j++)
	{
	if(j==3 || i==3)
	printf("*");
	else
	printf("#");
	}
	printf("\n");
	}
	return 0;
}
