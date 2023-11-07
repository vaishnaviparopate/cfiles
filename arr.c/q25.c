//contruct  the flowchart to input the number from the user ,stor them in a list ,then show how to determine the maximum number.
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
	for(int i=0; i<n; i++)
	{
	printf("%d\n",arr[i]);
	}
	int max=0;
	for(int i=0; i<n; i++)
	{
	if(max<arr[i])
	{
	max=arr[i];
	}
	}
	printf("max=%d",max);
	return 0;
}
