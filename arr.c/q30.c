/*In a certain hospital, the weights of newborn babies are recorded each month and then processed at the end of the month to determine the following:
1. mean weight of the babies
2. maximum of the weights
3. minimum the weights.
Write a program to show how the weights can be stored as an array first and then processed to determine the desired outputs. Input n from the user where n is number of babies born in a particular month.
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	int mean,sum=0;
	for(int i=0; i<n; i++)
	{
	sum=sum+arr[i];
	}
	mean=sum/n;
	printf("mean=%d\n",mean);
	int max=arr[0],min=arr[0];
	for(int i=1; i<n; i++)
	{
	if(max<arr[i])
	{
	max=arr[i];
	}
	if(min>arr[i])
	{
	min=arr[i];
	}
	}
	printf("max=%d\n",max);
	printf("min=%d",min);
	return 0;
}
