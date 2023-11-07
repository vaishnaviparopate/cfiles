#include<stdio.h>
int main()
{
	int n,i;
	int k=2,l=1;
	scanf("%d",&n);
	for(i=1; i<=n-1; i++)
	{
	int j;
	int m;
	for(j=1; j<=(n-l); j++)
	{printf("  ");
	}
        for( m=1; m<=l; m++)
        {
        printf("*  ");
        }
        for(j=1; j<=((n*2)-k); j++)
        {
        printf(" ");
        }
        for(m=1; m<=l; m++)
        {printf("*  ");}
	l=l+1;
	k=k+2;
	printf("\n");}
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=n+n; j++)
	{
	printf("*  ");
	}
	printf("\n");
	}
	int t=n+(n-1);
	for(i=1; i<=t; i++)
	{
	int j;
	for(j=1; j<=i; j++)
	{
	printf(" ");
	}
	for(j=1;j<=t-(i-1); j++)
	{
	printf("*  ");
	}
	printf("\n");
	}
	return 0;
}
