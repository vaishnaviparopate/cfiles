//binary search
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:");
	scanf("%d",&arr[i]);
	}
	int low=0;
	int high=n;
	int b,mid,pos;
	printf("enetr the b:");
	scanf("%d",&b);
	while(low<=high)
	{
	mid=(low+high)/2;
	if(b==arr[mid])
	{
	pos=mid;
	break;
	}
	else if(b>arr[mid])
	{
	low=mid+1;
	}
	else
	{high=mid-1;
	}
	}printf("pos=%d",pos+1);
	return 0;
}
