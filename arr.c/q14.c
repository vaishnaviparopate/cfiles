//make a array and find duplict elements and its count.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{printf("%d ",arr[i]);
	}
	int c=0;
	for(int i=0; i<n; i++)
	
	{c=1;
	for(int j=i+1; j<=n; j++)
	{
	if(arr[i]==arr[j])
	{
	c=c+1;
	arr[j]=0;
	}
	}
	if(c>1)
	{
	printf("\n%d\n",arr[i]);
	}
	}
	
	return 0;
	
}
