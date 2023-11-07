
#include<stdio.h>
int main()
{
	int n,b;
	printf("enter the number:");
	scanf("%d %d",&n,&b);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	
	}
	int l=0;
	int h=n-1;
	int c=-1;
	
	while (l<=h)
	{
	int mid=(l+h)/2;
	
	if (arr[mid]==b)
	{
	c=mid;
	h=mid-1;
	}
	else if(arr[mid]<b)
	{
	l=mid+1;
	}
	else
	{
	h=mid-1;
	}
	}
	if(c!=-1)
	{
	printf("%d",c);
	}
	else
	{
	printf("-1");
	}


	 return 0;
	
}
