//construct a flowchart to copy the element
#include<stdio.h>
int main()
{
	int n,m;
	printf("enter the number:");
	scanf("%d %d",&n,&m);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i);
	scanf("%d",&arr[i]);
	}
	int arr1[n+m];
	for(int i=0; i<n; i++)
	{
	arr1[i]=arr[i];
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr1[i]);
	}
	return 0;
	
}
