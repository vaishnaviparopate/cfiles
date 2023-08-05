//Bubble sort
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	int temp;
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<n-i-1; j++)
	{
	if(arr[j]>arr[j+1])
	{
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
	}
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
