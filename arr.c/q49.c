#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
	printf("%d",arr[i]);
	}
	int b[n];
	for(int i=0; i<n; i++)
	{
	b[i]=arr[n-1-i];
	}
	for(int i=0; i<n; i++)
	{
	printf("%d",b[i]);
	}
	return 0;
}
