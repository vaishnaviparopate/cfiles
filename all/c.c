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
	int m=0;
	for(int i=0; i<n; i++)
	{
	for(int j=i+1; j<n; j++)
	{
	m=m+arr[i]*arr[j];
	}
	}
	printf("%d",m);
	return 0;
	
}
