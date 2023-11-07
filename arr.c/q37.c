/*selection sort
#include<stdio.h>
#include<limits.h>

int main()
{
	int n;
	printf("enetr the number:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
        for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\n");
	for(int i=0; i<n-1; i++)
        {
        int min= INT_MAX;
        int minidx=-1;
        for(int j=i; j<n; j++)
        {
        if(min>arr[j])
        {
        min=arr[j];
        minidx=j;
        }
        }
         int temp=arr[minidx];
         arr[minidx]=arr[i];
         arr[i]=temp;
        }
        printf("\n");
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
*/



//minimum number


#include<stdio.h>
int main()
{
	int n,p=0;
	scanf("%d",&n);
	int arr[p];
	
	for(int i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
	
	int arr1[n];
	for(int i=1; i<n; i++)
	{
	int min=arr[0];
	for(int j=1; j<n-i; j++)
	{
	if(min>arr[j])
	{
	min=arr[j];
	}
        }
	arr1[p]=min;
	p=p+1;
	}
	
	for(int i=0; i<n; i++)
	{
	printf("%d",arr1[i]);
	}
	return 0;
	
}













