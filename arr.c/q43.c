//median
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
	int temp;
	for(int i=0; i<n; i++)
	{
	for(int j=i+1; j<n; j++)
	{
	if(arr[i]>arr[j])
	{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	}
	}
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\n");
	int median,m,v;
	if(n%2==0)
	{
	m=n/2;
	v=(n/2)-1;
	median=(m+v)/2;
	printf("even median=%d",median);
	}
	else
	{median=n/2;
	printf("odd median=%d",median);
	}
	return 0;
	}
