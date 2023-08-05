//selection sort
#include<stdio.h>
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
	int m[n];
	int min=arr[0],c=0;
	for(int i=1; i<n; i++)
        {
        for(int j=0; j<n; j++)
        {
        if(min>arr[i])
        {
        min=arr[i];
        m[c]=min;
        c=c+1;
        }
        }
        
	}
	for(int i=0; i<n; i++)
	{
	printf("%d",m[i]);
	}
	return 0;
}
