//create a list that store all the factors of a number n,take n as a input from the user
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	int c=0;
	for(int i=1; i<=n; i++)
	{
	if(n%i==0)
	{arr[c]=i;
	c=c+1;
	}
	}
	for(int i=0; i<c; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
