#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	int k;
	printf("enter the k:");
	scanf("%d",&k);
	for(int i=0; i<n; i++)
	{
	printf("enetr the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\n");
	
	int p=0;
	for(int i=n-1; i>0; i--)
	{
	arr[p]=arr[i];
	p=p+1;
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
	
}
