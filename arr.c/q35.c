//insertion of number
#include<stdio.h>
int main()
{
	int n,p,num;
	printf("enter the number:");
	scanf("%d %d %d",&n,&p,&num);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=n; i>p; i--)
	{
	arr[i]=arr[i-1];
	}
	arr[p]=num;
	n=n+1;
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
