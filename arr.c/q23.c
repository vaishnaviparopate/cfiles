//create a list that store the factorial of a first n natural number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	int p=0,i;
	for(i=1; i<=n; i++);
	{ 
	int fac=1;
	for(int j=1; j<=i; j++)
	{
	fac=fac*j;
	arr[p]=fac;
	p=p+1;
	}
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
