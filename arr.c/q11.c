//make a flowchart to find the sum and average of elements in a list. take element as input from the user

#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n],a;
	for(int i=0; i<n; i++)
	{printf("enter the number:%d\n",i);
	scanf("%d",&arr[i]);
	}
	int sum=0;
	for(int i=0; i<n; i++)
	{printf("%d ",arr[i]);
	sum=sum+arr[i];
	}
	int avg=sum/n;
	printf("sum=%d\n",sum);
	printf("avg=%d\n",avg);
	return 0;
}
