//create a list that store all the prime number upto n.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	int p=0;
	for(int i=1; i<=n; i++)
	{int c=0;
	for(int j=1; j<=i; j++)
	{
	if(i%j==0)
	{
	c=c+1;
	}
	}
	if(c==2)
	{
	arr[p]=i;
	p=p+1;
	}
	}
	for(int i=0; i<p; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
