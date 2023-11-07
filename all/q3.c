#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enetr the number:");
	scanf("%d",&arr[i]);
	}
	int i=0;
	while(i<n)
	{
	int lhs=0,rhs=0;
	int mid=i+1;
	int k=0;
	if(j=0; j<mid; j++)
	{
	  lhs=lhs+arr[j];
	}
	for (int j=mid+1; j<n; j++)
	{
	rhs=rhs+arr[i];
	j=j+1;
	}
	if(lhs==rhs)
	{
	printf("%d",mid+1);
	break;
	}
	i=i+1;
	}
	return 0;
}
