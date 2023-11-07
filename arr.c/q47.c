//rotate the given array 'a' by k steps,where k is non negative 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enetr the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	int b[n];
	for(int i=0; i<=n-1; i++)
	{
	b[i]=arr[n-1-i];
	}
	for(int i=0; i<=n-1; i++)
	{
	printf("%d ",b[i]);
	}
	int k;
	printf("enter number k:");
	scanf("%d",&k);
	for(int i=0,j=k-1; i<=j; i++,j--)
	{
	int temp=b[i];
	b[i]=b[j];
	b[j]=temp;
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",b[i]);
	}
	printf("\n");
	for(int i=k,j=n-1; i<=j; i++,j--)
	{
	int temp=b[i];
	b[i]=b[j];
	b[j]=temp;
	}
	for(int i=0; i<n;i++)
	{
	printf("%d",b[i]);
	}
	
	return 0;
}
