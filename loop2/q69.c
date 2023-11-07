/*
*
**
***
****
*****
******
******
*****
****
***
**
*
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
	for(j=1; j<=i; j++)
	{
	printf("* ");
	}
	printf("\n");
	}
	int t=n;
	for(t; t>=1; t--)
	{
	int j;
	for(j=1; j<=t; j++)
	{
	printf("* ");
	}
	printf("\n");
	}return 0;
}



