//Delation sorting
#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number:");
	scanf("%d %d",&n,&p);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=p; i<n; i++)
	{
	arr[i]=arr[i+1];
	}
	n=n-1;
	for(int i=0; i<n; i++)
	{
	printf("%d",arr[i]);
	}
	return 0;
}
